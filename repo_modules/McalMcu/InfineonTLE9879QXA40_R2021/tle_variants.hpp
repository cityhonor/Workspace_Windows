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
#define TLE9879QXA40

#define TLE98                                                               (98)
#define TLE984                                                             (984)
#define TLE985                                                             (985)
#define TLE986                                                             (986)
#define TLE987                                                             (987)
#define TLE9871                                                           (9871)
#define TLE9873                                                           (9873)
#define TLE9877                                                           (9877)
#define TLE9879                                                           (9879)
#define BGA144                                                               (1)
#define LQFP144                                                              (2)
#define LQFP100                                                              (3)
#define BGA64                                                                (4)
#define LQFP64                                                               (5)
#define VQFN48                                                               (6)
#define TSSOP38                                                              (7)
#define TSSOP28                                                              (8)
#define TSSOP16                                                              (9)
#define VQFN24                                                              (10)
#define VQFN40                                                              (11)
#define TQFP48                                                              (12)
#define UC_FAMILY                                                        TLE98
#define UC_SERIES                                                        TLE987
#define UC_DEVICE                                                        TLE9879
#define UC_PACKAGE                                                        VQFN48
#define UC_FLASH                                                         (128UL)
#define ProgFlashSize                                                 (0x1F000U)
#define RAMSize                                                        (0x1800U)
#define sNADStart                                         ".ARM.__at_0x1101EFFC"

#define ProgFlashStart                                             (0x11000000U)
#define DataFlashStart                          (ProgFlashStart + ProgFlashSize)
#define DataFlashSize                                                  (0x1000U)
#define NACStart                                           (DataFlashStart - 4U)
#define NADStart                                           (DataFlashStart - 2U)
#define RAMStart                                                  (0x18000000UL)

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

