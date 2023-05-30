#pragma once
/******************************************************************************/
/* File   : NvM_BlocksNv_EcuabMemIf.hpp                                       */
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
#include "CompilerCfg_EcuabMemIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define EcuabMemIf_DevErrorDetect                                 DevErrorDetect
#define EcuabMemIf_InitCheck                                              STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eStatus_UnInit = 0
   ,  eStatus_Idle
   ,  eStatus_Busy
   ,  eStatus_BusyInternal
}NvM_BlocksNv_EcuabMemIf_TypeStatus;

typedef enum{
      eResultJob_Ok = 0
   ,  eResultJob_Failed
   ,  eResultJob_Pemding
   ,  eResultJob_Camceled
   ,  eResultJob_BlockInconsistent
   ,  eResultJob_BlockInvalid
}NvM_BlocksNv_EcuabMemIf_TypeResultJob;

typedef enum{
      eMode_Slow = 0
   ,  eMode_Fast
}NvM_BlocksNv_EcuabMemIf_TypeMode;

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

