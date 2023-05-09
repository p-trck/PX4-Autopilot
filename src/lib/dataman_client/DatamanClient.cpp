/****************************************************************************
 *
 *   Copyright (c) 2023 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file DatamanClient.cpp
 */

#include <dataman_client/DatamanClient.hpp>

DatamanClient::DatamanClient()
{
	_dataman_request_pub.advertise();
	_dataman_response_sub = orb_subscribe(ORB_ID(dataman_response));

	if (_dataman_response_sub < 0) {
		PX4_ERR("Failed to subscribe (%i)", errno);

	} else {
		// make sure we don't get any stale response by doing an orb_copy
		dataman_response_s response{};
		orb_copy(ORB_ID(dataman_response), _dataman_response_sub, &response);

		_fds.fd = _dataman_response_sub;
		_fds.events = POLLIN;

		hrt_abstime timestamp = hrt_absolute_time();

		dataman_request_s request = {
			.timestamp = timestamp,
			.request_type = DM_GET_ID
		};

		bool success = syncHandler(request, response, timestamp, 1000_ms);

		if (success && (response.client_id > CLIENT_ID_NOT_SET)) {

			_client_id = response.client_id;

		} else {
			PX4_ERR("Failed to get client ID!");
		}
	}
}

DatamanClient::~DatamanClient()
{
	if (_dataman_response_sub >= 0) {
		orb_unsubscribe(_dataman_response_sub);
	}
}

bool DatamanClient::syncHandler(const dataman_request_s &request, dataman_response_s &response,
				const hrt_abstime &start_time, hrt_abstime timeout)
{
	bool response_received = false;
	int32_t ret = 0;
	hrt_abstime time_elapsed = hrt_elapsed_time(&start_time);
	_dataman_request_pub.publish(request);

	while (!response_received && (time_elapsed < timeout)) {

		uint32_t timeout_ms = 1;
		ret = px4_poll(&_fds, 1, timeout_ms);

		if (ret < 0) {
			PX4_ERR("px4_poll returned error: %" PRIu32, ret);
			break;

		} else if (ret == 0) {

			// No response received, send new request
			_dataman_request_pub.publish(request);

		} else {

			bool updated = false;
			orb_check(_dataman_response_sub, &updated);

			if (updated) {
				orb_copy(ORB_ID(dataman_response), _dataman_response_sub, &response);

				if (response.client_id == request.client_id) {

					if ((response.request_type == request.request_type) &&
					    (response.item == request.item) &&
					    (response.index == request.index)) {
						response_received = true;
						break;
					}

				} else if (request.client_id == CLIENT_ID_NOT_SET) {

					// validate timestamp from response.data
					if (0 == memcmp(&(request.timestamp), &(response.data), sizeof(hrt_abstime))) {
						response_received = true;
						break;
					}
				}
			}
		}

		time_elapsed = hrt_elapsed_time(&start_time);
	}

	if (!response_received && ret >= 0) {
		PX4_ERR("timeout after %" PRIu32 " ms!", static_cast<uint32_t>(timeout / 1000));
	}

	return response_received;
}

bool DatamanClient::readSync(dm_item_t item, uint32_t index, uint8_t *buffer, uint32_t length, hrt_abstime timeout)
{
	if (length > g_per_item_size[item]) {
		PX4_ERR("Length  %" PRIu32 " can't fit in data size for item  %" PRIi8, length, static_cast<uint8_t>(item));
		return false;
	}

	bool success = false;
	hrt_abstime timestamp = hrt_absolute_time();

	dataman_request_s request = {
		.timestamp = timestamp,
		.index = index,
		.data_length = length,
		.client_id = _client_id,
		.request_type = DM_READ,
		.item = item
	};

	dataman_response_s response{};
	success = syncHandler(request, response, timestamp, timeout);

	if (success) {

		if (response.status != dataman_response_s::STATUS_SUCCESS) {

			success = false;
			PX4_ERR("readSync failed! status=%" PRIu8 ", item=%" PRIu8 ", index=%" PRIu32 ", length=%" PRIu32,
				response.status, static_cast<uint8_t>(item), index, length);

		} else {
			memcpy(buffer, response.data, length);
		}
	}

	return success;
}

bool DatamanClient::writeSync(dm_item_t item, uint32_t index, uint8_t *buffer, uint32_t length, hrt_abstime timeout)
{
	if (length > g_per_item_size[item]) {
		PX4_ERR("Length  %" PRIu32 " can't fit in data size for item  %" PRIi8, length, static_cast<uint8_t>(item));
		return false;
	}

	bool success = false;
	hrt_abstime timestamp = hrt_absolute_time();

	dataman_request_s request = {
		.timestamp = timestamp,
		.index = index,
		.data_length = length,
		.client_id = _client_id,
		.request_type = DM_WRITE,
		.item = item
	};

	memcpy(request.data, buffer, length);

	dataman_response_s response{};
	success = syncHandler(request, response, timestamp, timeout);

	if (success) {

		if (response.status != dataman_response_s::STATUS_SUCCESS) {

			success = false;
			PX4_ERR("writeSync failed! status=%" PRIu8 ", item=%" PRIu8 ", index=%" PRIu32 ", length=%" PRIu32,
				response.status, static_cast<uint8_t>(item), index, length);
		}
	}

	return success;
}

bool DatamanClient::clearSync(dm_item_t item, hrt_abstime timeout)
{
	bool success = false;
	hrt_abstime timestamp = hrt_absolute_time();

	dataman_request_s request = {
		.timestamp = timestamp,
		.client_id = _client_id,
		.request_type = DM_CLEAR,
		.item = item
	};

	dataman_response_s response{};
	success = syncHandler(request, response, timestamp, timeout);

	if (success) {

		if (response.status != dataman_response_s::STATUS_SUCCESS) {

			success = false;
			PX4_ERR("clearSync failed! status=%" PRIu8 ", item=%" PRIu8,
				response.status, static_cast<uint8_t>(item));
		}
	}

	return success;
}

bool DatamanClient::lockSync(dm_item_t item, hrt_abstime timeout)
{
	bool success = true;
	hrt_abstime timestamp = hrt_absolute_time();

	dataman_request_s request = {
		.timestamp = timestamp,
		.client_id = _client_id,
		.request_type = DM_LOCK,
		.item = item
	};

	dataman_response_s response{};
	response.status = dataman_response_s::STATUS_ALREADY_LOCKED;

	while (success && (response.status == dataman_response_s::STATUS_ALREADY_LOCKED)) {
		success = syncHandler(request, response, timestamp, timeout);
	}

	if (success) {

		if (response.status != dataman_response_s::STATUS_SUCCESS) {

			success = false;

			PX4_ERR("lockSync failed! status=%" PRIu8 ", item=%" PRIu8,
				response.status, static_cast<uint8_t>(item));
		}
	}

	return success;
}

bool DatamanClient::unlockSync(dm_item_t item, hrt_abstime timeout)
{
	bool success = false;
	hrt_abstime timestamp = hrt_absolute_time();

	dataman_request_s request = {
		.timestamp = timestamp,
		.client_id = _client_id,
		.request_type = DM_UNLOCK,
		.item = item
	};

	dataman_response_s response{};
	success = syncHandler(request, response, timestamp, timeout);

	if (success) {

		if (response.status != dataman_response_s::STATUS_SUCCESS) {

			success = false;

			if (response.status == dataman_response_s::STATUS_ALREADY_UNLOCKED) {
				PX4_WARN("Dataman already unlocked for item=%" PRIu8,
					 static_cast<uint8_t>(item));

			} else {
				PX4_ERR("unlockSync failed! status=%" PRIu8 ", item=%" PRIu8,
					response.status, static_cast<uint8_t>(item));
			}
		}
	}

	return success;
}

bool DatamanClient::readAsync(dm_item_t item, uint32_t index, uint8_t *buffer)
{
	bool success = false;
	return success;
}

bool DatamanClient::writeAsync(dm_item_t item, uint32_t index, uint8_t *buffer)
{
	bool success = false;
	return success;
}

void DatamanClient::update()
{
}

bool DatamanClient::lastOperationCompleted(bool &success)
{
	return true;
}

DatamanCache::DatamanCache(int num_items)
{
}