#pragma once
/******************************************************************************/
/* File   : McalMcu_core.hpp                                                      */
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
#include "CompilerCfg_McalMcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCU_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCU_CODE) InitRamSection     (void);                  \
              FUNC(void, MCU_CODE) InitClock          (void);                  \
              FUNC(void, MCU_CODE) DistributePllClock (void);                  \
              FUNC(void, MCU_CODE) GetPllStatus       (void);                  \
              FUNC(void, MCU_CODE) GetResetReason     (void);                  \
              FUNC(void, MCU_CODE) GetResetRawValue   (void);                  \
              FUNC(void, MCU_CODE) PerformReset       (void);                  \
              FUNC(void, MCU_CODE) SetMode            (void);                  \
              FUNC(void, MCU_CODE) GetRamState        (void);                  \

#define MCU_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCU_CODE) InitRamSection     (void) = 0;              \
      virtual FUNC(void, MCU_CODE) InitClock          (void) = 0;              \
      virtual FUNC(void, MCU_CODE) DistributePllClock (void) = 0;              \
      virtual FUNC(void, MCU_CODE) GetPllStatus       (void) = 0;              \
      virtual FUNC(void, MCU_CODE) GetResetReason     (void) = 0;              \
      virtual FUNC(void, MCU_CODE) GetResetRawValue   (void) = 0;              \
      virtual FUNC(void, MCU_CODE) PerformReset       (void) = 0;              \
      virtual FUNC(void, MCU_CODE) SetMode            (void) = 0;              \
      virtual FUNC(void, MCU_CODE) GetRamState        (void) = 0;              \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalMcu_Functionality{
   public:
      MCU_CORE_FUNCTIONALITIES_VIRTUAL
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

