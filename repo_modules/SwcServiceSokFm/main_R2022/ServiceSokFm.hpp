#pragma once
/******************************************************************************/
/* File   : ServiceSokFm.hpp                                                         */
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
#include "ConstServiceSokFm.hpp"
#include "CfgServiceSokFm.hpp"
#include "ServiceSokFm_core.hpp"
#include "infServiceSokFm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceSokFm:
      INTERFACES_EXPORTED_SERVICESOKFM
      public abstract_module
   ,  public class_ServiceSokFm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceSokFm_Type* lptrConst = (ConstServiceSokFm_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICESOKFM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICESOKFM_CONST,       SERVICESOKFM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESOKFM_CONFIG_DATA, SERVICESOKFM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICESOKFM_CODE) DeInitFunction (void);
      FUNC(void, SERVICESOKFM_CODE) MainFunction   (void);
      SERVICESOKFM_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceSokFm, SERVICESOKFM_VAR) ServiceSokFm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

