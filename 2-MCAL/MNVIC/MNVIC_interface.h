/******************************************************/
/*   Author:    mBravo18                              */
/*   SWC:       NESTED VECTORED INTERRUPT CONTROLLER	*/
/*   Layer:     MCAL                                  */
/******************************************************/

#ifndef _MNVIC_INTERFACE_H_
#define _MNVIC_INTERFACE_H_

//Password for VECTKEY: 0x05FA
//03 is Groub and Sub configuration
//00 wont be used for now
//Group x / Sub y				
#define MNVIC_GROUP16_SUB00 0x05FA0300	//0bxxxx.  //Note: hex "05FA0x00" x could be 0-3
#define MNVIC_GROUP08_SUB02 0x05FA0400	//0bxxx.y
#define MNVIC_GROUP04_SUB04 0x05FA0500	//0bxx.yy
#define MNVIC_GROUP02_SUB08 0x05FA0600	//0bx.yyy
#define MNVIC_GROUP00_SUB16 0x05FA0700	//0b.yyyy

//Vector Table for External Interrupt
#define WWDG				0
#define EXTI16_PVD 			1
#define EXTI21_TAMP_STAMP	2
#define EXTI22_RTC_WKUP		3
#define FLASH				4
#define RCC					5
#define EXTI0				6
#define EXTI1				7
#define EXTI2				8
#define EXTI3				9
#define EXTI4				10
#define DMA1_Stream0		11
#define DMA1_Stream1		12
#define DMA1_Stream2		13
#define DMA1_Stream3		14
#define DMA1_Stream4		15
#define DMA1_Stream5		16
#define DMA1_Stream6		17
#define ADC					18
#define EXTI9_5				23
#define TIM1_BRK_TIM9		24
#define TIM1_UP_TIM10		25
#define TIM1_TRG_COM_TIM11	26
#define TIM1_CC				27
#define TIM2				28
#define TIM3				29
#define TIM4				30
#define I2C1_EV				31
#define I2C1_ER				32
#define I2C2_EV				33
#define I2C2_ER				34
#define SPI1				35
#define SPI2				36
#define USART1				37
#define USART2				38
#define EXTI15_10			40
#define EXTI17 / RTC_Alarm	41
#define EXTI18 /OTG_FS_WKUP	42
#define DMA1_Stream7		47
#define SDIO				49
#define TIM5				50
#define SPI3				51
#define DMA2_Stream0		56
#define DMA2_Stream1		57
#define DMA2_Stream2		58
#define DMA2_Stream3		59
#define DMA2_Stream4		60
#define OTG_FS				67
#define DMA2_Stream5		68
#define DMA2_Stream6		69
#define DMA2_Stream7		70
#define USART6				71
#define I2C3_EV				72
#define I2C3_ER				73
#define FPU					81
#define SPI4				84


void	MNVIC_voidEnableInterrupt(u8 ARG_u8InteruptSource);
void	MNVIC_voidDisableInterrupt(u8 ARG_u8InteruptSource);

void	MNVIC_voidSetPendingFlag(u8 ARG_u8InteruptSource);
void	MNVIC_voidClearPendingFlag(u8 ARG_u8InteruptSource);

u8		MNVIC_u8GetActiveFlag(u8 ARG_u8InteruptSource);

void 	MNVIC_voidSetPriority(u8 ARG_u8InteruptPosition,s8 ARG_s8InteruptPriority, u8 ARG_u8GroupPriority , u8 ARG_u8SubPriority , u32 ARG_u8NestMode);

#endif
