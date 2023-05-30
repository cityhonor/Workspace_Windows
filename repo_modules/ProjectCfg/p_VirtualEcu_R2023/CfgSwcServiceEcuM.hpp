#pragma once
/******************************************************************************/
/* File   : CfgSwcServiceEcuM.hpp                                             */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_SwcServiceEcuM.hpp"

#include "CfgSwcServiceCanSm.hpp"
#include "CfgSwcServiceCanTp.hpp"
#include "CfgSwcServiceCom.hpp"
#include "CfgSwcServiceComM.hpp"
#include "CfgSwcServiceDcm.hpp"
#include "CfgSwcServicePduR.hpp"
#include "CfgEcuabCanIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SwcServiceEcuM_DevErrorDetect                             DevErrorDetect
#define SwcServiceEcuM_InitCheck                                          STD_ON
#define CfgSwcServiceEcuM_EnableInterrupts                                STD_ON

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
   uint8 BitsUnused     : 3;
}SwcServiceEcuM_tstEventsWakeupValidated; //TBD: Move to correct header

typedef struct{
   uint16                                   Mode;
   uint8                                    Target;
   uint8                                    Cause;
   SwcServiceEcuM_tstEventsWakeupValidated ValidatedWakeupEvents;
}SwcServiceEcuM_tstTargetShutdown; //TBD: Move to correct header

typedef struct{
   SwcServiceEcuM_tstTargetShutdown     DefaultShutdownTarget;
   const CfgEcuabCanIf_tst*             CfgEcuabCanIf_ptr;
   const CfgSwcServiceCanSm_tst*        CfgSwcServiceCanSm_ptr;
   const CfgSwcServiceCanTp_tst*        CfgSwcServiceCanTp_ptr;
   const CfgSwcServiceCom_tst*          CfgSwcServiceCom_ptr;
   const CfgSwcServiceComM_tst*         CfgSwcServiceComM_ptr;
   const CfgSwcServiceDcm_tst*          CfgSwcServiceDcm_ptr;
   const CfgSwcServicePduR_tst*         CfgSwcServicePduR_ptr;
}CfgSwcServiceEcuM_tst;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const CfgSwcServiceEcuM_tst CfgSwcServiceEcuM;

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

