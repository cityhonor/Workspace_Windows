/******************************************************************************/
/* File   : CfgSwcServiceEcuM.cpp                                             */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgSwcServiceEcuM.hpp"

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
const CfgSwcServiceEcuM_tst CfgSwcServiceEcuM = {
      {0, 0, 0, {0, 0, 0, 0, 0, 0}} //TBD: ???
   ,  (const CfgEcuabCanIf_tst*)      &CfgEcuabCanIf
   ,  (const CfgSwcServiceCanSm_tst*) NULL_PTR //TBD: &CfgSwcServiceCanSm
   ,  (const CfgSwcServiceCanTp_tst*) NULL_PTR //TBD: &CfgSwcServiceCanTp
   ,  (const CfgSwcServiceCom_tst*)   NULL_PTR //TBD: &CfgSwcServiceCom
   ,  (const CfgSwcServiceComM_tst*)  NULL_PTR //TBD: &CfgSwcServiceComM
   ,  (const CfgSwcServiceDcm_tst*)   &CfgSwcServiceDcm
   ,  (const CfgSwcServicePduR_tst*)  NULL_PTR //TBD: &CfgSwcServicePduR
};

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

