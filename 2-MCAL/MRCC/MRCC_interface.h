/****************************************/
/*   Author:    mBravo18                */
/*   SWC:       RESET & CLOCK CONTROL   */
/*   Layer:     MCAL                    */
/****************************************/

#ifndef _MRCC_INTERFACE_H_
#define _MRCC_INTERFACE_H_

#define	MRCC_AHB1     0
#define	MRCC_AHB2     1
#define	MRCC_APB1     2
#define	MRCC_APB2     3

#define	MRCC_HSI      0
#define	MRCC_HSE_XTAL 1
#define	MRCC_HSE_EXT  2
#define	MRCC_PLL_HSI  3
#define	MRCC_PLL_HSE  4

STD_error_t MRCC_stderrInit(u8 ARG_u8ClockSource);

STD_error_t MRCC_stderrEnableClock(u8 ARG_u8Bus, u8 ARG_u8Peripheral);
STD_error_t MRCC_stderrDisableClock(u8 ARG_u8Bus, u8 ARG_u8Peripheral);

void        MRCC_voidEnableCSS(void);
void        MRCC_voidDisableCSS(void);

#endif
