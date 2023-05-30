#pragma once
/******************************************************************************/
/* File   : pmu.hpp                                                           */
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

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PMU_RESET_STS_POR                                                (0x80u)
#define PMU_RESET_STS_PIN                                                (0x40u)
#define PMU_RESET_STS_WDT1                                               (0x20u)
#define PMU_RESET_STS_ClkWDT                                             (0x10u)
#define PMU_RESET_STS_LPR                                                (0x08u)
#define PMU_RESET_STS_SLEEP                                              (0x04u)
#define PMU_RESET_STS_WAKE                                               (0x02u)
#define PMU_RESET_STS_SYS_FAIL                                           (0x01u)
#define PMU_VDDEXT_STABLE                                                (0x80u)
#define PMU_VDDEXT_OK                                                    (0x40u)
#define PMU_VDDEXT_OVERLOAD                                              (0x20u)
#define PMU_VDDEXT_OVERVOLT                                              (0x10u)
#define PMU_VDDEXT_SHORT                                                 (0x08u)
#define PMU_VDDEXT_IE                                                    (0x04u)
#define PMU_VDDEXT_CYC_EN                                                (0x02u)
#define PMU_VDDEXT_ENABLE                                                (0x01u)

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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void  PMU_Init                                                    (void);
extern uint8 PMU_Get_Reset_Status                                        (void);
extern void  PMU_Clear_Reset_Status                                      (void);
extern uint8 PMU_VDDEXT_Off                                              (void);
extern void  PMU_VDDEXT_Short_Clr                                        (void);
extern void  PMU_VDDEXT_Set                                    (uint8 FlagMask);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

