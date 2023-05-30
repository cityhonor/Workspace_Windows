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
#define DMA_XML_VERSION                                                  (20207)
#define DMA_CFG                                                            (0x0)
#define DMA_CH0_DST                                   enter destination location
#define DMA_CH0_DST_EXT                                                    (0x0)
#define DMA_CH0_DST_PTR_OFFS                                               (0x0)
#define DMA_CH0_INC                                                        (0x0)
#define DMA_CH0_NoOfTrans                                                  (0x1)
#define DMA_CH0_SIZE                                                       (0x1)
#define DMA_CH0_SRC                                           ADC1.RES_OUT0.reg
#define DMA_CH0_SRC_ADC1                                                   (0x0)
#define DMA_CH0_SRC_EXT                                                    (0x0)
#define DMA_CH0_SRC_PTR_OFFS                                               (0x0)
#define DMA_CH0_SRC_SEL                                                    (0x0)
#define DMA_CH0_TASK_NoOfTasks                                             (0x0)
#define DMA_CH0_TASK_SRC                                  enter source reference
#define DMA_CH0_TRANS_MODE                                                 (0x0)
#define DMA_CH10_DST                                 enter destination reference
#define DMA_CH10_DST_EXT                                                   (0x0)
#define DMA_CH10_DST_PTR_OFFS                                              (0x0)
#define DMA_CH10_INC                                                       (0x0)
#define DMA_CH10_NoOfTrans                                                 (0x1)
#define DMA_CH10_SIZE                                                      (0x1)
#define DMA_CH10_SRC                                          ADC1.RES_OUT6.reg
#define DMA_CH10_SRC_EXT                                                   (0x0)
#define DMA_CH10_SRC_PTR_OFFS                                              (0x0)
#define DMA_CH10_SRC_SEL                                                   (0x0)
#define DMA_CH10_TASK_NoOfTasks                                            (0x0)
#define DMA_CH10_TASK_SRC                                 enter source reference
#define DMA_CH10_TRANS_MODE                                                (0x0)
#define DMA_CH11_DST                                 enter destination reference
#define DMA_CH11_DST_EXT                                                   (0x0)
#define DMA_CH11_DST_PTR_OFFS                                              (0x0)
#define DMA_CH11_INC                                                       (0x0)
#define DMA_CH11_NoOfTrans                                                 (0x1)
#define DMA_CH11_SIZE                                                      (0x1)
#define DMA_CH11_SRC                                      enter source reference
#define DMA_CH11_SRC_EXT                                                   (0x0)
#define DMA_CH11_SRC_PTR_OFFS                                              (0x0)
#define DMA_CH11_TASK_NoOfTasks                                            (0x0)
#define DMA_CH11_TASK_SRC                                 enter source reference
#define DMA_CH11_TRANS_MODE                                                (0x0)
#define DMA_CH12_DST                                 enter destination reference
#define DMA_CH12_DST_EXT                                                   (0x0)
#define DMA_CH12_DST_PTR_OFFS                                              (0x0)
#define DMA_CH12_INC                                                       (0x0)
#define DMA_CH12_NoOfTrans                                                 (0x1)
#define DMA_CH12_SIZE                                                      (0x1)
#define DMA_CH12_SRC                                      enter source reference
#define DMA_CH12_SRC_EXT                                                   (0x0)
#define DMA_CH12_SRC_PTR_OFFS                                              (0x0)
#define DMA_CH12_TASK_NoOfTasks                                            (0x0)
#define DMA_CH12_TASK_SRC                                 enter source reference
#define DMA_CH12_TRANS_MODE                                                (0x0)
#define DMA_CH1_DST                                  enter destination reference
#define DMA_CH1_DST_EXT                                                    (0x0)
#define DMA_CH1_DST_PTR_OFFS                                               (0x0)
#define DMA_CH1_INC                                                        (0x0)
#define DMA_CH1_NoOfTrans                                                  (0x1)
#define DMA_CH1_SIZE                                                       (0x1)
#define DMA_CH1_SRC                                           ADC1.RES_OUT0.reg
#define DMA_CH1_SRC_ADC1                                                   (0x0)
#define DMA_CH1_SRC_EXT                                                    (0x0)
#define DMA_CH1_SRC_PTR_OFFS                                               (0x0)
#define DMA_CH1_SRC_SEL                                                    (0x0)
#define DMA_CH1_TASK_NoOfTasks                                             (0x0)
#define DMA_CH1_TASK_SRC                                  enter source reference
#define DMA_CH1_TRANS_MODE                                                 (0x0)
#define DMA_CH2_DST                                                 SSC1->TB.reg
#define DMA_CH2_DST_EXT                                                    (0x0)
#define DMA_CH2_DST_PTR_OFFS                                               (0x0)
#define DMA_CH2_DST_SEL                                                    (0x0)
#define DMA_CH2_INC                                                        (0x0)
#define DMA_CH2_NoOfTrans                                                  (0x1)
#define DMA_CH2_SIZE                                                       (0x1)
#define DMA_CH2_SRC                                       enter source reference
#define DMA_CH2_SRC_EXT                                                    (0x0)
#define DMA_CH2_SRC_PTR_OFFS                                               (0x0)
#define DMA_CH2_TASK_NoOfTasks                                             (0x0)
#define DMA_CH2_TASK_SRC                                  enter source reference
#define DMA_CH2_TRANS_MODE                                                 (0x0)
#define DMA_CH3_DST                                  enter destination reference
#define DMA_CH3_DST_EXT                                                    (0x0)
#define DMA_CH3_DST_PTR_OFFS                                               (0x0)
#define DMA_CH3_INC                                                        (0x0)
#define DMA_CH3_NoOfTrans                                                  (0x1)
#define DMA_CH3_SIZE                                                       (0x1)
#define DMA_CH3_SRC                                                 SSC1->RB.reg
#define DMA_CH3_SRC_EXT                                                    (0x0)
#define DMA_CH3_SRC_PTR_OFFS                                               (0x0)
#define DMA_CH3_SRC_SEL                                                    (0x0)
#define DMA_CH3_TASK_NoOfTasks                                             (0x0)
#define DMA_CH3_TASK_SRC                                  enter source reference
#define DMA_CH3_TRANS_MODE                                                 (0x0)
#define DMA_CH4_DST                                  enter destination reference
#define DMA_CH4_DST_EXT                                                    (0x0)
#define DMA_CH4_DST_PTR_OFFS                                               (0x0)
#define DMA_CH4_INC                                                        (0x0)
#define DMA_CH4_NoOfTrans                                                  (0x1)
#define DMA_CH4_SIZE                                                       (0x1)
#define DMA_CH4_SRC                                           ADC1.RES_OUT0.reg
#define DMA_CH4_SRC_EXT                                                    (0x0)
#define DMA_CH4_SRC_PTR_OFFS                                               (0x0)
#define DMA_CH4_SRC_SEL                                                    (0x0)
#define DMA_CH4_TASK_NoOfTasks                                             (0x0)
#define DMA_CH4_TASK_SRC                                  enter source reference
#define DMA_CH4_TRANS_MODE                                                 (0x0)
#define DMA_CH5_DST                                  enter destination reference
#define DMA_CH5_DST_EXT                                                    (0x0)
#define DMA_CH5_DST_PTR_OFFS                                               (0x0)
#define DMA_CH5_INC                                                        (0x0)
#define DMA_CH5_NoOfTrans                                                  (0x1)
#define DMA_CH5_SIZE                                                       (0x1)
#define DMA_CH5_SRC                                           ADC1.RES_OUT1.reg
#define DMA_CH5_SRC_EXT                                                    (0x0)
#define DMA_CH5_SRC_PTR_OFFS                                               (0x0)
#define DMA_CH5_SRC_SEL                                                    (0x0)
#define DMA_CH5_TASK_NoOfTasks                                             (0x0)
#define DMA_CH5_TASK_SRC                                  enter source reference
#define DMA_CH5_TRANS_MODE                                                 (0x0)
#define DMA_CH6_DST                                  enter destination reference
#define DMA_CH6_DST_EXT                                                    (0x0)
#define DMA_CH6_DST_PTR_OFFS                                               (0x0)
#define DMA_CH6_INC                                                        (0x0)
#define DMA_CH6_NoOfTrans                                                  (0x1)
#define DMA_CH6_SIZE                                                       (0x1)
#define DMA_CH6_SRC                                           ADC1.RES_OUT2.reg
#define DMA_CH6_SRC_EXT                                                    (0x0)
#define DMA_CH6_SRC_PTR_OFFS                                               (0x0)
#define DMA_CH6_SRC_SEL                                                    (0x0)
#define DMA_CH6_TASK_NoOfTasks                                             (0x0)
#define DMA_CH6_TASK_SRC                                  enter source reference
#define DMA_CH6_TRANS_MODE                                                 (0x0)
#define DMA_CH7_DST                                  enter destination reference
#define DMA_CH7_DST_EXT                                                    (0x0)
#define DMA_CH7_DST_PTR_OFFS                                               (0x0)
#define DMA_CH7_INC                                                        (0x0)
#define DMA_CH7_NoOfTrans                                                  (0x1)
#define DMA_CH7_SIZE                                                       (0x1)
#define DMA_CH7_SRC                                           ADC1.RES_OUT3.reg
#define DMA_CH7_SRC_EXT                                                    (0x0)
#define DMA_CH7_SRC_PTR_OFFS                                               (0x0)
#define DMA_CH7_SRC_SEL                                                    (0x0)
#define DMA_CH7_TASK_NoOfTasks                                             (0x0)
#define DMA_CH7_TASK_SRC                                  enter source reference
#define DMA_CH7_TRANS_MODE                                                 (0x0)
#define DMA_CH8_DST                                  enter destination reference
#define DMA_CH8_DST_EXT                                                    (0x0)
#define DMA_CH8_DST_PTR_OFFS                                               (0x0)
#define DMA_CH8_INC                                                        (0x0)
#define DMA_CH8_NoOfTrans                                                  (0x1)
#define DMA_CH8_SIZE                                                       (0x1)
#define DMA_CH8_SRC                                           ADC1.RES_OUT4.reg
#define DMA_CH8_SRC_EXT                                                    (0x0)
#define DMA_CH8_SRC_PTR_OFFS                                               (0x0)
#define DMA_CH8_SRC_SEL                                                    (0x0)
#define DMA_CH8_TASK_NoOfTasks                                             (0x0)
#define DMA_CH8_TASK_SRC                                  enter source reference
#define DMA_CH8_TRANS_MODE                                                 (0x0)
#define DMA_CH9_DST                                  enter destination reference
#define DMA_CH9_DST_EXT                                                    (0x0)
#define DMA_CH9_DST_PTR_OFFS                                               (0x0)
#define DMA_CH9_INC                                                        (0x0)
#define DMA_CH9_NoOfTrans                                                  (0x1)
#define DMA_CH9_SIZE                                                       (0x1)
#define DMA_CH9_SRC                                           ADC1.RES_OUT5.reg
#define DMA_CH9_SRC_EXT                                                    (0x0)
#define DMA_CH9_SRC_PTR_OFFS                                               (0x0)
#define DMA_CH9_SRC_SEL                                                    (0x0)
#define DMA_CH9_TASK_NoOfTasks                                             (0x0)
#define DMA_CH9_TASK_SRC                                  enter source reference
#define DMA_CH9_TRANS_MODE                                                 (0x0)
#define DMA_EN                                                             (0x0)
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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

