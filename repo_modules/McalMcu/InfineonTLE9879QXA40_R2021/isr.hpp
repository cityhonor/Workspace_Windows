#pragma once
/******************************************************************************/
/* File   : Template.hpp                                                      */
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
extern void GPT1_IRQHandler                                              (void);
extern void GPT2_IRQHandler                                              (void);
extern void ADC2_IRQHandler                                              (void);
extern void ADC1_IRQHandler                                              (void);
extern void CCU6SR0_IRQHandler                                           (void);
extern void CCU6SR1_IRQHandler                                           (void);
extern void CCU6SR2_IRQHandler                                           (void);
extern void CCU6SR3_IRQHandler                                           (void);
extern void SSC1_IRQHandler                                              (void);
extern void SSC2_IRQHandler                                              (void);
extern void UART1_IRQHandler                                             (void);
extern void UART2_IRQHandler                                             (void);
extern void EXINT0_IRQHandler                                            (void);
extern void EXINT1_IRQHandler                                            (void);
extern void BDRV_IRQHandler                                              (void);
extern void DMA_IRQHandler                                               (void);
extern void NMI_Handler                                                  (void);
extern void HardFault_Handler                                            (void);
extern void MemManage_Handler                                            (void);
extern void BusFault_Handler                                             (void);
extern void UsageFault_Handler                                           (void);
extern void SysTick_Handler                                              (void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

