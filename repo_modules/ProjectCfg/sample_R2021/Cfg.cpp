/******************************************************************************/
/* File   : Cfg.cpp                                                           */
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
#include "Cfg.hpp"
#include "infCfg_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PBcfgGen_DefaultInit                                                   \
      {McalAdc_DevErrorDetect,            {CFGADC_AR_RELEASE_VERSION_MAJOR,            CFGADC_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceBswM_DevErrorDetect,           {CFGBSWM_AR_RELEASE_VERSION_MAJOR,           CFGBSWM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalCan_DevErrorDetect,            {CFGCAN_AR_RELEASE_VERSION_MAJOR,            CFGCAN_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabCanIf_DevErrorDetect,          {CFGCANIF_AR_RELEASE_VERSION_MAJOR,          CFGCANIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceCanNm_DevErrorDetect,          {CFGCANNM_AR_RELEASE_VERSION_MAJOR,          CFGCANNM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceCanSm_DevErrorDetect,          {CFGCANSM_AR_RELEASE_VERSION_MAJOR,          CFGCANSM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabCanTp_DevErrorDetect,          {CFGCANTP_AR_RELEASE_VERSION_MAJOR,          CFGCANTP_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceCom_DevErrorDetect,            {CFGCOM_AR_RELEASE_VERSION_MAJOR,            CFGCOM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceComM_DevErrorDetect,           {CFGCOMM_AR_RELEASE_VERSION_MAJOR,           CFGCOMM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalCry_DevErrorDetect,            {CFGCRY_AR_RELEASE_VERSION_MAJOR,            CFGCRY_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabCryIf_DevErrorDetect,          {CFGCRYIF_AR_RELEASE_VERSION_MAJOR,          CFGCRYIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceCsm_DevErrorDetect,            {CFGCSM_AR_RELEASE_VERSION_MAJOR,            CFGCSM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceDcm_DevErrorDetect,            {CFGDCM_AR_RELEASE_VERSION_MAJOR,            CFGDCM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceDem_DevErrorDetect,            {CFGDEM_AR_RELEASE_VERSION_MAJOR,            CFGDEM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceDet_DevErrorDetect,            {CFGDET_AR_RELEASE_VERSION_MAJOR,            CFGDET_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalDio_DevErrorDetect,            {CFGDIO_AR_RELEASE_VERSION_MAJOR,            CFGDIO_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceDlt_DevErrorDetect,            {CFGDLT_AR_RELEASE_VERSION_MAJOR,            CFGDLT_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabEa_DevErrorDetect,             {CFGEA_AR_RELEASE_VERSION_MAJOR,             CFGEA_AR_RELEASE_VERSION_MINOR,             0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceEcuM_DevErrorDetect,           {CFGECUM_AR_RELEASE_VERSION_MAJOR,           CFGECUM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalEep_DevErrorDetect,            {CFGEEP_AR_RELEASE_VERSION_MAJOR,            CFGEEP_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalEth_DevErrorDetect,            {CFGETH_AR_RELEASE_VERSION_MAJOR,            CFGETH_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabEthIf_DevErrorDetect,          {CFGETHIF_AR_RELEASE_VERSION_MAJOR,          CFGETHIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabFee_DevErrorDetect,            {CFGFEE_AR_RELEASE_VERSION_MAJOR,            CFGFEE_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceFiM_DevErrorDetect,            {CFGFIM_AR_RELEASE_VERSION_MAJOR,            CFGFIM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalFls_DevErrorDetect,            {CFGFLS_AR_RELEASE_VERSION_MAJOR,            CFGFLS_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalFr_DevErrorDetect,             {CFGFR_AR_RELEASE_VERSION_MAJOR,             CFGFR_AR_RELEASE_VERSION_MINOR,             0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabFrIf_DevErrorDetect,           {CFGFRIF_AR_RELEASE_VERSION_MAJOR,           CFGFRIF_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceFrNm_DevErrorDetect,           {CFGFRNM_AR_RELEASE_VERSION_MAJOR,           CFGFRNM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabFrTp_DevErrorDetect,           {CFGFRTP_AR_RELEASE_VERSION_MAJOR,           CFGFRTP_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalGpt_DevErrorDetect,            {CFGGPT_AR_RELEASE_VERSION_MAJOR,            CFGGPT_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalIcu_DevErrorDetect,            {CFGICU_AR_RELEASE_VERSION_MAJOR,            CFGICU_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceIpduM_DevErrorDetect,          {CFGIPDUM_AR_RELEASE_VERSION_MAJOR,          CFGIPDUM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabJ1939Tp_DevErrorDetect,        {CFGJ1939TP_AR_RELEASE_VERSION_MAJOR,        CFGJ1939TP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalLin_DevErrorDetect,            {CFGLIN_AR_RELEASE_VERSION_MAJOR,            CFGLIN_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabLinIf_DevErrorDetect,          {CFGLINIF_AR_RELEASE_VERSION_MAJOR,          CFGLINIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabLinTp_DevErrorDetect,          {CFGLINTP_AR_RELEASE_VERSION_MAJOR,          CFGLINTP_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalMcu_DevErrorDetect,            {CFGMCU_AR_RELEASE_VERSION_MAJOR,            CFGMCU_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabMemIf_DevErrorDetect,          {CFGMEMIF_AR_RELEASE_VERSION_MAJOR,          CFGMEMIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceNm_DevErrorDetect,             {CFGNM_AR_RELEASE_VERSION_MAJOR,             CFGNM_AR_RELEASE_VERSION_MINOR,             0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceNvM_DevErrorDetect,            {CFGNVM_AR_RELEASE_VERSION_MAJOR,            CFGNVM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalOcu_DevErrorDetect,            {CFGOCU_AR_RELEASE_VERSION_MAJOR,            CFGOCU_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceOs_DevErrorDetect,             {CFGOS_AR_RELEASE_VERSION_MAJOR,             CFGOS_AR_RELEASE_VERSION_MINOR,             0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalPort_DevErrorDetect,           {CFGPORT_AR_RELEASE_VERSION_MAJOR,           CFGPORT_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalPwm_DevErrorDetect,            {CFGPWM_AR_RELEASE_VERSION_MAJOR,            CFGPWM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ProjectARA_DevErrorDetect,            {CFGRTE_AR_RELEASE_VERSION_MAJOR,            CFGRTE_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceSchM_DevErrorDetect,           {CFGSCHM_AR_RELEASE_VERSION_MAJOR,           CFGSCHM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceSecOC_DevErrorDetect,          {CFGSECOC_AR_RELEASE_VERSION_MAJOR,          CFGSECOC_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceSokFm_DevErrorDetect,          {CFGSOKFM_AR_RELEASE_VERSION_MAJOR,          CFGSOKFM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalSpi_DevErrorDetect,            {CFGSPI_AR_RELEASE_VERSION_MAJOR,            CFGSPI_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceStartUp_DevErrorDetect,        {CFGSTARTUP_AR_RELEASE_VERSION_MAJOR,        CFGSTARTUP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceStbM_DevErrorDetect,           {CFGSTBM_AR_RELEASE_VERSION_MAJOR,           CFGSTBM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ApplSwcFoc_DevErrorDetect,     {CFGSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR,     CFGSWCAPPLFOC_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceSwcEcuM_DevErrorDetect, {CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR, CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceSwcOs_DevErrorDetect,   {CFGSWCSERVICEOS_AR_RELEASE_VERSION_MAJOR,   CFGSWCSERVICEOS_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceVkms_DevErrorDetect,           {CFGVKMS_AR_RELEASE_VERSION_MAJOR,           CFGVKMS_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalWdg_DevErrorDetect,            {CFGWDG_AR_RELEASE_VERSION_MAJOR,            CFGWDG_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabWdgIf_DevErrorDetect,          {CFGWDGIF_AR_RELEASE_VERSION_MAJOR,          CFGWDGIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceWdgM_DevErrorDetect,           {CFGWDGM_AR_RELEASE_VERSION_MAJOR,           CFGWDGM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
                                                                               \
   ,  {                                                                        \
            ServicePduR_DevErrorDetect                                                \
         ,  {                                                                  \
                  CFGPDUR_AR_RELEASE_VERSION_MAJOR                             \
               ,  CFGPDUR_AR_RELEASE_VERSION_MINOR                             \
               ,  0x00                                                         \
               ,  0xFF                                                         \
               ,  0x01                                                         \
               ,  '0'                                                          \
               ,  '1'                                                          \
               ,  '0'                                                          \
            }                                                                  \
         ,  {                                                                  \
                  1                                                            \
               ,  {                                                            \
                        &ServicePduRClient_ServiceDcm                                        \
/*                   ,  &ServicePduRClient_ServiceCom */                                     \
                  }                                                            \
               ,  0                                                            \
               ,  0                                                            \
            }                                                                  \
      }                                                                        \
                                                                               \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
TypeClient ServicePduRClient_ServiceDcm; //TBD:  = {0}; actual realization

const CfgGen_Type PBcfgGen_ROM = {
   PBcfgGen_DefaultInit
};

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
const CfgGen_Type CfgGen_McalFls = {
   PBcfgGen_DefaultInit
};

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
CfgGen_Type CfgGen_ServiceNvM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

