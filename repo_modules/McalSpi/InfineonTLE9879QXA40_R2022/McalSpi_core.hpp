#pragma once
/******************************************************************************/
/* File   : McalSpi_core.hpp                                                      */
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
#include "CompilerCfg_McalSpi.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALSPI_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALSPI_CODE) WriteIB           (void);                   \
              FUNC(void, MCALSPI_CODE) AsyncTransmit     (void);                   \
              FUNC(void, MCALSPI_CODE) ReadIB            (void);                   \
              FUNC(void, MCALSPI_CODE) SetupEB           (void);                   \
              FUNC(void, MCALSPI_CODE) GetStatus         (void);                   \
              FUNC(void, MCALSPI_CODE) GetJobResult      (void);                   \
              FUNC(void, MCALSPI_CODE) GetSequenceResult (void);                   \
              FUNC(void, MCALSPI_CODE) SyncTransmit      (void);                   \
              FUNC(void, MCALSPI_CODE) GetHWUnitStatus   (void);                   \
              FUNC(void, MCALSPI_CODE) McalCancel            (void);                   \
              FUNC(void, MCALSPI_CODE) SetAsyncMode      (void);                   \

#define MCALSPI_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALSPI_CODE) WriteIB           (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) AsyncTransmit     (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) ReadIB            (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) SetupEB           (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) GetStatus         (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) GetJobResult      (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) GetSequenceResult (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) SyncTransmit      (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) GetHWUnitStatus   (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) McalCancel            (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) SetAsyncMode      (void) = 0;               \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalSpi_Functionality{
   public:
      MCALSPI_CORE_FUNCTIONALITIES_VIRTUAL
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

