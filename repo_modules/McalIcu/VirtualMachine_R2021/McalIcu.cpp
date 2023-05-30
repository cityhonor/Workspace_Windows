/******************************************************************************/
/* File   : McalIcu.cpp                                                           */
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
#include "McalIcu.hpp"
#include "infMcalIcu_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ICU_AR_RELEASE_VERSION_MAJOR                                           4
#define ICU_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ICU_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ICU_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ICU_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ICU_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_McalIcu, ICU_VAR) McalIcu;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ICU_CODE) module_McalIcu::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ICU_CONST,       ICU_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ICU_CONFIG_DATA, ICU_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalIcu_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalIcu_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalIcu_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalIcu_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalIcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ICU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ICU_CODE) module_McalIcu::DeInitFunction(
   void
){
#if(STD_ON == McalIcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalIcu_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalIcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ICU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ICU_CODE) module_McalIcu::MainFunction(
   void
){
#if(STD_ON == McalIcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalIcu_InitCheck)
   }
   else{
#if(STD_ON == McalIcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ICU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ICU_CODE) module_McalIcu::SetMode(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::DisableWakeup(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::SetActivationCondition(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::DisableNotification(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::EnableNotification(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::GetInputState(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::StartTimeStamp(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::StopTimeStamp(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::GetTimeStampIndex(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::ResetEdgeCount(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::DisableEdgeCount(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::EnableEdgeCount(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::GetEdgeNumbers(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::StartSignalMeasurement(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::StopSignalMeasurement(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::GetTimeElapsed(
   void
){
}

FUNC(void, ICU_CODE) module_McalIcu::GetDutyCycleValues(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

