/****************************************/
/*   Author:    mBravo18                */
/*   SWC:       RESET & CLOCK CONTROL   */
/*   Layer:     MCAL                    */
/****************************************/

/* library Includes */
#include "LSTD_types.h"
#include "LBIT_math.h"

/* SWC Includes */
#include "MRCC_private.h"
#include "MRCC_interface.h"


STD_error_t MRCC_stderrInit(u8 ARG_u8ClockSource)
{
	STD_error_t L_stdERROR = E_OK;
	switch(ARG_u8ClockSource)
	{
		case MRCC_HSI:
		{
			/* Enable HSI clock */
			SET_BIT(RCC_CR, HSI_ON);

			/* polling till HSI is stable */
			while(!GET_BIT(RCC_CR, HSI_RDY));
			
			/* chosing HSI mode in SW */
			CLR_BIT(RCC_CFGR, SW0);
			CLR_BIT(RCC_CFGR, SW1);			
			break;
		}
		case MRCC_HSE_XTAL:
		{
			/* Enable HSE clock */
			SET_BIT(RCC_CR, HSE_ON);
			
			/* polling till HSE is stable */
			while(!GET_BIT(RCC_CR, HSE_RDY));
			
			/* HSE not bypassed by external clock */
			CLR_BIT(RCC_CR, HSE_BYP);
			
			/* chosing HSE mode in SW */
			SET_BIT(RCC_CFGR, SW0);	
			CLR_BIT(RCC_CFGR, SW1);			
			break;
		}
		case MRCC_HSE_EXT:
		{
			/* Enable HSE clock */
			SET_BIT(RCC_CR, HSE_ON);
			
			/* polling till HSE is stable */
			while(!GET_BIT(RCC_CR, HSE_RDY));
			
			/* HSE bypassed by external clock */
			SET_BIT(RCC_CR, HSE_BYP);
			
			/* chosing HSE mode in SW */
			SET_BIT(RCC_CFGR, SW0);
			CLR_BIT(RCC_CFGR, SW1);			
			break;
		}
		case MRCC_PLL_HSI:
		{
			/* Enable HSI clock */
			SET_BIT(RCC_CR, HSI_ON);
			
			/* polling till HSI is stable */
			while(!GET_BIT(RCC_CR, HSI_RDY));
			
			/* Enable PLL clock */
			SET_BIT(RCC_CR, PLL_ON);
			
			/* polling till PLL is stable */
			while(!GET_BIT(RCC_CR, PLL_RDY));
			
			/* HSI clock selected as PLL */
			CLR_BIT(RCC_PLLCFGR, PLLSRC);
			
			/* chosing PLL mode in SW */
			CLR_BIT(RCC_CFGR, SW0);
			SET_BIT(RCC_CFGR, SW1);			
			break;
		}
		case MRCC_PLL_HSE:
		{
			/* Enable HSE clock */
			SET_BIT(RCC_CR, HSI_ON);
			
			/* polling till HSE is stable */
			while(!GET_BIT(RCC_CR, HSE_RDY));
			
			/* Enable PLL clock */
			SET_BIT(RCC_CR, PLL_ON);
			
			/* polling till PLL is stable */
			while(!GET_BIT(RCC_CR, PLL_RDY));
			
			/* HSE clock selected as PLL */
			SET_BIT(RCC_PLLCFGR, PLLSRC);
			
			/* chosing PLL mode in SW */
			CLR_BIT(RCC_CFGR, SW0);
			SET_BIT(RCC_CFGR, SW1);			
			break;
		}
		default: L_stdERROR = E_NOK; break;
	}
	return L_stdERROR;
}

STD_error_t MRCC_stderrEnableClock(u8 ARG_u8Bus, u8 ARG_u8Peripheral)
{
	STD_error_t L_stdERROR = E_OK;
	if(ARG_u8Peripheral <= 31)
	{
		switch(ARG_u8Bus)
		{
			case MRCC_AHB1: SET_BIT(RCC_AHB1ENR,ARG_u8Peripheral); break;
			case MRCC_AHB2: SET_BIT(RCC_AHB2ENR,ARG_u8Peripheral); break;
			case MRCC_APB1: SET_BIT(RCC_APB1ENR,ARG_u8Peripheral); break;
			case MRCC_APB2: SET_BIT(RCC_APB2ENR,ARG_u8Peripheral); break;
			default: L_stdERROR = E_NOK; break;
		}
	}
	else
	{
		L_stdERROR = E_NOK; 
	}
	return L_stdERROR;
}

STD_error_t MRCC_stderrDisableClock(u8 ARG_u8Bus, u8 ARG_u8Peripheral)
{
	STD_error_t L_stdERROR = E_OK;
	if(ARG_u8Peripheral <= 31)
	{
		switch(ARG_u8Bus)
		{
			case MRCC_AHB1: CLR_BIT(RCC_AHB1ENR,ARG_u8Peripheral); break;
			case MRCC_AHB2: CLR_BIT(RCC_AHB2ENR,ARG_u8Peripheral); break;
			case MRCC_APB1: CLR_BIT(RCC_APB1ENR,ARG_u8Peripheral); break;
			case MRCC_APB2: CLR_BIT(RCC_APB2ENR,ARG_u8Peripheral); break;
			default: L_stdERROR = E_NOK; break;
		}
	}
	else
	{
		L_stdERROR = E_NOK; 
	}
	return L_stdERROR;
}

void MRCC_voidEnableCSS(void)
{
	SET_BIT(RCC_CR, CSS_ON);
}

void MRCC_voidDisableCSS(void)
{
	CLR_BIT(RCC_CR, CSS_ON);
}
