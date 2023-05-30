#pragma once
/******************************************************************************/
/* File   : Cfg.hpp                                                           */
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
#include "CfgApplSwcFoc.hpp"
#include "CfgProjectARA.hpp"
#include "CfgServiceBswM.hpp"
#include "CfgServiceCanNm.hpp"
#include "CfgServiceCanSm.hpp"
#include "CfgServiceCom.hpp"
#include "CfgServiceComM.hpp"
#include "CfgServiceCsm.hpp"
#include "CfgServiceDcm.hpp"
#include "CfgServiceDem.hpp"
#include "CfgServiceDet.hpp"
#include "CfgServiceDlt.hpp"
#include "CfgServiceEcuM.hpp"
#include "CfgServiceFiM.hpp"
#include "CfgServiceFrNm.hpp"
#include "CfgServiceIpduM.hpp"
#include "CfgServiceNm.hpp"
#include "CfgServiceNvM.hpp"
#include "CfgServiceOs.hpp"
#include "CfgServicePduR.hpp"
#include "CfgServiceSchM.hpp"
#include "CfgServiceSecOC.hpp"
#include "CfgServiceSokFm.hpp"
#include "CfgServiceStartUp.hpp"
#include "CfgServiceStbM.hpp"
#include "CfgServiceSwcEcuM.hpp"
#include "CfgServiceSwcOs.hpp"
#include "CfgServiceVkms.hpp"
#include "CfgServiceWdgM.hpp"
#include "CfgEcuabCanIf.hpp"
#include "CfgEcuabCanTp.hpp"
#include "CfgEcuabCryIf.hpp"
#include "CfgEcuabEa.hpp"
#include "CfgEcuabEthIf.hpp"
#include "CfgEcuabFee.hpp"
#include "CfgEcuabFrIf.hpp"
#include "CfgEcuabFrTp.hpp"
#include "CfgEcuabJ1939Tp.hpp"
#include "CfgEcuabLinIf.hpp"
#include "CfgEcuabLinTp.hpp"
#include "CfgEcuabMemIf.hpp"
#include "CfgEcuabWdgIf.hpp"
#include "CfgMcalAdc.hpp"
#include "CfgMcalCan.hpp"
#include "CfgMcalCry.hpp"
#include "CfgMcalDio.hpp"
#include "CfgMcalEep.hpp"
#include "CfgMcalEth.hpp"
#include "CfgMcalFls.hpp"
#include "CfgMcalFr.hpp"
#include "CfgMcalGpt.hpp"
#include "CfgMcalIcu.hpp"
#include "CfgMcalLin.hpp"
#include "CfgMcalMcu.hpp"
#include "CfgMcalOcu.hpp"
#include "CfgMcalPort.hpp"
#include "CfgMcalPwm.hpp"
#include "CfgMcalSpi.hpp"
#include "CfgMcalWdg.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class CfgGen_Type{
   public:
      CfgApplSwcFoc_Type         CfgApplSwcFoc;
      CfgProjectARA_Type         CfgProjectARA;
      CfgServiceBswM_Type        CfgServiceBswM;
      CfgServiceCanNm_Type       CfgServiceCanNm;
      CfgServiceCanSm_Type       CfgServiceCanSm;
      CfgServiceCom_Type         CfgServiceCom;
      CfgServiceComM_Type        CfgServiceComM;
      CfgServiceCsm_Type         CfgServiceCsm;
      CfgServiceDcm_Type         CfgServiceDcm;
      CfgServiceDem_Type         CfgServiceDem;
      CfgServiceDet_Type         CfgServiceDet;
      CfgServiceDlt_Type         CfgServiceDlt;
      CfgServiceEcuM_Type        CfgServiceEcuM;
      CfgServiceFiM_Type         CfgServiceFiM;
      CfgServiceFrNm_Type        CfgServiceFrNm;
      CfgServiceIpduM_Type       CfgServiceIpduM;
      CfgServiceNm_Type          CfgServiceNm;
      CfgServiceNvM_Type         CfgServiceNvM;
      CfgServiceOs_Type          CfgServiceOs;
      CfgServicePduR_Type        CfgServicePduR;
      CfgServiceSchM_Type        CfgServiceSchM;
      CfgServiceSecOC_Type       CfgServiceSecOC;
      CfgServiceSokFm_Type       CfgServiceSokFm;
      CfgServiceStartUp_Type     CfgServiceStartUp;
      CfgServiceStbM_Type        CfgServiceStbM;
      CfgServiceSwcEcuM_Type     CfgServiceSwcEcuM;
      CfgServiceSwcOs_Type       CfgServiceSwcOs;
      CfgServiceVkms_Type        CfgServiceVkms;
      CfgServiceWdgM_Type        CfgServiceWdgM;
      CfgEcuabCanIf_Type         CfgEcuabCanIf;
      CfgEcuabCanTp_Type         CfgEcuabCanTp;
      CfgEcuabCryIf_Type         CfgEcuabCryIf;
      CfgEcuabEa_Type            CfgEcuabEa;
      CfgEcuabEthIf_Type         CfgEcuabEthIf;
      CfgEcuabFee_Type           CfgEcuabFee;
      CfgEcuabFrIf_Type          CfgEcuabFrIf;
      CfgEcuabFrTp_Type          CfgEcuabFrTp;
      CfgEcuabJ1939Tp_Type       CfgEcuabJ1939Tp;
      CfgEcuabLinIf_Type         CfgEcuabLinIf;
      CfgEcuabLinTp_Type         CfgEcuabLinTp;
      CfgEcuabMemIf_Type         CfgEcuabMemIf;
      CfgEcuabWdgIf_Type         CfgEcuabWdgIf;
      CfgMcalAdc_Type            CfgMcalAdc;
      CfgMcalCan_Type            CfgMcalCan;
      CfgMcalCry_Type            CfgMcalCry;
      CfgMcalDio_Type            CfgMcalDio;
      CfgMcalEep_Type            CfgMcalEep;
      CfgMcalEth_Type            CfgMcalEth;
      CfgMcalFls_Type            CfgMcalFls;
      CfgMcalFr_Type             CfgMcalFr;
      CfgMcalGpt_Type            CfgMcalGpt;
      CfgMcalIcu_Type            CfgMcalIcu;
      CfgMcalLin_Type            CfgMcalLin;
      CfgMcalMcu_Type            CfgMcalMcu;
      CfgMcalOcu_Type            CfgMcalOcu;
      CfgMcalPort_Type           CfgMcalPort;
      CfgMcalPwm_Type            CfgMcalPwm;
      CfgMcalSpi_Type            CfgMcalSpi;
      CfgMcalWdg_Type            CfgMcalWdg;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const CfgGen_Type PBcfgGen_ROM;
extern const CfgGen_Type   CfgGen_McalFls;
extern       CfgGen_Type   CfgGen_ServiceNvM;

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

