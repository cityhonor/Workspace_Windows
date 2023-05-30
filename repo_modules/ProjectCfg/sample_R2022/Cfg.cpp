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
      {ApplSwcFoc_DevErrorDetect,     {CFGAPPLSWCFOC_AR_RELEASE_VERSION_MAJOR,     CFGAPPLSWCFOC_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ProjectARA_DevErrorDetect,     {CFGRTE_AR_RELEASE_VERSION_MAJOR,            CFGRTE_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceBswM_DevErrorDetect,    {CFGSERVICEBSWM_AR_RELEASE_VERSION_MAJOR,    CFGSERVICEBSWM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceCanNm_DevErrorDetect,   {CFGSERVICECANNM_AR_RELEASE_VERSION_MAJOR,   CFGSERVICECANNM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceCanSm_DevErrorDetect,   {CFGSERVICECANSM_AR_RELEASE_VERSION_MAJOR,   CFGSERVICECANSM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceCom_DevErrorDetect,     {CFGSERVICECOM_AR_RELEASE_VERSION_MAJOR,     CFGSERVICECOM_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceComM_DevErrorDetect,    {CFGSERVICECOMM_AR_RELEASE_VERSION_MAJOR,    CFGSERVICECOMM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceCsm_DevErrorDetect,     {CFGSERVICECSM_AR_RELEASE_VERSION_MAJOR,     CFGSERVICECSM_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceDcm_DevErrorDetect,     {CFGSERVICEDCM_AR_RELEASE_VERSION_MAJOR,     CFGSERVICEDCM_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceDem_DevErrorDetect,     {CFGSERVICEDEM_AR_RELEASE_VERSION_MAJOR,     CFGSERVICEDEM_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceDet_DevErrorDetect,     {CFGSERVICEDET_AR_RELEASE_VERSION_MAJOR,     CFGSERVICEDET_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceDlt_DevErrorDetect,     {CFGSERVICEDLT_AR_RELEASE_VERSION_MAJOR,     CFGSERVICEDLT_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceEcuM_DevErrorDetect,    {CFGSERVICEECUM_AR_RELEASE_VERSION_MAJOR,    CFGSERVICEECUM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceFiM_DevErrorDetect,     {CFGSERVICEFIM_AR_RELEASE_VERSION_MAJOR,     CFGSERVICEFIM_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceFrNm_DevErrorDetect,    {CFGSERVICEFRNM_AR_RELEASE_VERSION_MAJOR,    CFGSERVICEFRNM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceIpduM_DevErrorDetect,   {CFGSERVICEIPDUM_AR_RELEASE_VERSION_MAJOR,   CFGSERVICEIPDUM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceNm_DevErrorDetect,      {CFGSERVICENM_AR_RELEASE_VERSION_MAJOR,      CFGSERVICENM_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceNvM_DevErrorDetect,     {CFGSERVICENVM_AR_RELEASE_VERSION_MAJOR,     CFGSERVICENVM_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceOs_DevErrorDetect,      {CFGSERVICEOS_AR_RELEASE_VERSION_MAJOR,      CFGSERVICEOS_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'}} \
   ,  {                                                                        \
            ServicePduR_DevErrorDetect                                         \
         ,  {                                                                  \
                  CFGSERVICEPDUR_AR_RELEASE_VERSION_MAJOR                      \
               ,  CFGSERVICEPDUR_AR_RELEASE_VERSION_MINOR                      \
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
                        &ServicePduRClient_ServiceDcm                          \
/*                   ,  &ServicePduRClient_ServiceCom */                       \
                  }                                                            \
               ,  0                                                            \
               ,  0                                                            \
            }                                                                  \
      }                                                                        \
   ,  {ServiceSchM_DevErrorDetect,    {CFGSERVICESCHM_AR_RELEASE_VERSION_MAJOR,    CFGSERVICESCHM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceSecOC_DevErrorDetect,   {CFGSERVICESECOC_AR_RELEASE_VERSION_MAJOR,   CFGSERVICESECOC_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceSokFm_DevErrorDetect,   {CFGSERVICESOKFM_AR_RELEASE_VERSION_MAJOR,   CFGSERVICESOKFM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceStartUp_DevErrorDetect, {CFGSERVICESTARTUP_AR_RELEASE_VERSION_MAJOR, CFGSERVICESTARTUP_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceStbM_DevErrorDetect,    {CFGSERVICESTBM_AR_RELEASE_VERSION_MAJOR,    CFGSERVICESTBM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceSwcEcuM_DevErrorDetect, {CFGSERVICESWCECUM_AR_RELEASE_VERSION_MAJOR, CFGSERVICESWCECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceSwcOs_DevErrorDetect,   {CFGSERVICESWCOS_AR_RELEASE_VERSION_MAJOR,   CFGSERVICESWCOS_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceVkms_DevErrorDetect,    {CFGSERVICEVKMS_AR_RELEASE_VERSION_MAJOR,    CFGSERVICEVKMS_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ServiceWdgM_DevErrorDetect,    {CFGSERVICEWDGM_AR_RELEASE_VERSION_MAJOR,    CFGSERVICEWDGM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabCanIf_DevErrorDetect,     {CFGECUABCANIF_AR_RELEASE_VERSION_MAJOR,     CFGECUABCANIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabCanTp_DevErrorDetect,     {CFGECUABCANTP_AR_RELEASE_VERSION_MAJOR,     CFGECUABCANTP_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabCryIf_DevErrorDetect,     {CFGECUABCRYIF_AR_RELEASE_VERSION_MAJOR,     CFGECUABCRYIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabEa_DevErrorDetect,        {CFGECUABEA_AR_RELEASE_VERSION_MAJOR,        CFGECUABEA_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabEthIf_DevErrorDetect,     {CFGECUABETHIF_AR_RELEASE_VERSION_MAJOR,     CFGECUABETHIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabFee_DevErrorDetect,       {CFGECUABFEE_AR_RELEASE_VERSION_MAJOR,       CFGECUABFEE_AR_RELEASE_VERSION_MINOR,       0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabFrIf_DevErrorDetect,      {CFGECUABFRIF_AR_RELEASE_VERSION_MAJOR,      CFGECUABFRIF_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabFrTp_DevErrorDetect,      {CFGECUABFRTP_AR_RELEASE_VERSION_MAJOR,      CFGECUABFRTP_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabJ1939Tp_DevErrorDetect,   {CFGECUABJ1939TP_AR_RELEASE_VERSION_MAJOR,   CFGECUABJ1939TP_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabLinIf_DevErrorDetect,     {CFGECUABLINIF_AR_RELEASE_VERSION_MAJOR,     CFGECUABLINIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabLinTp_DevErrorDetect,     {CFGECUABLINTP_AR_RELEASE_VERSION_MAJOR,     CFGECUABLINTP_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabMemIf_DevErrorDetect,     {CFGECUABMEMIF_AR_RELEASE_VERSION_MAJOR,     CFGECUABMEMIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuabWdgIf_DevErrorDetect,     {CFGECUABWDGIF_AR_RELEASE_VERSION_MAJOR,     CFGECUABWDGIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalAdc_DevErrorDetect,        {CFGMCALADC_AR_RELEASE_VERSION_MAJOR,        CFGMCALADC_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalCan_DevErrorDetect,        {CFGMCALCAN_AR_RELEASE_VERSION_MAJOR,        CFGMCALCAN_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalCry_DevErrorDetect,        {CFGMCALCRY_AR_RELEASE_VERSION_MAJOR,        CFGMCALCRY_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalDio_DevErrorDetect,        {CFGMCALDIO_AR_RELEASE_VERSION_MAJOR,        CFGMCALDIO_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalEep_DevErrorDetect,        {CFGMCALEEP_AR_RELEASE_VERSION_MAJOR,        CFGMCALEEP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalEth_DevErrorDetect,        {CFGMCALETH_AR_RELEASE_VERSION_MAJOR,        CFGMCALETH_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalFls_DevErrorDetect,        {CFGMCALFLS_AR_RELEASE_VERSION_MAJOR,        CFGMCALFLS_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalFr_DevErrorDetect,         {CFGMCALFR_AR_RELEASE_VERSION_MAJOR,         CFGMCALFR_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalGpt_DevErrorDetect,        {CFGMCALGPT_AR_RELEASE_VERSION_MAJOR,        CFGMCALGPT_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalIcu_DevErrorDetect,        {CFGMCALICU_AR_RELEASE_VERSION_MAJOR,        CFGMCALICU_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalLin_DevErrorDetect,        {CFGMCALLIN_AR_RELEASE_VERSION_MAJOR,        CFGMCALLIN_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalMcu_DevErrorDetect,        {CFGMCALMCU_AR_RELEASE_VERSION_MAJOR,        CFGMCALMCU_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalOcu_DevErrorDetect,        {CFGMCALOCU_AR_RELEASE_VERSION_MAJOR,        CFGMCALOCU_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalPort_DevErrorDetect,       {CFGMCALPORT_AR_RELEASE_VERSION_MAJOR,       CFGMCALPORT_AR_RELEASE_VERSION_MINOR,       0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalPwm_DevErrorDetect,        {CFGMCALPWM_AR_RELEASE_VERSION_MAJOR,        CFGMCALPWM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalSpi_DevErrorDetect,        {CFGMCALSPI_AR_RELEASE_VERSION_MAJOR,        CFGMCALSPI_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {McalWdg_DevErrorDetect,        {CFGMCALWDG_AR_RELEASE_VERSION_MAJOR,        CFGMCALWDG_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \

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

