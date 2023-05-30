#pragma once
/******************************************************************************/
/* File   : EcuabLinIf_core.hpp                                                    */
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
#include "CompilerCfg_EcuabLinIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LINIF_CORE_FUNCTIONALITIES                                             \
              FUNC(void, LINIF_CODE) Transmit             (void);              \
              FUNC(void, LINIF_CODE) ScheduleRequest      (void);              \
              FUNC(void, LINIF_CODE) GoToSleep            (void);              \
              FUNC(void, LINIF_CODE) Wakeup               (void);              \
              FUNC(void, LINIF_CODE) GetTrcvMode          (void);              \
              FUNC(void, LINIF_CODE) SetTrcvMode          (void);              \
              FUNC(void, LINIF_CODE) GetTrcvWakeupReason  (void);              \
              FUNC(void, LINIF_CODE) SetTrcvWakeupMode    (void);              \
              FUNC(void, LINIF_CODE) McalCancelTransmit       (void);              \
              FUNC(void, LINIF_CODE) CheckWakeup          (void);              \
              FUNC(void, LINIF_CODE) CbWakeupConfirmation (void);              \

#define LINIF_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, LINIF_CODE) Transmit             (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) ScheduleRequest      (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) GoToSleep            (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) Wakeup               (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) GetTrcvMode          (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) SetTrcvMode          (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) GetTrcvWakeupReason  (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) SetTrcvWakeupMode    (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) McalCancelTransmit       (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) CheckWakeup          (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) CbWakeupConfirmation (void) = 0;          \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabLinIf_Functionality{
   public:
      LINIF_CORE_FUNCTIONALITIES_VIRTUAL
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

