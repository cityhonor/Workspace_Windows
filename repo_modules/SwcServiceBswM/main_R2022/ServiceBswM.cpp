/******************************************************************************/
/* File   : ServiceBswM.cpp                                                   */
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
#include "ServiceBswM.hpp"
#include "infServiceBswM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEBSWM_AR_RELEASE_VERSION_MAJOR                                   4
#define SERVICEBSWM_AR_RELEASE_VERSION_MINOR                                   3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICEBSWM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICEBSWM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICEBSWM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICEBSWM_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_ServiceBswM, SERVICEBSWM_VAR) ServiceBswM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICEBSWM_CONST,       SERVICEBSWM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEBSWM_CONFIG_DATA, SERVICEBSWM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceBswM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceBswM_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceBswM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEBSWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::DeInitFunction(
   void
){
#if(STD_ON == ServiceBswM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceBswM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEBSWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::MainFunction(
   void
){
#if(STD_ON == ServiceBswM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceBswM_InitCheck)
   }
   else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEBSWM_E_UNINIT
      );
#endif
   }
#endif
}

// ServiceEcuM_Init.SelectShutdownTarget(...);
// ServiceEcuM_Init.GoDownHaltPoll(...);

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentWakeupSources(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::PartitionRestarted(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentIcomConfiguration(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentState(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentMode(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentPNCMode(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::InitiateReset(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::ApplicationUpdated(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentWakeup(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::McalPortGroupMcalLinkStateChg(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::BroadcastStatus(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::StateChangeNotification(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentSchedule(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::RequestMode(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CarWakeUpIndication(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentBlockMode(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::CurrentJobMode(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::ClientServiceCurrentState(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::ConsumedEventGroupCurrentState(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::EventHandlerCurrentState(
   void
){
}

FUNC(void, SERVICEBSWM_CODE) module_ServiceBswM::RequestPartitionReset(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

