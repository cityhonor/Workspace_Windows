/******************************************************************************/
/* File   : EcuabEthIf.cpp                                                    */
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
#include "EcuabEthIf.hpp"
#include "infEcuabEthIf_Imp.hpp"

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
VAR(module_EcuabEthIf, ECUABETHIF_VAR) EcuabEthIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABETHIF_CONST,       ECUABETHIF_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABETHIF_CONFIG_DATA, ECUABETHIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabEthIf_InitCheck)
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
#if(STD_ON == EcuabEthIf_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabEthIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabEthIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABETHIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::DeInitFunction(
   void
){
#if(STD_ON == EcuabEthIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabEthIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabEthIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABETHIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::MainFunction(
   void
){
#if(STD_ON == EcuabEthIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabEthIf_InitCheck)
   }
   else{
#if(STD_ON == EcuabEthIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABETHIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::MainFunctionRx(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::MainFunctionTx(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::MainFunctionState(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetControllerMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetControllerMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetTransceiverWakeupMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetTransceiverWakeupMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::CheckWakeup(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetPhysAddr(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetPhysAddr(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::UpdatePhysAddrFilter(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetMcalPortMacAddr(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetArlTable(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetCtrlIdxList(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetVlanId(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetAndResetMeasurementData(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::StoreConfiguration(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::ResetConfiguration(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetCurrentTime(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::EnableEgressTimeStamp(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetEgressTimeStamp(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetIngressTimeStamp(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchMcalPortGroupRequestMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::StartAllMcalPorts(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetSwitchMgmtInfo(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetRxMgmtObject(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetTxMgmtObject(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchEnableTimeStamping(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::VerifyConfig(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetForwardingMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetTrcvSignalQuality(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetSwitchMcalPortSignalQuality(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::ClearTrcvSignalQuality(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::ClearSwitchMcalPortSignalQuality(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetPhyTestMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetPhyLoopbackMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetPhyTxMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetCableDiagnosticsResult(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetPhyIdentifier(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetBufWRxParams(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetBufWTxParams(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetBufWTxParams(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetRadioParams(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetChanRxParams(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetChanTxParams(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetChanRxParams(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::ProvideTxBuffer(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::Transmit(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetSwitchMcalPortMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetTransceiverMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchMcalPortGetMcalLinkState(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::TransceiverGetMcalLinkState(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchMcalPortGetBaudRate(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::TransceiverGetBaudRate(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchMcalPortGetDuplxMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::TransceiverGetDuplexMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchMcalPortGetCounterValues(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchMcalPortGetRxStatus(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchMcalPortGetTxStatus(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchMcalPortGetTxErrorCounterValues(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchMcalPortGetMacLearningMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetSwitchMcalPortIdentifier(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetSwitchIdentifier(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::ReadMcalPortMirrorConfiguration(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::WriteMcalPortMirrorConfiguration(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::DeleteMcalPortMirrorConfiguration(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetMcalPortMirrorState(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetMcalPortMirrorState(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetMcalPortTestMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetMcalPortLoopbackMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SetMcalPortTxMode(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::GetMcalPortCableDiagnosticsResult(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::RunMcalPortCableDiagnostic(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::RunCableDiagnostic(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchGetCfgDataRaw(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchGetCfgDataInfo(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::SwitchMcalPortGetMaxFIFOBufferFillLevel(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::RxIndication(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::TxConfirmation(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::CbCtrlModeIndication(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::CbTrcvModeIndication(
   void
){
}

FUNC(void, ECUABETHIF_CODE) module_EcuabEthIf::CbSwitchMcalPortModeIndication(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

