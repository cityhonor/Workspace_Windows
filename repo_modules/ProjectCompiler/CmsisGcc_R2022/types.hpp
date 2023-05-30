#pragma once
/******************************************************************************/
/* File   : types.hpp                                                         */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include <stdint.h>

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define STD_OFF                                                                0
#define STD_ON                                                                 1
#define UNUSED(x)                                                    ((void)(x))
#define _ReSIM                                                            STD_ON

#define STD_REAL_FIX_POINT_16 (1)
#define STD_REAL_FIX_POINT_32 (2)
#define STD_REAL_FLOAT_32     (3)
#ifndef STD_REAL_TYPE
  #define STD_REAL_TYPE (STD_REAL_FIX_POINT_16)
#endif

#ifndef TRUE
  #define TRUE  (1U)
#endif
#ifndef FALSE
  #define FALSE (0U)
#endif

#define STD_REAL_SHIFT_Qn8_y (-8  - 1)
#define STD_REAL_SHIFT_Qn7_y (-7  - 1)
#define STD_REAL_SHIFT_Qn6_y (-6  - 1)
#define STD_REAL_SHIFT_Qn5_y (-5  - 1)
#define STD_REAL_SHIFT_Qn4_y (-4  - 1)
#define STD_REAL_SHIFT_Qn3_y (-3  - 1)
#define STD_REAL_SHIFT_Qn2_y (-2  - 1)
#define STD_REAL_SHIFT_Qn1_y (-1  - 1)
#define STD_REAL_SHIFT_Q0_y  ( 0  - 1)
#define STD_REAL_SHIFT_Q1_y  ( 1  - 1)
#define STD_REAL_SHIFT_Q2_y  ( 2  - 1)
#define STD_REAL_SHIFT_Q3_y  ( 3  - 1)
#define STD_REAL_SHIFT_Q4_y  ( 4  - 1)
#define STD_REAL_SHIFT_Q5_y  ( 5  - 1)
#define STD_REAL_SHIFT_Q6_y  ( 6  - 1)
#define STD_REAL_SHIFT_Q7_y  ( 7  - 1)
#define STD_REAL_SHIFT_Q8_y  ( 8  - 1)
#define STD_REAL_SHIFT_Q9_y  ( 9  - 1)
#define STD_REAL_SHIFT_Q10_y ( 10 - 1)
#define STD_REAL_SHIFT_Q11_y ( 11 - 1)
#define STD_REAL_SHIFT_Q12_y ( 12 - 1)
#define STD_REAL_SHIFT_Q13_y ( 13 - 1)
#define STD_REAL_SHIFT_Q14_y ( 14 - 1)
#define STD_REAL_SHIFT_Q15_y ( 15 - 1)
#define STD_REAL_SHIFT_Q16_y ( 16 - 1)
#define STD_REAL_SHIFT_Q32_y ( 32 - 1)
#define NULL_PTR ((void*)0)
#if defined __CC_ARM  &&  (__CC_ARM == 1)
#define INLINE 
#elif defined (__IAR_SYSTEMS_ICC__)
#define INLINE 
#else
#define INLINE 
#endif

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef int8_t sint8;
typedef int16_t sint16;
typedef int32_t sint32;
typedef int64_t sint64;
typedef float   float32;
typedef double  float64;
typedef short FixPoint16;
typedef long  FixPoint32;
typedef unsigned char boolean;

#if(STD_REAL_TYPE == STD_REAL_FIX_POINT_16)
typedef FixPoint16 TStdReal;
typedef FixPoint32 TLongStdReal;
#elif(STD_REAL_TYPE == STD_REAL_FIX_POINT_32)
typedef FixPoint32 TStdReal;
typedef FixPoint32 TLongStdReal;
#elif(STD_REAL_TYPE == STD_REAL_FLOAT_32)
typedef float32 TStdReal;
typedef float32 TLongStdReal;
#endif

typedef struct _TStdRealComplex{
   TStdReal imag;
   TStdReal real;
}TStdRealComplex;

typedef struct{
   sint16 Real;
   sint16 Imag;
}TComplex;

/*
typedef enum{
      false = 0
   ,  true  = 1
}bool;
*/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

