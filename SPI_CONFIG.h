


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "CPU_Config.h"

#define SPCR (*(volatile uint8_t*)(0x2D))
#define SPSR (*(volatile uint8_t*)(0x2E))
#define SPDR (*(volatile uint8_t*)(0x2F))


#define MASTER 1
#define SLAVE  0

#define MOSI 5
#define MISO 6
#define CLK  7
#define SS   4

#define SPI_PORT DDRB

#define SPI_MODE MASTER

#endif /* SPI_CONFIG_H_ */