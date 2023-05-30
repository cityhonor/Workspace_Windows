/******************************************************************************/
/* File   : EcuabEa.cpp                                                       */
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
#include "EcuabEa.hpp"
#include "infEcuabEa_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABEA_AR_RELEASE_VERSION_MAJOR                                       4
#define ECUABEA_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABEA_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABEA_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABEA_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABEA_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_EcuabEa, ECUABEA_VAR) EcuabEa;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABEA_CODE) module_EcuabEa::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABEA_CONST,       ECUABEA_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABEA_CONFIG_DATA, ECUABEA_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabEa_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstEcuabEa_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == EcuabEa_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabEa_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabEa_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABEA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::DeInitFunction(
   void
){
#if(STD_ON == EcuabEa_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabEa_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabEa_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABEA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::MainFunction(
   void
){
#if(STD_ON == EcuabEa_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabEa_InitCheck)
   }
   else{
#if(STD_ON == EcuabEa_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABEA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::SetMode(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::Read(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::Write(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::McalCancel(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::GetStatus(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::GetJobResult(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::InvalidateBlock(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::EraseImmediateBlock(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::CbJobEndNotification(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::CbJobErrorNotification(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

