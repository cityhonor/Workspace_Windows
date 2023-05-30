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
#define ECUABETHIF_CORE_FUNCTIONALITIES                                             \
              FUNC(void, ECUABETHIF_CODE) GetControllerMode                   (void);     \
              FUNC(void, ECUABETHIF_CODE) SetControllerMode                   (void);     \
              FUNC(void, ECUABETHIF_CODE) GetTransceiverWakeupMode            (void);     \
              FUNC(void, ECUABETHIF_CODE) SetTransceiverWakeupMode            (void);     \
              FUNC(void, ECUABETHIF_CODE) CheckWakeup                         (void);     \
              FUNC(void, ECUABETHIF_CODE) GetPhysAddr                         (void);     \
              FUNC(void, ECUABETHIF_CODE) SetPhysAddr                         (void);     \
              FUNC(void, ECUABETHIF_CODE) UpdatePhysAddrFilter                (void);     \
              FUNC(void, ECUABETHIF_CODE) GetMcalPortMacAddr                      (void);     \
              FUNC(void, ECUABETHIF_CODE) GetArlTable                         (void);     \
              FUNC(void, ECUABETHIF_CODE) GetCtrlIdxList                      (void);     \
              FUNC(void, ECUABETHIF_CODE) GetVlanId                           (void);     \
              FUNC(void, ECUABETHIF_CODE) GetAndResetMeasurementData          (void);     \
              FUNC(void, ECUABETHIF_CODE) StoreConfiguration                  (void);     \
              FUNC(void, ECUABETHIF_CODE) ResetConfiguration                  (void);     \
              FUNC(void, ECUABETHIF_CODE) GetCurrentTime                      (void);     \
              FUNC(void, ECUABETHIF_CODE) EnableEgressTimeStamp               (void);     \
              FUNC(void, ECUABETHIF_CODE) GetEgressTimeStamp                  (void);     \
              FUNC(void, ECUABETHIF_CODE) GetIngressTimeStamp                 (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGroupRequestMode          (void);     \
              FUNC(void, ECUABETHIF_CODE) StartAllMcalPorts                       (void);     \
              FUNC(void, ECUABETHIF_CODE) SetSwitchMgmtInfo                   (void);     \
              FUNC(void, ECUABETHIF_CODE) GetRxMgmtObject                     (void);     \
              FUNC(void, ECUABETHIF_CODE) GetTxMgmtObject                     (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchEnableTimeStamping            (void);     \
              FUNC(void, ECUABETHIF_CODE) VerifyConfig                        (void);     \
              FUNC(void, ECUABETHIF_CODE) SetForwardingMode                   (void);     \
              FUNC(void, ECUABETHIF_CODE) GetTrcvSignalQuality                (void);     \
              FUNC(void, ECUABETHIF_CODE) GetSwitchMcalPortSignalQuality          (void);     \
              FUNC(void, ECUABETHIF_CODE) ClearTrcvSignalQuality              (void);     \
              FUNC(void, ECUABETHIF_CODE) ClearSwitchMcalPortSignalQuality        (void);     \
              FUNC(void, ECUABETHIF_CODE) SetPhyTestMode                      (void);     \
              FUNC(void, ECUABETHIF_CODE) SetPhyLoopbackMode                  (void);     \
              FUNC(void, ECUABETHIF_CODE) SetPhyTxMode                        (void);     \
              FUNC(void, ECUABETHIF_CODE) GetCableDiagnosticsResult           (void);     \
              FUNC(void, ECUABETHIF_CODE) GetPhyIdentifier                    (void);     \
              FUNC(void, ECUABETHIF_CODE) GetBufWRxParams                     (void);     \
              FUNC(void, ECUABETHIF_CODE) GetBufWTxParams                     (void);     \
              FUNC(void, ECUABETHIF_CODE) SetBufWTxParams                     (void);     \
              FUNC(void, ECUABETHIF_CODE) SetRadioParams                      (void);     \
              FUNC(void, ECUABETHIF_CODE) SetChanRxParams                     (void);     \
              FUNC(void, ECUABETHIF_CODE) SetChanTxParams                     (void);     \
              FUNC(void, ECUABETHIF_CODE) GetChanRxParams                     (void);     \
              FUNC(void, ECUABETHIF_CODE) ProvideTxBuffer                     (void);     \
              FUNC(void, ECUABETHIF_CODE) Transmit                            (void);     \
              FUNC(void, ECUABETHIF_CODE) GetSwitchMcalPortMode                   (void);     \
              FUNC(void, ECUABETHIF_CODE) GetTransceiverMode                  (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetMcalLinkState              (void);     \
              FUNC(void, ECUABETHIF_CODE) TransceiverGetMcalLinkState             (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetBaudRate               (void);     \
              FUNC(void, ECUABETHIF_CODE) TransceiverGetBaudRate              (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetDuplxMode              (void);     \
              FUNC(void, ECUABETHIF_CODE) TransceiverGetDuplexMode            (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetCounterValues          (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetRxStatus               (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetTxStatus               (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetTxErrorCounterValues   (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetMacLearningMode        (void);     \
              FUNC(void, ECUABETHIF_CODE) GetSwitchMcalPortIdentifier             (void);     \
              FUNC(void, ECUABETHIF_CODE) GetSwitchIdentifier                 (void);     \
              FUNC(void, ECUABETHIF_CODE) ReadMcalPortMirrorConfiguration         (void);     \
              FUNC(void, ECUABETHIF_CODE) WriteMcalPortMirrorConfiguration        (void);     \
              FUNC(void, ECUABETHIF_CODE) DeleteMcalPortMirrorConfiguration       (void);     \
              FUNC(void, ECUABETHIF_CODE) GetMcalPortMirrorState                  (void);     \
              FUNC(void, ECUABETHIF_CODE) SetMcalPortMirrorState                  (void);     \
              FUNC(void, ECUABETHIF_CODE) SetMcalPortTestMode                     (void);     \
              FUNC(void, ECUABETHIF_CODE) SetMcalPortLoopbackMode                 (void);     \
              FUNC(void, ECUABETHIF_CODE) SetMcalPortTxMode                       (void);     \
              FUNC(void, ECUABETHIF_CODE) GetMcalPortCableDiagnosticsResult       (void);     \
              FUNC(void, ECUABETHIF_CODE) RunMcalPortCableDiagnostic              (void);     \
              FUNC(void, ECUABETHIF_CODE) RunCableDiagnostic                  (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchGetCfgDataRaw                 (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchGetCfgDataInfo                (void);     \
              FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetMaxFIFOBufferFillLevel (void);     \
              FUNC(void, ECUABETHIF_CODE) RxIndication                        (void);     \
              FUNC(void, ECUABETHIF_CODE) TxConfirmation                      (void);     \
              FUNC(void, ECUABETHIF_CODE) CbCtrlModeIndication                (void);     \
              FUNC(void, ECUABETHIF_CODE) CbTrcvModeIndication                (void);     \
              FUNC(void, ECUABETHIF_CODE) CbSwitchMcalPortModeIndication          (void);     \

#define ECUABETHIF_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, ECUABETHIF_CODE) GetControllerMode                   (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetControllerMode                   (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetTransceiverWakeupMode            (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetTransceiverWakeupMode            (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) CheckWakeup                         (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetPhysAddr                         (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetPhysAddr                         (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) UpdatePhysAddrFilter                (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetMcalPortMacAddr                      (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetArlTable                         (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetCtrlIdxList                      (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetVlanId                           (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetAndResetMeasurementData          (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) StoreConfiguration                  (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) ResetConfiguration                  (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetCurrentTime                      (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) EnableEgressTimeStamp               (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetEgressTimeStamp                  (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetIngressTimeStamp                 (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGroupRequestMode          (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) StartAllMcalPorts                       (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetSwitchMgmtInfo                   (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetRxMgmtObject                     (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetTxMgmtObject                     (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchEnableTimeStamping            (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) VerifyConfig                        (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetForwardingMode                   (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetTrcvSignalQuality                (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetSwitchMcalPortSignalQuality          (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) ClearTrcvSignalQuality              (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) ClearSwitchMcalPortSignalQuality        (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetPhyTestMode                      (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetPhyLoopbackMode                  (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetPhyTxMode                        (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetCableDiagnosticsResult           (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetPhyIdentifier                    (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetBufWRxParams                     (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetBufWTxParams                     (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetBufWTxParams                     (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetRadioParams                      (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetChanRxParams                     (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetChanTxParams                     (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetChanRxParams                     (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) ProvideTxBuffer                     (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) Transmit                            (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetSwitchMcalPortMode                   (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetTransceiverMode                  (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetMcalLinkState              (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) TransceiverGetMcalLinkState             (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetBaudRate               (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) TransceiverGetBaudRate              (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetDuplxMode              (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) TransceiverGetDuplexMode            (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetCounterValues          (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetRxStatus               (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetTxStatus               (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetTxErrorCounterValues   (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetMacLearningMode        (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetSwitchMcalPortIdentifier             (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetSwitchIdentifier                 (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) ReadMcalPortMirrorConfiguration         (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) WriteMcalPortMirrorConfiguration        (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) DeleteMcalPortMirrorConfiguration       (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetMcalPortMirrorState                  (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetMcalPortMirrorState                  (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetMcalPortTestMode                     (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetMcalPortLoopbackMode                 (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SetMcalPortTxMode                       (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) GetMcalPortCableDiagnosticsResult       (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) RunMcalPortCableDiagnostic              (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) RunCableDiagnostic                  (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchGetCfgDataRaw                 (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchGetCfgDataInfo                (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) SwitchMcalPortGetMaxFIFOBufferFillLevel (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) RxIndication                        (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) TxConfirmation                      (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) CbCtrlModeIndication                (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) CbTrcvModeIndication                (void) = 0; \
      virtual FUNC(void, ECUABETHIF_CODE) CbSwitchMcalPortModeIndication          (void) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabEthIf_Functionality{
   public:
      ECUABETHIF_CORE_FUNCTIONALITIES_VIRTUAL
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

