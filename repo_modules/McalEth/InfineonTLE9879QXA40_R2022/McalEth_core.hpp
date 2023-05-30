#pragma once
/******************************************************************************/
/* File   : McalEth_core.hpp                                                      */
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
#include "CompilerCfg_McalEth.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALETH_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALETH_CODE) GetControllerMode       (void);             \
              FUNC(void, MCALETH_CODE) SetControllerMode       (void);             \
              FUNC(void, MCALETH_CODE) GetPhysAddr             (void);             \
              FUNC(void, MCALETH_CODE) SetPhysAddr             (void);             \
              FUNC(void, MCALETH_CODE) UpdatePhysAddrFilter    (void);             \
              FUNC(void, MCALETH_CODE) ReadMii                 (void);             \
              FUNC(void, MCALETH_CODE) WriteMii                (void);             \
              FUNC(void, MCALETH_CODE) GetCounterValues        (void);             \
              FUNC(void, MCALETH_CODE) GetRxStatus             (void);             \
              FUNC(void, MCALETH_CODE) GetTxStatus             (void);             \
              FUNC(void, MCALETH_CODE) GetTxErrorCounterValues (void);             \
              FUNC(void, MCALETH_CODE) GetCurrentTime          (void);             \
              FUNC(void, MCALETH_CODE) EnableEgressTimeStamp   (void);             \
              FUNC(void, MCALETH_CODE) GetEgressTimeStamp      (void);             \
              FUNC(void, MCALETH_CODE) GetIngressTimeStamp     (void);             \
              FUNC(void, MCALETH_CODE) ProvideTxBuffer         (void);             \
              FUNC(void, MCALETH_CODE) Transit                 (void);             \
              FUNC(void, MCALETH_CODE) Recive                  (void);             \
              FUNC(void, MCALETH_CODE) TxConfirmation          (void);             \

#define MCALETH_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALETH_CODE) GetControllerMode       (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) SetControllerMode       (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetPhysAddr             (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) SetPhysAddr             (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) UpdatePhysAddrFilter    (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) ReadMii                 (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) WriteMii                (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetCounterValues        (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetRxStatus             (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetTxStatus             (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetTxErrorCounterValues (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetCurrentTime          (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) EnableEgressTimeStamp   (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetEgressTimeStamp      (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetIngressTimeStamp     (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) ProvideTxBuffer         (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) Transit                 (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) Recive                  (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) TxConfirmation          (void) = 0;         \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalEth_Functionality{
   public:
      MCALETH_CORE_FUNCTIONALITIES_VIRTUAL
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

