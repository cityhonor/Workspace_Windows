/******************************************************************************/
/* File   : McalPwm.cpp                                                       */
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
#include "McalPwm.hpp"
#include "infMcalPwm_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALPWM_AR_RELEASE_VERSION_MAJOR                                       4
#define MCALPWM_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALPWM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALPWM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALPWM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALPWM_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_McalPwm, MCALPWM_VAR) McalPwm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALPWM_CODE) module_McalPwm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALPWM_CONST,       MCALPWM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALPWM_CONFIG_DATA, MCALPWM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalPwm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalPwm_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalPwm_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalPwm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalPwm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALPWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPWM_CODE) module_McalPwm::DeInitFunction(
   void
){
#if(STD_ON == McalPwm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalPwm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalPwm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALPWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPWM_CODE) module_McalPwm::MainFunction(
   void
){
#if(STD_ON == McalPwm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalPwm_InitCheck)
   }
   else{
#if(STD_ON == McalPwm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALPWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPWM_CODE) module_McalPwm::SetDutyCycle(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::SetPeriodAndDuty(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::SetOutputToIdle(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::SetOutputState(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::DisableNotification(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::EnableNotification(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::SetPowerState(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::GetCurrentPowerState(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::GetTargetPowerState(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::PreparePowerState(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

