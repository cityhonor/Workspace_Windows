#pragma once
/******************************************************************************/
/* File   : EcuabFrIf.hpp                                                          */
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
#include "ConstEcuabFrIf.hpp"
#include "CfgEcuabFrIf.hpp"
#include "EcuabFrIf_core.hpp"
#include "infEcuabFrIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabFrIf:
      INTERFACES_EXPORTED_ECUABFRIF
      public abstract_module
   ,  public class_EcuabFrIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabFrIf_Type* lptrConst = (ConstEcuabFrIf_Type*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabFrIf;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABFRIF_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABFRIF_CONST,       ECUABFRIF_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABFRIF_CONFIG_DATA, ECUABFRIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABFRIF_CODE) DeInitFunction (void);
      FUNC(void, ECUABFRIF_CODE) MainFunction   (void);
      ECUABFRIF_CORE_FUNCTIONALITIES
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
extern VAR(module_EcuabFrIf, ECUABFRIF_VAR) EcuabFrIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

