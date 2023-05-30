#pragma once
/******************************************************************************/
/* File   : McalFr_core.hpp                                                       */
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
#include "CompilerCfg_McalFr.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FR_CORE_FUNCTIONALITIES                                                \
              FUNC(void, FR_CODE) ControllerInit            (void);            \
              FUNC(void, FR_CODE) SendMTS                   (void);            \
              FUNC(void, FR_CODE) StopMTS                   (void);            \
              FUNC(void, FR_CODE) CheckMTS                  (void);            \
              FUNC(void, FR_CODE) StartServiceCommunication        (void);            \
              FUNC(void, FR_CODE) AllowColdStart            (void);            \
              FUNC(void, FR_CODE) HaltServiceCommunication         (void);            \
              FUNC(void, FR_CODE) AbortServiceCommunication        (void);            \
              FUNC(void, FR_CODE) SendWUP                   (void);            \
              FUNC(void, FR_CODE) SetWakeupChannel          (void);            \
              FUNC(void, FR_CODE) SetExtSync                (void);            \
              FUNC(void, FR_CODE) GetSyncState              (void);            \
              FUNC(void, FR_CODE) GetPOCStatus              (void);            \
              FUNC(void, FR_CODE) TransmitTxLPdu            (void);            \
              FUNC(void, FR_CODE) ReceiveRxLPdu             (void);            \
              FUNC(void, FR_CODE) CheckTxLPduStatus         (void);            \
              FUNC(void, FR_CODE) PrepareLPdu               (void);            \
              FUNC(void, FR_CODE) GetGlobalTime             (void);            \
              FUNC(void, FR_CODE) GetServiceNmVector               (void);            \
              FUNC(void, FR_CODE) SetAbsoluteTimer          (void);            \
              FUNC(void, FR_CODE) SetRelativeTimer          (void);            \
              FUNC(void, FR_CODE) McalCancelAbsoluteTimer       (void);            \
              FUNC(void, FR_CODE) McalCancelRelativeTimer       (void);            \
              FUNC(void, FR_CODE) EnableAbsoluteTimerIRQ    (void);            \
              FUNC(void, FR_CODE) EnableRelativeTimerIRQ    (void);            \
              FUNC(void, FR_CODE) AckAbsoluteTimerIRQ       (void);            \
              FUNC(void, FR_CODE) AckRelativeTimerIRQ       (void);            \
              FUNC(void, FR_CODE) DisableAbsoluteTimerIRQ   (void);            \
              FUNC(void, FR_CODE) DisableRelativeTimerIRQ   (void);            \
              FUNC(void, FR_CODE) GetAbsoluteTimerIRQStatus (void);            \
              FUNC(void, FR_CODE) GetRelativeTimerIRQStatus (void);            \

#define FR_CORE_FUNCTIONALITIES_VIRTUAL                                        \
      virtual FUNC(void, FR_CODE) ControllerInit            (void) = 0;        \
      virtual FUNC(void, FR_CODE) SendMTS                   (void) = 0;        \
      virtual FUNC(void, FR_CODE) StopMTS                   (void) = 0;        \
      virtual FUNC(void, FR_CODE) CheckMTS                  (void) = 0;        \
      virtual FUNC(void, FR_CODE) StartServiceCommunication        (void) = 0;        \
      virtual FUNC(void, FR_CODE) AllowColdStart            (void) = 0;        \
      virtual FUNC(void, FR_CODE) HaltServiceCommunication         (void) = 0;        \
      virtual FUNC(void, FR_CODE) AbortServiceCommunication        (void) = 0;        \
      virtual FUNC(void, FR_CODE) SendWUP                   (void) = 0;        \
      virtual FUNC(void, FR_CODE) SetWakeupChannel          (void) = 0;        \
      virtual FUNC(void, FR_CODE) SetExtSync                (void) = 0;        \
      virtual FUNC(void, FR_CODE) GetSyncState              (void) = 0;        \
      virtual FUNC(void, FR_CODE) GetPOCStatus              (void) = 0;        \
      virtual FUNC(void, FR_CODE) TransmitTxLPdu            (void) = 0;        \
      virtual FUNC(void, FR_CODE) ReceiveRxLPdu             (void) = 0;        \
      virtual FUNC(void, FR_CODE) CheckTxLPduStatus         (void) = 0;        \
      virtual FUNC(void, FR_CODE) PrepareLPdu               (void) = 0;        \
      virtual FUNC(void, FR_CODE) GetGlobalTime             (void) = 0;        \
      virtual FUNC(void, FR_CODE) GetServiceNmVector               (void) = 0;        \
      virtual FUNC(void, FR_CODE) SetAbsoluteTimer          (void) = 0;        \
      virtual FUNC(void, FR_CODE) SetRelativeTimer          (void) = 0;        \
      virtual FUNC(void, FR_CODE) McalCancelAbsoluteTimer       (void) = 0;        \
      virtual FUNC(void, FR_CODE) McalCancelRelativeTimer       (void) = 0;        \
      virtual FUNC(void, FR_CODE) EnableAbsoluteTimerIRQ    (void) = 0;        \
      virtual FUNC(void, FR_CODE) EnableRelativeTimerIRQ    (void) = 0;        \
      virtual FUNC(void, FR_CODE) AckAbsoluteTimerIRQ       (void) = 0;        \
      virtual FUNC(void, FR_CODE) AckRelativeTimerIRQ       (void) = 0;        \
      virtual FUNC(void, FR_CODE) DisableAbsoluteTimerIRQ   (void) = 0;        \
      virtual FUNC(void, FR_CODE) DisableRelativeTimerIRQ   (void) = 0;        \
      virtual FUNC(void, FR_CODE) GetAbsoluteTimerIRQStatus (void) = 0;        \
      virtual FUNC(void, FR_CODE) GetRelativeTimerIRQStatus (void) = 0;        \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalFr_Functionality{
   public:
      FR_CORE_FUNCTIONALITIES_VIRTUAL
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

