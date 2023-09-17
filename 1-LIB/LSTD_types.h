/************************************/
/*   Author:    mBravo18            */
/*   SWC:       BIT MATH            */
/*   Layer:     LIB                 */
/************************************/

#ifndef _LSTD_TYPES_H_
#define _LSTD_TYPES_H_

typedef unsigned char       u8;
typedef unsigned short int  u16;
typedef unsigned long int   u32;
typedef signed char         s8;
typedef signed short int    s16;
typedef signed long int     s32;
typedef float               f32;
typedef double              f64;

typedef enum{		
	E_OK,            //	
	E_NOK,           //	AUTOSAR STANDARD
	E_NULL_POINTER,  //	
}STD_error_t;      //standard error typedef

#define NULL_POINTER ((void*)0)		//to equate new ptrs to null

#endif
