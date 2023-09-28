/******************************************************/
/*   Author:    mBravo18                              */
/*   SWC:       NESTED VECTORED INTERRUPT CONTROLLER	*/
/*   Layer:     MCAL                                  */
/******************************************************/

#ifndef _MNVIC_PRIVATE_H_
#define _MNVIC_PRIVATE_H_

//Interrupt set-enable register
#define NVIC_ISER ((volatile u32*)0xE000E100)

//Interrupt clear-enable register
#define NVIC_ICER ((volatile u32*)0xE000E280)

//Interrupt set-pending register
#define NVIC_ISPR ((volatile u32*)0xE000E300)

//Interrupt clear-pending register
#define NVIC_ICPR ((volatile u32*)0xE000E380)

//Interrupt active bit register
#define NVIC_IABR ((volatile u32*)0xE000E400)

//Interrupt priority register
#define NVIC_IPR  ((volatile  u8*)0xE000E500) 

//Software trigger interrupt register
#define NVIC_STIR *((volatile u32*)0xE000EF00)

#endif
