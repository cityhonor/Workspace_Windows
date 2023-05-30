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
      CfgMcalAdc_Type            CfgMcalAdc;
      CfgServiceBswM_Type           CfgServiceBswM;
      CfgMcalCan_Type            CfgMcalCan;
      CfgEcuabCanIf_Type          CfgEcuabCanIf;
      CfgServiceCanNm_Type          CfgServiceCanNm;
      CfgServiceCanSm_Type          CfgServiceCanSm;
      CfgEcuabCanTp_Type          CfgEcuabCanTp;
      CfgServiceCom_Type            CfgServiceCom;
      CfgServiceComM_Type           CfgServiceComM;
      CfgMcalCry_Type            CfgMcalCry;
      CfgEcuabCryIf_Type          CfgEcuabCryIf;
      CfgServiceCsm_Type            CfgServiceCsm;
      CfgServiceDcm_Type            CfgServiceDcm;
      CfgServiceDem_Type            CfgServiceDem;
      CfgServiceDet_Type            CfgServiceDet;
      CfgMcalDio_Type            CfgMcalDio;
      CfgServiceDlt_Type            CfgServiceDlt;
      CfgEcuabEa_Type             CfgEcuabEa;
      CfgServiceEcuM_Type           CfgServiceEcuM;
      CfgMcalEep_Type            CfgMcalEep;
      CfgMcalEth_Type            CfgMcalEth;
      CfgEcuabEthIf_Type          CfgEcuabEthIf;
      CfgEcuabFee_Type            CfgEcuabFee;
      CfgServiceFiM_Type            CfgServiceFiM;
      CfgMcalFls_Type            CfgMcalFls;
      CfgMcalFr_Type             CfgMcalFr;
      CfgEcuabFrIf_Type           CfgEcuabFrIf;
      CfgServiceFrNm_Type           CfgServiceFrNm;
      CfgEcuabFrTp_Type           CfgEcuabFrTp;
      CfgMcalGpt_Type            CfgMcalGpt;
      CfgMcalIcu_Type            CfgMcalIcu;
      CfgServiceIpduM_Type          CfgServiceIpduM;
      CfgEcuabJ1939Tp_Type        CfgEcuabJ1939Tp;
      CfgMcalLin_Type            CfgMcalLin;
      CfgEcuabLinIf_Type          CfgEcuabLinIf;
      CfgEcuabLinTp_Type          CfgEcuabLinTp;
      CfgMcalMcu_Type            CfgMcalMcu;
      CfgEcuabMemIf_Type          CfgEcuabMemIf;
      CfgServiceNm_Type             CfgServiceNm;
      CfgServiceNvM_Type            CfgServiceNvM;
      CfgMcalOcu_Type            CfgMcalOcu;
      CfgServiceOs_Type             CfgServiceOs;
      CfgMcalPort_Type           CfgMcalPort;
      CfgMcalPwm_Type            CfgMcalPwm;
      CfgProjectARA_Type            CfgProjectARA;
      CfgServiceSchM_Type           CfgServiceSchM;
      CfgServiceSecOC_Type          CfgServiceSecOC;
      CfgServiceSokFm_Type          CfgServiceSokFm;
      CfgMcalSpi_Type            CfgMcalSpi;
      CfgServiceStartUp_Type        CfgServiceStartUp;
      CfgServiceStbM_Type           CfgServiceStbM;
      CfgApplSwcFoc_Type     CfgApplSwcFoc;
      CfgServiceSwcEcuM_Type CfgServiceSwcEcuM;
      CfgServiceSwcOs_Type   CfgServiceSwcOs;
      CfgServiceVkms_Type           CfgServiceVkms;
      CfgMcalWdg_Type            CfgMcalWdg;
      CfgEcuabWdgIf_Type          CfgEcuabWdgIf;
      CfgServiceWdgM_Type           CfgServiceWdgM;

      CfgServicePduR_Type           CfgServicePduR;
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

