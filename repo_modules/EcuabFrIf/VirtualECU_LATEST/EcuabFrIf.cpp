/******************************************************************************/
/* File   : EcuabFrIf.cpp                                                     */
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
#include "Module.hpp"
#include "EcuabFrIf.hpp"
#include "infEcuabFrIf_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABFRIF_AR_RELEASE_VERSION_MAJOR                                     4
#define ECUABFRIF_AR_RELEASE_VERSION_MINOR                                     3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABFRIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABFRIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABFRIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABFRIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_EcuabFrIf, ECUABFRIF_VAR) EcuabFrIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABFRIF_CONST,       ECUABFRIF_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABFRIF_CONFIG_DATA, ECUABFRIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabFrIf_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstEcuabFrIf_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == EcuabFrIf_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabFrIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabFrIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABFRIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::DeInitFunction(
   void
){
#if(STD_ON == EcuabFrIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabFrIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabFrIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABFRIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::MainFunction(
   void
){
#if(STD_ON == EcuabFrIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabFrIf_InitCheck)
   }
   else{
#if(STD_ON == EcuabFrIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABFRIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::ControllerInit(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::StartServiceCommunication(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::HaltServiceCommunication(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::AbortServiceCommunication(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetState(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::SetState(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::SetWakeupChannel(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::SendWUP(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetSyncState(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::SetExtSync(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetPOCStatus(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetGlobalTime(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::AllowColdStart(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetMacroticksDuration(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::Transmit(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::SetTransceiverMode(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetTransceiverMode(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetTransceiverWUReason(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::EnableTransceiverWakeup(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::DisableTransceiverWakeup(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::ClearTransceiverWakeup(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetCycleLength(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::SetAbsoluteTimer(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::SetRelativeTimer(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::McalCancelAbsoluteTimer(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::McalCancelRelativeTimer(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::EnableAbsoluteTimerIRQ(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::EnableRelativeTimerIRQ(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetAbsoluteTimerIRQStatus(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetRelativeTimerIRQStatus(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::AckAbsoluteTimerIRQ(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::AckRelativeTimerIRQ(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::DisableAbsoluteTimerIRQ(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::DisableRelativeTimerIRQ(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetServiceNmVector(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetClockCorrection(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetChannelStatus(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::ReadCCConfig(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::GetWakeupRxStatus(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::JobListExec(
   void
){
}

FUNC(void, ECUABFRIF_CODE) module_EcuabFrIf::CbWakeupByTransceiver(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

