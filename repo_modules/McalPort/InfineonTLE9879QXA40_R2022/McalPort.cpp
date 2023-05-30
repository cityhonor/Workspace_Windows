/******************************************************************************/
/* File   : McalPort.cpp                                                      */
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
#include "McalPort.hpp"
#include "infMcalPort_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALPORT_AR_RELEASE_VERSION_MAJOR                                      4
#define MCALPORT_AR_RELEASE_VERSION_MINOR                                      3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALPORT_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALPORT_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALPORT_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALPORT_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_McalPort, MCALPORT_VAR) McalPort;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void PORT_Init(void); //TBD: use interface headers as per architecture

FUNC(void, MCALPORT_CODE) module_McalPort::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALPORT_CONST,       MCALPORT_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALPORT_CONFIG_DATA, MCALPORT_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalPort_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalPort_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalPort_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
      PORT_Init();
#if(STD_ON == McalPort_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalPort_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALPORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPORT_CODE) module_McalPort::DeInitFunction(
   void
){
#if(STD_ON == McalPort_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalPort_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalPort_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALPORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPORT_CODE) module_McalPort::MainFunction(
   void
){
#if(STD_ON == McalPort_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalPort_InitCheck)
   }
   else{
#if(STD_ON == McalPort_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALPORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPORT_CODE) module_McalPort::SetPinDirection(
   void
){
}

FUNC(void, MCALPORT_CODE) module_McalPort::RefreshMcalPortDirection(
   void
){
}

FUNC(void, MCALPORT_CODE) module_McalPort::SetMcalPortMode(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

