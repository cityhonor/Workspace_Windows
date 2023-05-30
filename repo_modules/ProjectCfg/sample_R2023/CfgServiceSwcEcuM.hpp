#pragma once
/******************************************************************************/
/* File   : CfgServiceSwcEcuM.hpp                                             */
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

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ServiceSwcEcuM_DevErrorDetect                             DevErrorDetect
#define ServiceSwcEcuM_InitCheck                                          STD_ON
#define CfgServiceSwcEcuM_EnableInterrupts                                STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   uint8 bPower         : 1;
   uint8 bReset         : 1;
   uint8 bInternalReset : 1;
   uint8 bInternalWdg   : 1;
   uint8 bExternalWdg   : 1;
}ServiceSwcEcuM_TypeValidatedWakeupEvents; //TBD: Move to correct header

typedef struct{
   uint16                                   Mode;
   uint8                                    Target;
   uint8                                    Cause;
   ServiceSwcEcuM_TypeValidatedWakeupEvents ValidatedWakeupEvents;
}ServiceSwcEcuM_TypeShutdownTarget; //TBD: Move to correct header

typedef uint8 CfgEcuAbCanIf_Type;
typedef uint8 CfgEcuAbCanTp_Type;
typedef uint8 CfgServiceComM_Type;
typedef uint8 CfgServiceCanSM_Type;
typedef uint8 CfgServicePduR_Type;
typedef uint8 CfgServiceCom_Type;

typedef struct{
   ServiceSwcEcuM_TypeShutdownTarget DefaultShutdownTarget;
   const CfgEcuAbCanIf_Type*         CfgEcuAbCanIf_ptr;
   const CfgEcuAbCanTp_Type*         CfgEcuAbCanTp_ptr;
   const CfgServiceComM_Type*        CfgServiceComM_ptr;
   const CfgServiceCanSM_Type*       CfgServiceCanSM_ptr;
   const CfgServicePduR_Type*        CfgServicePduR_ptr;
   const CfgServiceCom_Type*         CfgServiceCom_ptr;
}CfgServiceSwcEcuM_Type;

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

