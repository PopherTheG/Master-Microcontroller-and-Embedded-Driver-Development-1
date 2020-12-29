/*
 * stm32f407xx.h
 *
 *  Created on: Dec 26, 2020
 *      Author: pophertheg
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#include <stdint.h>

#define __vo volatile

/**
 * Base addresses of flash and SRAM memories
 */
#define FLASH_BASEADDR				0x08000000U
#define SRAM1_BASEADDR				0x20000000U
#define SRAM2_BASEADDR				0x2001C000U
#define ROM							0x1FFF0000U
#define SRAM 						SRAM1_BASEADDR

/**
 * AHBx and APBx bus peripheral base addresses
 */
#define PERIPH_BASEADDR				0x40000000U
#define APB1PERIPH_BASEADDR			PERIPH_BASEADDR
#define APB2PERIPH_BASEADDR			0x40010000U
#define AHB1PERIPH_BASEADDR			0x40020000U
#define AHB2PERIPH_BASEADDR			0x50000000U
#define AHB3PERIPH_BASEADDR			0xA0000000U

/**
 * AHB1 peripherals base addresses
 */
#define GPIOA_BASEADDR				(AHB1PERIPH_BASEADDR + 0000U)
#define GPIOB_BASEADDR				(AHB1PERIPH_BASEADDR + 0400U)
#define GPIOC_BASEADDR				(AHB1PERIPH_BASEADDR + 0800U)
#define GPIOD_BASEADDR				(AHB1PERIPH_BASEADDR + 0C00U)
#define GPIOE_BASEADDR				(AHB1PERIPH_BASEADDR + 1000U)
#define GPIOF_BASEADDR				(AHB1PERIPH_BASEADDR + 1400U)
#define GPIOG_BASEADDR				(AHB1PERIPH_BASEADDR + 1800U)
#define GPIOH_BASEADDR				(AHB1PERIPH_BASEADDR + 1C00U)
#define GPIOI_BASEADDR				(AHB1PERIPH_BASEADDR + 2000U)
/* Not used in the course START */
#define GPIOJ_BASEADDR				(AHB1PERIPH_BASEADDR + 2400U)
#define GPIOK_BASEADDR				(AHB1PERIPH_BASEADDR + 2800U)
#define CRC_BASEADDR				(AHB1PERIPH_BASEADDR + 3000U)
#define RCC_BASEADDR				(AHB1PERIPH_BASEADDR + 3800U)
#define FIR_BASEADDR				(AHB1PERIPH_BASEADDR + 3C00U)
#define BKPSRAM_BASEADDR			(AHB1PERIPH_BASEADDR + 4000U)
#define DMA1_BASEADDR				(AHB1PERIPH_BASEADDR + 6000U)
#define DMA2_BASEADDR				(AHB1PERIPH_BASEADDR + 6400U)
#define ETHMAC_BASEADDR				(AHB1PERIPH_BASEADDR + 8000U)
#define DMA2D_BASEADDR				(AHB1PERIPH_BASEADDR + B000U)
#define USBOTGHS_BASEADDR			(AHB1PERIPH_BASEADDR + 20000U)
/* Not used in the course END */

/**
 * APB1 peripherals base addresses
 */
#define I2C1_BASEADDR				(APB1PERIPH_BASEADDR + 5400U)
#define I2C2_BASEADDR				(APB1PERIPH_BASEADDR + 5800U)
#define I2C3_BASEADDR				(APB1PERIPH_BASEADDR + 5C00U)
#define SPI2_BASEADDR				(APB1PERIPH_BASEADDR + 3800U)
#define SPI3_BASEADDR				(APB1PERIPH_BASEADDR + 3C00U)
#define USART2_BASEADDR				(APB1PERIPH_BASEADDR + 4400U)
#define USART3_BASEADDR				(APB1PERIPH_BASEADDR + 4800U)
#define UART4_BASEADDR				(APB1PERIPH_BASEADDR + 4C00U)
#define UART5_BASEADDR				(APB1PERIPH_BASEADDR + 5000U)

/**
 * APB2 peripherals base addresses
 */
#define SPI1_BASEADDR				(APB2PERIPH_BASEADDR + 3000U)
#define USART1_BASEADDR				(APB2PERIPH_BASEADDR + 1000U)
#define USART6_BASEADDR				(APB2PERIPH_BASEADDR + 1400U)
#define EXTI_BASEADDR				(APB2PERIPH_BASEADDR + 3C00U)
#define SYSCFG_BASEADDR				(APB2PERIPH_BASEADDR + 3800U)


/*** Peripheral Register Definition Structures ***/
/**
 * @note registers of a peripheral are specific to the microcontroller
 * e.g. : number of registers of SPI peripheral of STM32Fx family of microcontollers may be different
 * ( more or less ) compared to the number of registers of SPI peripherals of STM32Lx or STM32F0x
 * family of microcontrollers. Please check your device reference manual.
 */
typedef struct {
	__vo uint32_t MODER; 	/* GPIO Port Mode Register, Offset: 0x00 */
	__vo uint32_t OTYPER; 	/* GPIO Port Output Type Register, Offset: 0x04 */
	__vo uint32_t OSPEEDR;	/* GPIO Port Output Speed Register, Offset: 0x08 */
	__vo uint32_t PUPDR;	/* GPIO Port Pull-up/Pull-down Register, Offset: 0x0C */
	__vo uint32_t IDR;		/* GPIO Port Input Data Register, Offset: 0x10 */
	__vo uint32_t ODR;		/* GPIO Port Output Data Register, Offset: 0x14 */
	__vo uint32_t BSRR;		/* GPIO Port Bit Set/Reset Register, Offset: 0x18 */
	__vo uint32_t LCKR;		/* GPIO Port Configuration Lock Register, Offset: 0x1C */
	__vo uint32_t AFRL;		/* GPIO Alternate Function Low Register, Offset: 0x20 */
	__vo uint32_t AFRH;		/* GPIO Alternate Function High Register, Offset: 0x24 */
}GPIO_RegDef_t;

typedef struct {
	__vo uint32_t CR;				/* RCC Clock Control Register, Offset: 0x00 */
	__vo uint32_t PLLCFGR;			/* RCC PLL Configuration Register, Offset: 0x04 */
	__vo uint32_t CFGR;				/* RCC Clock Configuration Register, Offset: 0x08 */
	__vo uint32_t CIR;				/* RCC Clock Interrupt Register, Offset: 0x0C */
	__vo uint32_t AHB1RSTR;			/* RCC AHB1 Peripheral Reset Register, Offset: 0x10 */
	__vo uint32_t AHB2RSTR;			/* RCC AHB2 Peripheral Reset Register, Offset: 0x14 */
	__vo uint32_t AHB3RSTR;			/* RCC AHB3 Peripheral Reset Register, Offset: 0x18 */
	__vo uint32_t RESERVED0;		/* Reserved, Offset: 0x1C */
	__vo uint32_t APB1RSTR;			/* RCC APB1 Peripheral Reset Register, Offset: 0x20 */
	__vo uint32_t APB2RSTR;			/* RCC APB2 Peripheral Reset Register, Offset: 0x24 */
	__vo uint32_t RESERVED1;		/* Reserved, Offset: 0x28 */
	__vo uint32_t RESERVED2;		/* Reserved, Offset: 0x2C */
	__vo uint32_t AHB1ENR;			/* RCC AHB1 Peripheral Clock Enable Register, Offset: 0x30 */
	__vo uint32_t AHB2ENR;			/* RCC AHB2 Peripheral Clock Enable Register, Offset: 0x34 */
	__vo uint32_t AHB3ENR;			/* RCC AHB3 Peripheral Clock Enable Register, Offset: 0x38 */
	__vo uint32_t RESERVED3;		/* Reserved, Offset: 0x3C */
	__vo uint32_t APB1ENR;			/* RCC APB1 Peripheral Clock Enable Register, Offset: 0x40 */
	__vo uint32_t APB2ENR;			/* RCC APB2 Peripheral Clock Enable Register, Offset: 0x44 */
	__vo uint32_t RESERVED4;		/* Reserved, Offset: 0x48 */
	__vo uint32_t RESERVED5;		/* Reserved, Offset: 0x4C */
	__vo uint32_t AHB1LPENR;		/* RCC AHB1 Peripheral Clock Enabled in Low Power Mode Register, Offset: 0x50 */
	__vo uint32_t AHB2LPENR;		/* RCC AHB2 Peripheral Clock Enabled in Low Power Mode Register, Offset: 0x54 */
	__vo uint32_t AHB3LPENR;		/* RCC AHB3 Peripheral Clock Enabled in Low Power Mode Register, Offset: 0x58 */
	__vo uint32_t RESERVED6;		/* Reserved, Offset: 0x5C */
	__vo uint32_t APB1LPENR;		/* RCC APB1 Peripheral Clock Enabled in Low Power Mode Register, Offset: 0x60 */
	__vo uint32_t APB2LPENR;		/* RCC APB2 Peripheral Clock Enabled in Low Power Mode Register, Offset: 0x64 */
	__vo uint32_t RESERVED7;		/* Reserved, Offset: 0x68 */
	__vo uint32_t RESERVED8;		/* Reserved, Offset: 0x6C */
	__vo uint32_t BDCR;				/* RCC Backup Domain Control Register, Offset: 0x70 */
	__vo uint32_t CSR;				/* RCC Clock Control and Status Register, Offset: 0x74 */
	__vo uint32_t RESERVED9;		/* Reserved, Offset: 0x78 */
	__vo uint32_t RESERVED10;		/* Reserved, Offset: 0x7C */
	__vo uint32_t SSCGR;			/* RCC Spread Spectrum Clock Generation Register, Offset: 0x80 */
	__vo uint32_t PLLI2SCFGR;		/* RCC PLLI2S Configuration Register, Offset: 0x84 */
}RCC_RegDef_t;

/*** Peripheral Definitions ( Peripheral base addresses type-casted to xxx_RegDef_t* ) ***/
#define GPIOA 						((GPIO_RegDef_t*)(GPIOA_BASEADDR))
#define GPIOB 						((GPIO_RegDef_t*)(GPIOB_BASEADDR))
#define GPIOC 						((GPIO_RegDef_t*)(GPIOC_BASEADDR))
#define GPIOD 						((GPIO_RegDef_t*)(GPIOD_BASEADDR))
#define GPIOE 						((GPIO_RegDef_t*)(GPIOE_BASEADDR))
#define GPIOF 						((GPIO_RegDef_t*)(GPIOF_BASEADDR))
#define GPIOG 						((GPIO_RegDef_t*)(GPIOG_BASEADDR))
#define GPIOH 						((GPIO_RegDef_t*)(GPIOH_BASEADDR))
#define GPIOI 						((GPIO_RegDef_t*)(GPIOI_BASEADDR))
#define RCC							((RCC_RegDef_t*)(RCC_BASEADDR))


/**
 * Clock enable macros for GPIOx peripherals
 */
#define GPIOA_PCLK_EN()		(RCC->AHB1ENR |= (1 << 0))
#define GPIOB_PCLK_EN()		(RCC->AHB1ENR |= (1 << 1))
#define GPIOC_PCLK_EN()		(RCC->AHB1ENR |= (1 << 2))
#define GPIOD_PCLK_EN()		(RCC->AHB1ENR |= (1 << 3))
#define GPIOE_PCLK_EN()		(RCC->AHB1ENR |= (1 << 4))
#define GPIOF_PCLK_EN()		(RCC->AHB1ENR |= (1 << 5))
#define GPIOG_PCLK_EN()		(RCC->AHB1ENR |= (1 << 6))
#define GPIOH_PCLK_EN()		(RCC->AHB1ENR |= (1 << 7))
#define GPIOI_PCLK_EN()		(RCC->AHB1ENR |= (1 << 8))

/**
 * Clock enable macros for I2Cx peripherals
 */
#define I2C1_PCLK_EN()		(RCC->APB1ENR |= (1 << 21))
#define I2C2_PCLK_EN()		(RCC->APB1ENR |= (1 << 22))
#define I2C3_PCLK_EN()		(RCC->APB1ENR |= (1 << 23))

/**
 * Clock enable macros for SPIx peripherals
 */
#define SPI1_PCLK_EN()		(RCC->APB2ENR |= (1 << 12))
#define SPI2_PCLK_EN()		(RCC->APB1ENR |= (1 << 14))
#define SPI3_PCLK_EN()		(RCC->APB1ENR |= (1 << 15))

/**
 * Clock enable macros for USARTx peripherals
 */
#define USART1_PCLK_EN()	(RCC->APB2ENR |= (1 << 4))
#define USART2_PCLK_EN()	(RCC->APB1ENR |= (1 << 17))
#define USART3_PCLK_EN()	(RCC->APB1ENR |= (1 << 18))
#define USART6_PCLK_EN()	(RCC->APB2ENR |= (1 << 5))

/**
 * Clock enable macros for UARTx peripherals
 */
#define UART4_PCLK_EN()		(RCC->APB1ENR |= (1 << 19))
#define UART5_PCLK_EN()		(RCC->APB1ENR |= (1 << 20))

/**
 * Clock enable macros for STYSCFG peripheral
 */
#define SYSCFG_PCLK_EN()	(RCC->APB2ENR |= (1 << 14))

/**
 * Clock disable macros for GPIOx peripherals
 */
#define GPIOA_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 0))
#define GPIOB_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 1))
#define GPIOC_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 2))
#define GPIOD_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 3))
#define GPIOE_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 4))
#define GPIOF_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 5))
#define GPIOG_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 6))
#define GPIOH_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 7))
#define GPIOI_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 8))

/**
 * Clock disable macros for I2Cx peripherals
 */
#define I2C1_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 21))
#define I2C2_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 22))
#define I2C3_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 23))

/**
 * Clock disable macros for SPIx peripherals
 */
#define SPI1_PCLK_DI()		(RCC->APB2ENR &= ~(1 << 12))
#define SPI2_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 14))
#define SPI3_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 15))

/**
 * Clock disable macros for USARTx peripherals
 */
#define USART1_PCLK_DI()	(RCC->APB2ENR &= ~(1 << 4))
#define USART2_PCLK_DI()	(RCC->APB1ENR &= ~(1 << 17))
#define USART3_PCLK_DI()	(RCC->APB1ENR &= ~(1 << 18))
#define USART6_PCLK_DI()	(RCC->APB2ENR &= ~(1 << 5))

/**
 * Clock disable macros for UARTx peripherals
 */
#define UART4_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 19))
#define UART5_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 20))

/**
 * Clock disable macros for STYSCFG peripheral
 */
#define SYSCFG_PCLK_DI()	(RCC->APB2ENR &= ~(1 << 14))

#endif /* INC_STM32F407XX_H_ */
