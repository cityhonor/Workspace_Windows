#pragma once
/******************************************************************************/
/* File   : ServiceCom.hpp                                                    */
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
#include "infServiceCom_ServiceNvM_Types.hpp"
#include "CfgServiceCom.hpp"
#include "ServiceCom_core.hpp"
#include "infServiceCom_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceCom:
      INTERFACES_EXPORTED_SERVICECOM
      public abstract_module
   ,  public class_ServiceCom_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceCom;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICECOM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICECOM_CONST,       SERVICECOM_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECOM_CONFIG_DATA, SERVICECOM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICECOM_CODE) DeInitFunction (void);
      FUNC(void, SERVICECOM_CODE) MainFunction   (void);
      SERVICECOM_CORE_FUNCTIONALITIES

      FUNC(void, SERVICECOM_CODE) MainFunctionRx (void);
      FUNC(void, SERVICECOM_CODE) MainFunctionTx (void);
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
extern VAR(module_ServiceCom, SERVICECOM_VAR) ServiceCom;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

