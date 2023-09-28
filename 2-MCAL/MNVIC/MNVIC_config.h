/********************************************************/
/*	Author: 	mBravo18								*/
/*	SWC: 		NESTED VECTORED INTERRUPT CONTROLLER	*/
/*	Layer: 		MCAL									*/
/*	Version: 	1.0										*/
/*	Date: 		SEPTEMPER 17, 2023						*/
/*	Last Edit:	N/A										*/
/********************************************************/

#ifndef _MNVIC_CONFIG_H_
#define _MNVIC_CONFIG_H_

/*
 * Enable Interrupt
 * uncomment the interupt source to be enabled
 */

//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		WWDG					// Window Watchdog interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI16_OR_PVD 			// EXTI Line 16 interrupt / PVD through EXTI line detection interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI21_OR_TAMP_STAMP	// EXTI Line 16 interrupt / PVD through EXTI line detection interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI22_OR_RTC_WKUP		// EXTI Line 22 interrupt / RTC Wakeup interrupt through the EXTI line
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		FLASH					// Flash global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		RCC						// RCC global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI0					// EXTI Line0 interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI1					// EXTI Line1 interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI2					// EXTI Line2 interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI3					// EXTI Line3 interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI4					// EXTI Line4 interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA1_Stream0			// DMA1 Stream0 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA1_Stream1			// DMA1 Stream1 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA1_Stream2			// DMA1 Stream2 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA1_Stream3			// DMA1 Stream3 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA1_Stream4			// DMA1 Stream4 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA1_Stream5			// DMA1 Stream5 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA1_Stream6			// DMA1 Stream6 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		ADC						// ADC1 global interrupts
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI9_5					// EXTI Line[9:5] interrupts
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		TIM1_BRK_TIM9			// TIM1 Break interrupt and TIM9 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		TIM1_UP_TIM10			// TIM1 Update interrupt and TIM10 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		TIM1_TRG_COM_TIM11		// TIM1 Trigger and Commutation interrupts and TIM11 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		TIM1_CC					// TIM1 Capture Compare interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		TIM2					// TIM2 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		TIM3					// TIM3 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		TIM4					// TIM4 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		I2C1_EV					// I2C1 event interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		I2C1_ER					// I2C1 error interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		I2C2_EV					// I2C2 event interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		I2C2_ER					// I2C2 error interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		SPI1					// SPI1 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		SPI2					// SPI2 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		USART1					// USART1 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		USART2					// USART2 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI15_10				// EXTI Line[15:10] interrupts
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI17_OR_RTC_Alarm		// EXTI Line 17 interrupt / RTC Alarms (A and B) through EXTI line interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		EXTI18_OR_OTG_FS_WKUP	// EXTI Line 18 interrupt / USB On-The-Go-FS Wakeup through EXTI line interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA1_Stream7			// DMA1 Stream7 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		SDIO					// SDIO global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		TIM5					// TIM5 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		SPI3					// SPI3 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA2_Stream0			// DMA2 Stream0 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA2_Stream1			// DMA2 Stream1 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA2_Stream2			// DMA2 Stream2 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA2_Stream3			// DMA2 Stream3 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA2_Stream4			// DMA2 Stream4 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		OTG_FS					// USB On The Go FS global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA2_Stream5			// DMA2 Stream5 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA2_Stream6			// DMA2 Stream6 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		DMA2_Stream7			// DMA2 Stream7 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		USART6					// USART6 global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		I2C3_EV					// I2C3 event interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		I2C3_ER					// I2C3 error interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		FPU						// FPU global interrupt
//#define 	NVIC_ENABLE_INTERRUPT_SOURCE		SPI4					// SPI 4 global interrupt


/* ############################################################################################################################################ */

/*
 * Disable Interrupt
 * uncomment the interupt source to be disabled
 */

//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		WWDG					// Window Watchdog interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI16_OR_PVD 			// EXTI Line 16 interrupt / PVD through EXTI line detection interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI21_OR_TAMP_STAMP	// EXTI Line 16 interrupt / PVD through EXTI line detection interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI22_OR_RTC_WKUP		// EXTI Line 22 interrupt / RTC Wakeup interrupt through the EXTI line
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		FLASH					// Flash global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		RCC						// RCC global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI0					// EXTI Line0 interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI1					// EXTI Line1 interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI2					// EXTI Line2 interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI3					// EXTI Line3 interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI4					// EXTI Line4 interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA1_Stream0			// DMA1 Stream0 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA1_Stream1			// DMA1 Stream1 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA1_Stream2			// DMA1 Stream2 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA1_Stream3			// DMA1 Stream3 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA1_Stream4			// DMA1 Stream4 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA1_Stream5			// DMA1 Stream5 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA1_Stream6			// DMA1 Stream6 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		ADC						// ADC1 global interrupts
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI9_5					// EXTI Line[9:5] interrupts
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		TIM1_BRK_TIM9			// TIM1 Break interrupt and TIM9 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		TIM1_UP_TIM10			// TIM1 Update interrupt and TIM10 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		TIM1_TRG_COM_TIM11		// TIM1 Trigger and Commutation interrupts and TIM11 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		TIM1_CC					// TIM1 Capture Compare interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		TIM2					// TIM2 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		TIM3					// TIM3 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		TIM4					// TIM4 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		I2C1_EV					// I2C1 event interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		I2C1_ER					// I2C1 error interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		I2C2_EV					// I2C2 event interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		I2C2_ER					// I2C2 error interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		SPI1					// SPI1 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		SPI2					// SPI2 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		USART1					// USART1 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		USART2					// USART2 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI15_10				// EXTI Line[15:10] interrupts
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI17_OR_RTC_Alarm		// EXTI Line 17 interrupt / RTC Alarms (A and B) through EXTI line interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		EXTI18_OR_OTG_FS_WKUP	// EXTI Line 18 interrupt / USB On-The-Go-FS Wakeup through EXTI line interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA1_Stream7			// DMA1 Stream7 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		SDIO					// SDIO global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		TIM5					// TIM5 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		SPI3					// SPI3 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA2_Stream0			// DMA2 Stream0 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA2_Stream1			// DMA2 Stream1 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA2_Stream2			// DMA2 Stream2 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA2_Stream3			// DMA2 Stream3 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA2_Stream4			// DMA2 Stream4 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		OTG_FS					// USB On The Go FS global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA2_Stream5			// DMA2 Stream5 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA2_Stream6			// DMA2 Stream6 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		DMA2_Stream7			// DMA2 Stream7 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		USART6					// USART6 global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		I2C3_EV					// I2C3 event interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		I2C3_ER					// I2C3 error interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		FPU						// FPU global interrupt
//#define 	NVIC_DISABLE_INTERRUPT_SOURCE		SPI4					// SPI 4 global interrupt


/* ############################################################################################################################################ */
#endif