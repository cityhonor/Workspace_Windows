/******************************************************************************/
/* File   : ServiceCom.cpp                                                    */
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
#include "ServiceCom.hpp"
#include "infServiceCom_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
VAR(module_ServiceCom, SERVICECOM_VAR) ServiceCom;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICECOM_CODE) module_ServiceCom::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICECOM_CONST,       SERVICECOM_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECOM_CONFIG_DATA, SERVICECOM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceCom_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceCom_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceCom_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceCom_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECOM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::DeInitFunction(
   void
){
#if(STD_ON == ServiceCom_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceCom_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceCom_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECOM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::MainFunction(
   void
){
#if(STD_ON == ServiceCom_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceCom_InitCheck)
   }
   else{
#if(STD_ON == ServiceCom_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECOM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::MainFunctionRx(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::MainFunctionTx(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::IpduGroupStart(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::IpduGroupStop(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::EnableReceptionDM(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::DisableReceptionDM(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::GetStatus(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::SendSignal(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::SendDynSignal(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::ReceiveSignal(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::ReceiveDynSignal(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::SendSignalGroup(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::ReceiveSignalGroup(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::SendSignalGroupArray(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::ReceiveSignalGroupArray(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::InvalidateSignal(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::InvalidateSignalGroup(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::TriggerIpduSend(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::TriggerIpduSendWithMetaData(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::SwitchIpduTxMode(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbTriggerTransmit(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::RxIndication(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbTpRxIndication(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::TxConfirmation(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbTpTxConfirmation(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbStartOfReception(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbCopyRxData(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbCopyTxData(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbTxAck(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbTxErr(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbTxTOut(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbRxAck(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbRxTOut(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbRxInv(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CbCounterErr(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CallOutRxIpdu(
   void
){
}

FUNC(void, SERVICECOM_CODE) module_ServiceCom::CallOutTxIpdu(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

