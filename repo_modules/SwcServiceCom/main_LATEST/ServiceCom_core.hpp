#pragma once
/******************************************************************************/
/* File   : ServiceCom_core.hpp                                                      */
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
#include "CompilerCfg_ServiceCom.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICECOM_CORE_FUNCTIONALITIES                                               \
              FUNC(void, SERVICECOM_CODE) IpduGroupStart              (void);         \
              FUNC(void, SERVICECOM_CODE) IpduGroupStop               (void);         \
              FUNC(void, SERVICECOM_CODE) EnableReceptionDM           (void);         \
              FUNC(void, SERVICECOM_CODE) DisableReceptionDM          (void);         \
              FUNC(void, SERVICECOM_CODE) GetStatus                   (void);         \
              FUNC(void, SERVICECOM_CODE) SendSignal                  (void);         \
              FUNC(void, SERVICECOM_CODE) SendDynSignal               (void);         \
              FUNC(void, SERVICECOM_CODE) ReceiveSignal               (void);         \
              FUNC(void, SERVICECOM_CODE) ReceiveDynSignal            (void);         \
              FUNC(void, SERVICECOM_CODE) SendSignalGroup             (void);         \
              FUNC(void, SERVICECOM_CODE) ReceiveSignalGroup          (void);         \
              FUNC(void, SERVICECOM_CODE) SendSignalGroupArray        (void);         \
              FUNC(void, SERVICECOM_CODE) ReceiveSignalGroupArray     (void);         \
              FUNC(void, SERVICECOM_CODE) InvalidateSignal            (void);         \
              FUNC(void, SERVICECOM_CODE) InvalidateSignalGroup       (void);         \
              FUNC(void, SERVICECOM_CODE) TriggerIpduSend             (void);         \
              FUNC(void, SERVICECOM_CODE) TriggerIpduSendWithMetaData (void);         \
              FUNC(void, SERVICECOM_CODE) SwitchIpduTxMode            (void);         \
              FUNC(void, SERVICECOM_CODE) CbTriggerTransmit           (void);         \
              FUNC(void, SERVICECOM_CODE) RxIndication                (void);         \
              FUNC(void, SERVICECOM_CODE) CbTpRxIndication            (void);         \
              FUNC(void, SERVICECOM_CODE) TxConfirmation              (void);         \
              FUNC(void, SERVICECOM_CODE) CbTpTxConfirmation          (void);         \
              FUNC(void, SERVICECOM_CODE) CbStartOfReception          (void);         \
              FUNC(void, SERVICECOM_CODE) CbCopyRxData                (void);         \
              FUNC(void, SERVICECOM_CODE) CbCopyTxData                (void);         \
              FUNC(void, SERVICECOM_CODE) CbTxAck                     (void);         \
              FUNC(void, SERVICECOM_CODE) CbTxErr                     (void);         \
              FUNC(void, SERVICECOM_CODE) CbTxTOut                    (void);         \
              FUNC(void, SERVICECOM_CODE) CbRxAck                     (void);         \
              FUNC(void, SERVICECOM_CODE) CbRxTOut                    (void);         \
              FUNC(void, SERVICECOM_CODE) CbRxInv                     (void);         \
              FUNC(void, SERVICECOM_CODE) CbCounterErr                (void);         \
              FUNC(void, SERVICECOM_CODE) CallOutRxIpdu               (void);         \
              FUNC(void, SERVICECOM_CODE) CallOutTxIpdu               (void);         \

#define SERVICECOM_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, SERVICECOM_CODE) IpduGroupStart              (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) IpduGroupStop               (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) EnableReceptionDM           (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) DisableReceptionDM          (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) GetStatus                   (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) SendSignal                  (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) SendDynSignal               (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) ReceiveSignal               (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) ReceiveDynSignal            (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) SendSignalGroup             (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) ReceiveSignalGroup          (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) SendSignalGroupArray        (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) ReceiveSignalGroupArray     (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) InvalidateSignal            (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) InvalidateSignalGroup       (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) TriggerIpduSend             (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) TriggerIpduSendWithMetaData (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) SwitchIpduTxMode            (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbTriggerTransmit           (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) RxIndication                (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbTpRxIndication            (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) TxConfirmation              (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbTpTxConfirmation          (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbStartOfReception          (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbCopyRxData                (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbCopyTxData                (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbTxAck                     (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbTxErr                     (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbTxTOut                    (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbRxAck                     (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbRxTOut                    (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbRxInv                     (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CbCounterErr                (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CallOutRxIpdu               (void) = 0;     \
      virtual FUNC(void, SERVICECOM_CODE) CallOutTxIpdu               (void) = 0;     \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceCom_Functionality{
   public:
      SERVICECOM_CORE_FUNCTIONALITIES_VIRTUAL
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

