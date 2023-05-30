#pragma once
/******************************************************************************/
/* File   : EcuabEthIf_core.hpp                                                    */
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
#include "CompilerCfg_EcuabEthIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ETHIF_CORE_FUNCTIONALITIES                                             \
              FUNC(void, ETHIF_CODE) GetControllerMode                   (void);     \
              FUNC(void, ETHIF_CODE) SetControllerMode                   (void);     \
              FUNC(void, ETHIF_CODE) GetTransceiverWakeupMode            (void);     \
              FUNC(void, ETHIF_CODE) SetTransceiverWakeupMode            (void);     \
              FUNC(void, ETHIF_CODE) CheckWakeup                         (void);     \
              FUNC(void, ETHIF_CODE) GetPhysAddr                         (void);     \
              FUNC(void, ETHIF_CODE) SetPhysAddr                         (void);     \
              FUNC(void, ETHIF_CODE) UpdatePhysAddrFilter                (void);     \
              FUNC(void, ETHIF_CODE) GetMcalPortMacAddr                      (void);     \
              FUNC(void, ETHIF_CODE) GetArlTable                         (void);     \
              FUNC(void, ETHIF_CODE) GetCtrlIdxList                      (void);     \
              FUNC(void, ETHIF_CODE) GetVlanId                           (void);     \
              FUNC(void, ETHIF_CODE) GetAndResetMeasurementData          (void);     \
              FUNC(void, ETHIF_CODE) StoreConfiguration                  (void);     \
              FUNC(void, ETHIF_CODE) ResetConfiguration                  (void);     \
              FUNC(void, ETHIF_CODE) GetCurrentTime                      (void);     \
              FUNC(void, ETHIF_CODE) EnableEgressTimeStamp               (void);     \
              FUNC(void, ETHIF_CODE) GetEgressTimeStamp                  (void);     \
              FUNC(void, ETHIF_CODE) GetIngressTimeStamp                 (void);     \
              FUNC(void, ETHIF_CODE) SwitchMcalPortGroupRequestMode          (void);     \
              FUNC(void, ETHIF_CODE) StartAllMcalPorts                       (void);     \
              FUNC(void, ETHIF_CODE) SetSwitchMgmtInfo                   (void);     \
              FUNC(void, ETHIF_CODE) GetRxMgmtObject                     (void);     \
              FUNC(void, ETHIF_CODE) GetTxMgmtObject                     (void);     \
              FUNC(void, ETHIF_CODE) SwitchEnableTimeStamping            (void);     \
              FUNC(void, ETHIF_CODE) VerifyConfig                        (void);     \
              FUNC(void, ETHIF_CODE) SetForwardingMode                   (void);     \
              FUNC(void, ETHIF_CODE) GetTrcvSignalQuality                (void);     \
              FUNC(void, ETHIF_CODE) GetSwitchMcalPortSignalQuality          (void);     \
              FUNC(void, ETHIF_CODE) ClearTrcvSignalQuality              (void);     \
              FUNC(void, ETHIF_CODE) ClearSwitchMcalPortSignalQuality        (void);     \
              FUNC(void, ETHIF_CODE) SetPhyTestMode                      (void);     \
              FUNC(void, ETHIF_CODE) SetPhyLoopbackMode                  (void);     \
              FUNC(void, ETHIF_CODE) SetPhyTxMode                        (void);     \
              FUNC(void, ETHIF_CODE) GetCableDiagnosticsResult           (void);     \
              FUNC(void, ETHIF_CODE) GetPhyIdentifier                    (void);     \
              FUNC(void, ETHIF_CODE) GetBufWRxParams                     (void);     \
              FUNC(void, ETHIF_CODE) GetBufWTxParams                     (void);     \
              FUNC(void, ETHIF_CODE) SetBufWTxParams                     (void);     \
              FUNC(void, ETHIF_CODE) SetRadioParams                      (void);     \
              FUNC(void, ETHIF_CODE) SetChanRxParams                     (void);     \
              FUNC(void, ETHIF_CODE) SetChanTxParams                     (void);     \
              FUNC(void, ETHIF_CODE) GetChanRxParams                     (void);     \
              FUNC(void, ETHIF_CODE) ProvideTxBuffer                     (void);     \
              FUNC(void, ETHIF_CODE) Transmit                            (void);     \
              FUNC(void, ETHIF_CODE) GetSwitchMcalPortMode                   (void);     \
              FUNC(void, ETHIF_CODE) GetTransceiverMode                  (void);     \
              FUNC(void, ETHIF_CODE) SwitchMcalPortGetMcalLinkState              (void);     \
              FUNC(void, ETHIF_CODE) TransceiverGetMcalLinkState             (void);     \
              FUNC(void, ETHIF_CODE) SwitchMcalPortGetBaudRate               (void);     \
              FUNC(void, ETHIF_CODE) TransceiverGetBaudRate              (void);     \
              FUNC(void, ETHIF_CODE) SwitchMcalPortGetDuplxMode              (void);     \
              FUNC(void, ETHIF_CODE) TransceiverGetDuplexMode            (void);     \
              FUNC(void, ETHIF_CODE) SwitchMcalPortGetCounterValues          (void);     \
              FUNC(void, ETHIF_CODE) SwitchMcalPortGetRxStatus               (void);     \
              FUNC(void, ETHIF_CODE) SwitchMcalPortGetTxStatus               (void);     \
              FUNC(void, ETHIF_CODE) SwitchMcalPortGetTxErrorCounterValues   (void);     \
              FUNC(void, ETHIF_CODE) SwitchMcalPortGetMacLearningMode        (void);     \
              FUNC(void, ETHIF_CODE) GetSwitchMcalPortIdentifier             (void);     \
              FUNC(void, ETHIF_CODE) GetSwitchIdentifier                 (void);     \
              FUNC(void, ETHIF_CODE) ReadMcalPortMirrorConfiguration         (void);     \
              FUNC(void, ETHIF_CODE) WriteMcalPortMirrorConfiguration        (void);     \
              FUNC(void, ETHIF_CODE) DeleteMcalPortMirrorConfiguration       (void);     \
              FUNC(void, ETHIF_CODE) GetMcalPortMirrorState                  (void);     \
              FUNC(void, ETHIF_CODE) SetMcalPortMirrorState                  (void);     \
              FUNC(void, ETHIF_CODE) SetMcalPortTestMode                     (void);     \
              FUNC(void, ETHIF_CODE) SetMcalPortLoopbackMode                 (void);     \
              FUNC(void, ETHIF_CODE) SetMcalPortTxMode                       (void);     \
              FUNC(void, ETHIF_CODE) GetMcalPortCableDiagnosticsResult       (void);     \
              FUNC(void, ETHIF_CODE) RunMcalPortCableDiagnostic              (void);     \
              FUNC(void, ETHIF_CODE) RunCableDiagnostic                  (void);     \
              FUNC(void, ETHIF_CODE) SwitchGetCfgDataRaw                 (void);     \
              FUNC(void, ETHIF_CODE) SwitchGetCfgDataInfo                (void);     \
              FUNC(void, ETHIF_CODE) SwitchMcalPortGetMaxFIFOBufferFillLevel (void);     \
              FUNC(void, ETHIF_CODE) RxIndication                        (void);     \
              FUNC(void, ETHIF_CODE) TxConfirmation                      (void);     \
              FUNC(void, ETHIF_CODE) CbCtrlModeIndication                (void);     \
              FUNC(void, ETHIF_CODE) CbTrcvModeIndication                (void);     \
              FUNC(void, ETHIF_CODE) CbSwitchMcalPortModeIndication          (void);     \

#define ETHIF_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, ETHIF_CODE) GetControllerMode                   (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetControllerMode                   (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetTransceiverWakeupMode            (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetTransceiverWakeupMode            (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) CheckWakeup                         (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetPhysAddr                         (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetPhysAddr                         (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) UpdatePhysAddrFilter                (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetMcalPortMacAddr                      (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetArlTable                         (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetCtrlIdxList                      (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetVlanId                           (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetAndResetMeasurementData          (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) StoreConfiguration                  (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) ResetConfiguration                  (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetCurrentTime                      (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) EnableEgressTimeStamp               (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetEgressTimeStamp                  (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetIngressTimeStamp                 (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchMcalPortGroupRequestMode          (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) StartAllMcalPorts                       (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetSwitchMgmtInfo                   (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetRxMgmtObject                     (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetTxMgmtObject                     (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchEnableTimeStamping            (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) VerifyConfig                        (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetForwardingMode                   (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetTrcvSignalQuality                (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetSwitchMcalPortSignalQuality          (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) ClearTrcvSignalQuality              (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) ClearSwitchMcalPortSignalQuality        (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetPhyTestMode                      (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetPhyLoopbackMode                  (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetPhyTxMode                        (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetCableDiagnosticsResult           (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetPhyIdentifier                    (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetBufWRxParams                     (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetBufWTxParams                     (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetBufWTxParams                     (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetRadioParams                      (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetChanRxParams                     (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetChanTxParams                     (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetChanRxParams                     (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) ProvideTxBuffer                     (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) Transmit                            (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetSwitchMcalPortMode                   (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetTransceiverMode                  (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchMcalPortGetMcalLinkState              (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) TransceiverGetMcalLinkState             (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchMcalPortGetBaudRate               (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) TransceiverGetBaudRate              (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchMcalPortGetDuplxMode              (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) TransceiverGetDuplexMode            (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchMcalPortGetCounterValues          (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchMcalPortGetRxStatus               (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchMcalPortGetTxStatus               (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchMcalPortGetTxErrorCounterValues   (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchMcalPortGetMacLearningMode        (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetSwitchMcalPortIdentifier             (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetSwitchIdentifier                 (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) ReadMcalPortMirrorConfiguration         (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) WriteMcalPortMirrorConfiguration        (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) DeleteMcalPortMirrorConfiguration       (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetMcalPortMirrorState                  (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetMcalPortMirrorState                  (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetMcalPortTestMode                     (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetMcalPortLoopbackMode                 (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SetMcalPortTxMode                       (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) GetMcalPortCableDiagnosticsResult       (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) RunMcalPortCableDiagnostic              (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) RunCableDiagnostic                  (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchGetCfgDataRaw                 (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchGetCfgDataInfo                (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) SwitchMcalPortGetMaxFIFOBufferFillLevel (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) RxIndication                        (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) TxConfirmation                      (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) CbCtrlModeIndication                (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) CbTrcvModeIndication                (void) = 0; \
      virtual FUNC(void, ETHIF_CODE) CbSwitchMcalPortModeIndication          (void) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabEthIf_Functionality{
   public:
      ETHIF_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

