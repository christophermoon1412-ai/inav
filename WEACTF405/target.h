#pragma once

#include "target.h"

// Configuración de bus SPI para el giroscopio BMI160
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

// Definir sensores
#define USE_IMU
#define USE_IMU_BMI160
#define BMI160_CS_PIN           PA4
#define BMI160_SPI_BUS          BUS_SPI1

// Configuración de bus I2C para el barómetro BMP280
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7

#define USE_BARO
#define USE_BARO_BMP280
#define BMP280_I2C_BUS          BUS_I2C1
