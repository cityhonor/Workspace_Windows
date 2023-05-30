#pragma once
/******************************************************************************/
/* File   : CfgEcuabMemIf.hpp                                                 */
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
#include "CfgModule.hpp"
#include "CompilerCfg_EcuabMemIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGECUABMEMIF_AR_RELEASE_VERSION_MAJOR                                 4
#define CFGECUABMEMIF_AR_RELEASE_VERSION_MINOR                                 3
#define EcuabMemIf_DevErrorDetect                                 DevErrorDetect
#define EcuabMemIf_InitCheck                                              STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGECUABMEMIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGECUABMEMIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGECUABMEMIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGECUABMEMIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eStatus_UnInit = 0
   ,  eStatus_Idle
   ,  eStatus_Busy
   ,  eStatus_BusyInternal
}CfgEcuabMemIf_TypeStatus;

typedef enum{
      eResultJob_Ok = 0
   ,  eResultJob_Failed
   ,  eResultJob_Pemding
   ,  eResultJob_Camceled
   ,  eResultJob_BlockInconsistent
   ,  eResultJob_BlockInvalid
}CfgEcuabMemIf_TypeResultJob;

typedef enum{
      eMode_Slow = 0
   ,  eMode_Fast
}CfgEcuabMemIf_TypeMode;

class CfgEcuabMemIf_Type:
      public CfgModule_TypeAbstract
{
};

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

