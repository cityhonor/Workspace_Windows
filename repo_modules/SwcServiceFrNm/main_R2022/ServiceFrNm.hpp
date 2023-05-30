#pragma once
/******************************************************************************/
/* File   : ServiceFrNm.hpp                                                          */
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
#include "ConstServiceFrNm.hpp"
#include "CfgServiceFrNm.hpp"
#include "ServiceFrNm_core.hpp"
#include "infServiceFrNm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceFrNm:
      INTERFACES_EXPORTED_SERVICEFRNM
      public abstract_module
   ,  public class_ServiceFrNm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceFrNm_Type* lptrConst = (ConstServiceFrNm_Type*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceFrNm;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEFRNM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEFRNM_CONST,       SERVICEFRNM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEFRNM_CONFIG_DATA, SERVICEFRNM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEFRNM_CODE) DeInitFunction (void);
      FUNC(void, SERVICEFRNM_CODE) MainFunction   (void);
      SERVICEFRNM_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceFrNm, SERVICEFRNM_VAR) ServiceFrNm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

