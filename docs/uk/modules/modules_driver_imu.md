# Modules Reference: Imu (Драйвер)

## adis16448

Source: [drivers/imu/analog_devices/adis16448](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/analog_devices/adis16448)

### Usage {#adis16448_usage}

```
adis16448 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## adis16470

Source: [drivers/imu/analog_devices/adis16470](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/analog_devices/adis16470)

### Usage {#adis16470_usage}

```
adis16470 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## adis16477

Source: [drivers/imu/analog_devices/adis16477](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/analog_devices/adis16477)

### Usage {#adis16477_usage}

```
adis16477 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## adis16497

Source: [drivers/imu/analog_devices/adis16497](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/analog_devices/adis16497)

### Usage {#adis16497_usage}

```
adis16497 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## adis16507

Source: [drivers/imu/analog_devices/adis16507](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/analog_devices/adis16507)

### Usage {#adis16507_usage}

```
adis16507 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## bmi055

Source: [drivers/imu/bosch/bmi055](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/bosch/bmi055)

### Usage {#bmi055_usage}

```
bmi055 <command> [arguments...]
 Commands:
   start
     [-A]        Accel
     [-G]        Gyro
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## bmi085

Source: [drivers/imu/bosch/bmi085](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/bosch/bmi085)

### Usage {#bmi085_usage}

```
bmi085 <command> [arguments...]
 Commands:
   start
     [-A]        Accel
     [-G]        Gyro
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## bmi088

Source: [drivers/imu/bosch/bmi088](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/bosch/bmi088)

### Usage {#bmi088_usage}

```
bmi088 <command> [arguments...]
 Commands:
   start
     [-A]        Accel
     [-G]        Gyro
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## bmi088_i2c

Source: [drivers/imu/bosch/bmi088_i2c](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/bosch/bmi088_i2c)

### Usage {#bmi088_i2c_usage}

```
bmi088_i2c <command> [arguments...]
 Commands:
   start
     [-A]        Accel
     [-G]        Gyro
     [-I]        Internal I2C bus(es)
     [-X]        External I2C bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-a <val>]  I2C address
                 default: 24
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## bmi270

Source: [drivers/imu/bosch/bmi270](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/bosch/bmi270)

### Usage {#bmi270_usage}

```
bmi270 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## fxas21002c

Source: [drivers/imu/nxp/fxas21002c](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/nxp/fxas21002c)

### Usage {#fxas21002c_usage}

```
fxas21002c <command> [arguments...]
 Commands:
   start
     [-I]        Internal I2C bus(es)
     [-X]        External I2C bus(es)
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-a <val>]  I2C address
                 default: 32
     [-R <val>]  Rotation
                 default: 0

   regdump

   testerror

   stop

   status        print status info
```

## fxos8701cq

Source: [drivers/imu/nxp/fxos8701cq](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/nxp/fxos8701cq)

### Usage {#fxos8701cq_usage}

```
fxos8701cq <command> [arguments...]
 Commands:
   start
     [-I]        Internal I2C bus(es)
     [-X]        External I2C bus(es)
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-a <val>]  I2C address
                 default: 30
     [-R <val>]  Rotation
                 default: 0

   regdump

   testerror

   stop

   status        print status info
```

## iam20680hp

Source: [drivers/imu/invensense/iam20680hp](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/iam20680hp)

### Usage {#iam20680hp_usage}

```
iam20680hp <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## icm20602

Source: [drivers/imu/invensense/icm20602](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm20602)

### Usage {#icm20602_usage}

```
icm20602 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## icm20608g

Source: [drivers/imu/invensense/icm20608g](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm20608g)

### Usage {#icm20608g_usage}

```
icm20608g <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## icm20649

Source: [drivers/imu/invensense/icm20649](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm20649)

### Usage {#icm20649_usage}

```
icm20649 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## icm20689

Source: [drivers/imu/invensense/icm20689](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm20689)

### Usage {#icm20689_usage}

```
icm20689 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## icm20948

Source: [drivers/imu/invensense/icm20948](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm20948)

### Usage {#icm20948_usage}

```
icm20948 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-M]        Enable Magnetometer (AK8963)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## icm20948_i2c_passthrough

Source: [drivers/imu/invensense/icm20948](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm20948)

### Usage {#icm20948_i2c_passthrough_usage}

```
icm20948_i2c_passthrough <command> [arguments...]
 Commands:
   start
     [-I]        Internal I2C bus(es)
     [-X]        External I2C bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-a <val>]  I2C address
                 default: 105

   stop

   status        print status info
```

## icm40609d

Source: [drivers/imu/invensense/icm40609d](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm40609d)

### Usage {#icm40609d_usage}

```
icm40609d <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## icm42605

Source: [drivers/imu/invensense/icm42605](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm42605)

### Usage {#icm42605_usage}

```
icm42605 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## icm42670p

Source: [drivers/imu/invensense/icm42670p](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm42670p)

### Usage {#icm42670p_usage}

```
icm42670p <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## icm42688p

Source: [drivers/imu/invensense/icm42688p](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm42688p)

### Usage {#icm42688p_usage}

```
icm42688p <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0
     [-C <val>]  Input clock frequency (Hz)
                 default: 0
     [-6]        Drive ICM-42686

   stop

   status        print status info
```

## icm45686

Source: [drivers/imu/invensense/icm45686](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/icm45686)

### Usage {#icm45686_usage}

```
icm45686 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0
     [-C <val>]  Input clock frequency (Hz)
                 default: 0

   stop

   status        print status info
```

## iim42652

Source: [drivers/imu/invensense/iim42652](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/iim42652)

### Usage {#iim42652_usage}

```
iim42652 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0
     [-C <val>]  Input clock frequency (Hz)
                 default: 0

   stop

   status        print status info
```

## iim42653

Source: [drivers/imu/invensense/iim42653](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/iim42653)

### Usage {#iim42653_usage}

```
iim42653 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0
     [-C <val>]  Input clock frequency (Hz)
                 default: 0

   stop

   status        print status info
```

## l3gd20

Source: [drivers/imu/st/l3gd20](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/st/l3gd20)

### Usage {#l3gd20_usage}

```
l3gd20 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   regdump

   testerror

   stop

   status        print status info
```

## lsm303d

Source: [drivers/imu/st/lsm303d](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/st/lsm303d)

### Usage {#lsm303d_usage}

```
lsm303d <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## lsm9ds1

Source: [drivers/imu/st/lsm9ds1](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/st/lsm9ds1)

### Usage {#lsm9ds1_usage}

```
lsm9ds1 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## mpu6000

Source: [drivers/imu/invensense/mpu6000](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/mpu6000)

### Usage {#mpu6000_usage}

```
mpu6000 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## mpu9250

Source: [drivers/imu/invensense/mpu9250](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/mpu9250)

### Usage {#mpu9250_usage}

```
mpu9250 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-M]        Enable Magnetometer (AK8963)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## mpu9250_i2c

Source: [drivers/imu/invensense/mpu9250](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/mpu9250)

### Usage {#mpu9250_i2c_usage}

```
mpu9250_i2c <command> [arguments...]
 Commands:
   start
     [-I]        Internal I2C bus(es)
     [-X]        External I2C bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-a <val>]  I2C address
                 default: 104
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## mpu9520

Source: [drivers/imu/invensense/mpu6500](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/invensense/mpu6500)

### Usage {#mpu9520_usage}

```
mpu9520 <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```

## sch16t

Source: [drivers/imu/murata/sch16t](https://github.com/PX4/PX4-Autopilot/tree/main/src/drivers/imu/murata/sch16t)

### Usage {#sch16t_usage}

```
sch16t <command> [arguments...]
 Commands:
   start
     [-s]        Internal SPI bus(es)
     [-S]        External SPI bus(es)
     [-b <val>]  board-specific bus (default=all) (external SPI: n-th bus
                 (default=1))
     [-c <val>]  chip-select pin (for internal SPI) or index (for external SPI)
     [-m <val>]  SPI mode
     [-f <val>]  bus frequency in kHz
     [-q]        quiet startup (no message if no device found)
     [-R <val>]  Rotation
                 default: 0

   stop

   status        print status info
```
