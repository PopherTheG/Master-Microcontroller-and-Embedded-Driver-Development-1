/*
 * stm32f407xx.h
 *
 *  Created on: Dec 26, 2020
 *      Author: pophe
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

/**
 * Base addresses of flash and SRAM memories
 */
#define FLASH_BASEADDR				0x08000000U
#define SRAM1_BASEADDR				0x20000000U
#define SRAM2_BASEADDR				0x2001C000U
#define ROM							0x1FFF0000U
#define SRAM 						SRAM1_BASEADDR

#endif /* INC_STM32F407XX_H_ */
