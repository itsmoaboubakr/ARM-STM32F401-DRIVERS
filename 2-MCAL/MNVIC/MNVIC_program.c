/********************************************************/
/*	Author: 	mBravo18								*/
/*	SWC: 		NESTED VECTORED INTERRUPT CONTROLLER	*/
/*	Layer: 		MCAL									*/
/*	Version: 	1.0										*/
/*	Date: 		SEPTEMPER 17, 2023						*/
/*	Last Edit:	N/A										*/
/********************************************************/

/*library Includes*/
#include "LSTD_types.h"
#include "LBIT_math.h"

/*SWC Includes*/
#include "MNVIC_private.h"
#include "MNVIC_interface.h"

void MNVIC_voidEnableInterrupt(u8 ARG_u8InteruptSource) //u8 since max no. of external interupt is 240, also 84 is only available
{
	NVIC_ISER[ARG_u8InteruptSource / 32] = (1 << (ARG_u8InteruptSource % 32)); /*	'/'by 32 to access array reg and then '%' to get remainder which is bit no. in that corresponding reg	*/
}

void MNVIC_voidDisableInterrupt(u8 ARG_u8InteruptSource) //u8 since max no. of external interupt is 240, also 84 is only available
{
	NVIC_ICER[ARG_u8InteruptSource / 32] = (1 << (ARG_u8InteruptSource % 32)); /*	'/'by 32 to access array reg and then '%' to get remainder which is bit no. in that corresponding reg	*/
}

void MNVIC_voidSetPendingFlag(u8 ARG_u8InteruptSource) //u8 since max no. of external interupt is 240, also 84 is only available
{
	NVIC_ISPR[ARG_u8InteruptSource / 32] = (1 << (ARG_u8InteruptSource % 32)); /*	'/'by 32 to access array reg and then '%' to get remainder which is bit no. in that corresponding reg	*/
}

void MNVIC_voidClearPendingFlag(u8 ARG_u8InteruptSource) //u8 since max no. of external interupt is 240, also 84 is only available
{
	NVIC_ICPR[ARG_u8InteruptSource / 32] = (1 << (ARG_u8InteruptSource % 32)); /*	'/'by 32 to access array reg and then '%' to get remainder which is bit no. in that corresponding reg	*/
}

u8 MNVIC_u8GetActiveFlag(u8 ARG_u8InteruptSource)
{
	u8 L_u8Status;
	L_u8Status = GET_BIT(NVIC_IABR[ARG_u8InteruptSource / 32], (ARG_u8InteruptSource % 32));
	return L_u8Status;
}

void MNVIC_voidSetPriority(u8 ARG_u8InteruptPosition,s8 ARG_s8InteruptPriority, u8 ARG_u8GroupPriority , u8 ARG_u8SubPriority , u32 ARG_u8NestMode) //s8 is used because first 3 priorities in vector table are negative
{
	u8 L_u8IPRNestMode;
	//System control block - Application interrupt and reset control register
	#define SCB_AIRCR *((volatile u32*)0xE000ED0C)
	SCB_AIRCR = ARG_u8NestMode; //Group x. Sub y
	
	/******************************************NVIC_IPR Setup*********************************************/
	//0bxxxx.----(- reserved in IPR)
	//0bxxx.y----(- reserved in IPR)
	//0bxx.yy----(- reserved in IPR)
	//0bx.yyy----(- reserved in IPR)
	//0b.yyyy----(- reserved in IPR)
	//Group priority is written in 4 MSB and is shifted to left by 1/2/3/4 MSB depending on the nest mode
	//then subgroup is added
	//L_u8Priority is 0b0000xxxx later we will shift it 4 bit, si itill become 0bxxxx0000
	L_u8IPRNestMode = ARG_u8SubPriority | (ARG_u8GroupPriority << ((ARG_u8NestMode - 0x05FA0300) / 256));
	/******************************************Setup Complete*********************************************/

	//Core Peripheral
	#if ARG_s8InteruptPriority < 0 
/*
		if( ARG_s8InteruptPriority == MEMORY_MANAGE || ARG_s8InteruptPriority == BUS_FAULT || ARG_s8InteruptPriority == USAGE_FAULT ){

			ARG_s8InteruptPriority += 3;
			SCB->SHPR1 = ( Priority ) << ( (8 * ARG_s8InteruptPriority) + 4 );

		}
		else if ( ARG_s8InteruptPriority == SV_CALL ){

			ARG_s8InteruptPriority += 7;
			SCB->SHPR2 = ( Priority ) << ( (8 * ARG_s8InteruptPriority) + 4 );

		}
		else if( ARG_s8InteruptPriority == PEND_SV || ARG_s8InteruptPriority == SYSTICK ){

			ARG_s8InteruptPriority += 8;

			SCB->SHPR3 = ( Priority ) << ( (8 * ARG_s8InteruptPriority) + 4 );

		}

	}
	*/
	
	//External Peripherals
	#elif ARG_s8InteruptPriority >= 0
	NVIC_IPR[ARG_u8InteruptPosition] = L_u8IPRNestMode << 4;
	
	#endif
}