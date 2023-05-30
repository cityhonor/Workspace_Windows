#pragma once
/******************************************************************************/
/* File   : tle987x.hpp                                                       */
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
#include "tle_variants.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      Reset_IRQn            = -15
   ,  NonMaskableInt_IRQn   = -14
   ,  HardFault_IRQn        = -13
   ,  MemoryManagement_IRQn = -12
   ,  BusFault_IRQn         = -11
   ,  UsageFault_IRQn       = -10
   ,  SVCall_IRQn           =  -5
   ,  DebugMonitor_IRQn     =  -4
   ,  PendSV_IRQn           =  -2
   ,  SysTick_IRQn          =  -1
   ,  GPT1_Int              =   0
   ,  GPT2_Int              =   1
   ,  ADC2_Tmr3_Int         =   2
   ,  ADC1_VREF5_Int        =   3
   ,  CCU6_SR0_Int          =   4
   ,  CCU6_SR1_Int          =   5
   ,  CCU6_SR2_Int          =   6
   ,  CCU6_SR3_Int          =   7
   ,  SSC1_Int              =   8
   ,  SSC2_Int              =   9
   ,  UART1_LIN_Tmr2_Int    =  10
   ,  UART2_Tmr21_EINT2_Int =  11
   ,  EXINT0_MON_Int        =  12
   ,  EXINT1_Int            =  13
   ,  BDRV_CP_Int           =  14
   ,  DMA_Int               =  15
}IRQn_Type;

#define __CM3_REV                 0x0000U
#define __NVIC_PRIO_BITS               4
#define __Vendor_SysTickConfig         0
#define __MPU_PRESENT                  0
#define __FPU_PRESENT                  0

#include "core_cm3.hpp"

#ifndef __IM
#define __IM   __I
#endif
#ifndef __OM
#define __OM   __O
#endif
#ifndef __IOM
#define __IOM  __IO
#endif

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

