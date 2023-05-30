/******************************************************************************/
/* File   : Const.cpp                                                         */
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
#include "Std_Types.hpp"

#include "Const.hpp"
#include "infConst_Imp.hpp"

#include "Cfg.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define Const_DefaultInit                                                                                                  \
      {CONSTADC_AR_RELEASE_VERSION_MAJOR,          CONSTADC_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTBSWM_AR_RELEASE_VERSION_MAJOR,         CONSTBSWM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCAN_AR_RELEASE_VERSION_MAJOR,          CONSTCAN_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCANIF_AR_RELEASE_VERSION_MAJOR,        CONSTCANIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCANNM_AR_RELEASE_VERSION_MAJOR,        CONSTCANNM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCANSM_AR_RELEASE_VERSION_MAJOR,        CONSTCANSM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCANTP_AR_RELEASE_VERSION_MAJOR,        CONSTCANTP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCOM_AR_RELEASE_VERSION_MAJOR,          CONSTCOM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCOMM_AR_RELEASE_VERSION_MAJOR,         CONSTCOMM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCRY_AR_RELEASE_VERSION_MAJOR,          CONSTCRY_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCRYIF_AR_RELEASE_VERSION_MAJOR,        CONSTCRYIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCSM_AR_RELEASE_VERSION_MAJOR,          CONSTCSM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDEM_AR_RELEASE_VERSION_MAJOR,          CONSTDEM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDET_AR_RELEASE_VERSION_MAJOR,          CONSTDET_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDIO_AR_RELEASE_VERSION_MAJOR,          CONSTDIO_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDLT_AR_RELEASE_VERSION_MAJOR,          CONSTDLT_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTEA_AR_RELEASE_VERSION_MAJOR,           CONSTEA_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTEEP_AR_RELEASE_VERSION_MAJOR,          CONSTEEP_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTETH_AR_RELEASE_VERSION_MAJOR,          CONSTETH_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTETHIF_AR_RELEASE_VERSION_MAJOR,        CONSTETHIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFEE_AR_RELEASE_VERSION_MAJOR,          CONSTFEE_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFIM_AR_RELEASE_VERSION_MAJOR,          CONSTFIM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFLS_AR_RELEASE_VERSION_MAJOR,          CONSTFLS_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFR_AR_RELEASE_VERSION_MAJOR,           CONSTFR_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFRIF_AR_RELEASE_VERSION_MAJOR,         CONSTFRIF_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFRNM_AR_RELEASE_VERSION_MAJOR,         CONSTFRNM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFRTP_AR_RELEASE_VERSION_MAJOR,         CONSTFRTP_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTGPT_AR_RELEASE_VERSION_MAJOR,          CONSTGPT_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTICU_AR_RELEASE_VERSION_MAJOR,          CONSTICU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTIPDUM_AR_RELEASE_VERSION_MAJOR,        CONSTIPDUM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTJ1939TP_AR_RELEASE_VERSION_MAJOR,      CONSTJ1939TP_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTLIN_AR_RELEASE_VERSION_MAJOR,          CONSTLIN_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTLINIF_AR_RELEASE_VERSION_MAJOR,        CONSTLINIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTLINTP_AR_RELEASE_VERSION_MAJOR,        CONSTLINTP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCU_AR_RELEASE_VERSION_MAJOR,          CONSTMCU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMEMIF_AR_RELEASE_VERSION_MAJOR,        CONSTMEMIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTNM_AR_RELEASE_VERSION_MAJOR,           CONSTNM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTOCU_AR_RELEASE_VERSION_MAJOR,          CONSTOCU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTPDUR_AR_RELEASE_VERSION_MAJOR,         CONSTPDUR_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTPORT_AR_RELEASE_VERSION_MAJOR,         CONSTPORT_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTPWM_AR_RELEASE_VERSION_MAJOR,          CONSTPWM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTRTE_AR_RELEASE_VERSION_MAJOR,          CONSTRTE_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSECOC_AR_RELEASE_VERSION_MAJOR,        CONSTSECOC_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSOKFM_AR_RELEASE_VERSION_MAJOR,        CONSTSOKFM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSPI_AR_RELEASE_VERSION_MAJOR,          CONSTSPI_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSTARTUP_AR_RELEASE_VERSION_MAJOR,      CONSTSTARTUP_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSTBM_AR_RELEASE_VERSION_MAJOR,         CONSTSTBM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR,   CONSTSWCAPPLFOC_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTVKMS_AR_RELEASE_VERSION_MAJOR,         CONSTVKMS_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTWDG_AR_RELEASE_VERSION_MAJOR,          CONSTWDG_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTWDGIF_AR_RELEASE_VERSION_MAJOR,        CONSTWDGIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTWDGM_AR_RELEASE_VERSION_MAJOR,         CONSTWDGM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {                                                                                                                \
            {CONSTDCM_AR_RELEASE_VERSION_MAJOR, CONSTDCM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}         \
         ,  ServiceDcm_SizeinfServiceDcmClients                                                                                      \
         ,  {                                                                                                          \
                  &McalAdc                                                                                                 \
               ,  &ServiceBswM                                                                                                \
               ,  &McalCan                                                                                                 \
               ,  &EcuabCanIf                                                                                               \
               ,  &ServiceCanNm                                                                                               \
               ,  &ServiceCanSm                                                                                               \
               ,  &EcuabCanTp                                                                                               \
               ,  &ServiceCom                                                                                                 \
               ,  &ServiceComM                                                                                                \
               ,  &McalCry                                                                                                 \
               ,  &EcuabCryIf                                                                                               \
               ,  &ServiceCsm                                                                                                 \
               ,  &ServiceDcm                                                                                                 \
               ,  &ServiceDem                                                                                                 \
               ,  &ServiceDet                                                                                                 \
               ,  &McalDio                                                                                                 \
               ,  &ServiceDlt                                                                                                 \
               ,  &EcuabEa                                                                                                  \
               ,  &ServiceEcuM                                                                                                \
               ,  &McalEep                                                                                                 \
               ,  &McalEth                                                                                                 \
               ,  &EcuabEthIf                                                                                               \
               ,  &EcuabFee                                                                                                 \
               ,  &ServiceFiM                                                                                                 \
               ,  &McalFls                                                                                                 \
               ,  &McalFr                                                                                                  \
               ,  &EcuabFrIf                                                                                                \
               ,  &ServiceFrNm                                                                                                \
               ,  &EcuabFrTp                                                                                                \
               ,  &McalGpt                                                                                                 \
               ,  &McalIcu                                                                                                 \
               ,  &ServiceIpduM                                                                                               \
               ,  &EcuabJ1939Tp                                                                                             \
               ,  &McalLin                                                                                                 \
               ,  &EcuabLinIf                                                                                               \
               ,  &EcuabLinTp                                                                                               \
               ,  &McalMcu                                                                                                 \
               ,  &EcuabMemIf                                                                                               \
               ,  &ServiceNm                                                                                                  \
               ,  &ServiceNvM                                                                                                 \
               ,  &McalOcu                                                                                                 \
               ,  &ServiceOs                                                                                                  \
               ,  &ServicePduR                                                                                                \
               ,  &McalPort                                                                                                \
               ,  &McalPwm                                                                                                 \
               ,  &ProjectARA                                                                                                 \
               ,  &ServiceSchM                                                                                                \
               ,  &ServiceSecOC                                                                                               \
               ,  &ServiceSokFm                                                                                               \
               ,  &McalSpi                                                                                                 \
               ,  &ServiceStartUp                                                                                             \
               ,  &ServiceStbM                                                                                                \
               ,  &ApplSwcFoc                                                                                          \
               ,  &ServiceSwcEcuM                                                                                      \
               ,  &ServiceSwcOs                                                                                        \
               ,  &ServiceVkms                                                                                                \
               ,  &McalWdg                                                                                                 \
               ,  &EcuabWdgIf                                                                                               \
               ,  &ServiceWdgM                                                                                                \
            }                                                                                                          \
/*#if(STD_ON == _ReSIM)*/                                                                                              \
         ,  {                                                                                                          \
                  "McalAdc"                                                                                                \
               ,  "ServiceBswM"                                                                                               \
               ,  "McalCan"                                                                                                \
               ,  "EcuabCanIf"                                                                                              \
               ,  "ServiceCanNm"                                                                                              \
               ,  "ServiceCanSm"                                                                                              \
               ,  "EcuabCanTp"                                                                                              \
               ,  "ServiceCom"                                                                                                \
               ,  "ServiceComM"                                                                                               \
               ,  "McalCry"                                                                                                \
               ,  "EcuabCryIf"                                                                                              \
               ,  "ServiceCsm"                                                                                                \
               ,  "ServiceDcm"                                                                                                \
               ,  "ServiceDem"                                                                                                \
               ,  "ServiceDet"                                                                                                \
               ,  "McalDio"                                                                                                \
               ,  "ServiceDlt"                                                                                                \
               ,  "EcuabEa"                                                                                                 \
               ,  "ServiceEcuM"                                                                                               \
               ,  "McalEep"                                                                                                \
               ,  "McalEth"                                                                                                \
               ,  "EcuabEthIf"                                                                                              \
               ,  "EcuabFee"                                                                                                \
               ,  "ServiceFiM"                                                                                                \
               ,  "McalFls"                                                                                                \
               ,  "McalFr"                                                                                                 \
               ,  "EcuabFrIf"                                                                                               \
               ,  "ServiceFrNm"                                                                                               \
               ,  "EcuabFrTp"                                                                                               \
               ,  "McalGpt"                                                                                                \
               ,  "McalIcu"                                                                                                \
               ,  "ServiceIpduM"                                                                                              \
               ,  "EcuabJ1939Tp"                                                                                            \
               ,  "McalLin"                                                                                                \
               ,  "EcuabLinIf"                                                                                              \
               ,  "EcuabLinTp"                                                                                              \
               ,  "McalMcu"                                                                                                \
               ,  "EcuabMemIf"                                                                                              \
               ,  "ServiceNm"                                                                                                 \
               ,  "ServiceNvM"                                                                                                \
               ,  "McalOcu"                                                                                                \
               ,  "ServiceOs"                                                                                                 \
               ,  "ServicePduR"                                                                                               \
               ,  "McalPort"                                                                                               \
               ,  "McalPwm"                                                                                                \
               ,  "ProjectARA"                                                                                                \
               ,  "ServiceSchM"                                                                                               \
               ,  "ServiceSecOC"                                                                                              \
               ,  "ServiceSokFm"                                                                                              \
               ,  "McalSpi"                                                                                                \
               ,  "ServiceStartUp"                                                                                            \
               ,  "ServiceStbM"                                                                                               \
               ,  "ApplSwcFoc"                                                                                         \
               ,  "ServiceSwcEcuM"                                                                                     \
               ,  "ServiceSwcOs"                                                                                       \
               ,  "ServiceVkms"                                                                                               \
               ,  "McalWdg"                                                                                                \
               ,  "EcuabWdgIf"                                                                                              \
               ,  "ServiceWdgM"                                                                                               \
            }                                                                                                          \
/*#else*/                                                                                                              \
/*#endif*/                                                                                                             \
      }                                                                                                                \
                                                                                                                       \
   ,  {                                                                                                                \
            {CONSTSCHM_AR_RELEASE_VERSION_MAJOR, CONSTSCHM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}       \
         ,  ServiceSchM_SizeServiceSchMClients                                                                                       \
         ,  {                                                                                                          \
                  &ServiceEcuM                                                                                                \
               ,  &ServiceNvM                                                                                                 \
               ,  &EcuabCanIf                                                                                               \
               ,  &ServicePduR                                                                                                \
               ,  &ServiceDcm                                                                                                 \
            }                                                                                                          \
      }                                                                                                                \
                                                                                                                       \
   ,  {                                                                                                                       \
            {CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR, CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  SizeDriverInitData_One                                                                                            \
         ,  {                                                                                                                 \
                  &McalAdc                                                                                                        \
               ,  &McalCan                                                                                                        \
               ,  &EcuabCanIf                                                                                                      \
               ,  &ServiceCanNm                                                                                                      \
               ,  &ServiceCanSm                                                                                                      \
               ,  &EcuabCanTp                                                                                                      \
               ,  &ServiceCom                                                                                                        \
               ,  &ServiceComM                                                                                                       \
               ,  &McalCry                                                                                                        \
               ,  &EcuabCryIf                                                                                                      \
               ,  &ServiceCsm                                                                                                        \
               ,  &ServiceDcm                                                                                                        \
/*             ,  &ServiceDem*/                                                                                                      \
/*             ,  &ServiceDet*/                                                                                                      \
               ,  &McalDio                                                                                                        \
               ,  &ServiceDlt                                                                                                        \
               ,  &EcuabEa                                                                                                         \
/*             ,  &ServiceEcuM*/                                                                                                     \
               ,  &McalEep                                                                                                        \
               ,  &McalEth                                                                                                        \
               ,  &EcuabEthIf                                                                                                      \
/*             ,  &EcuabFee*/                                                                                                      \
               ,  &ServiceFiM                                                                                                        \
/*             ,  &McalFls*/                                                                                                      \
               ,  &McalFr                                                                                                         \
               ,  &EcuabFrIf                                                                                                       \
               ,  &ServiceFrNm                                                                                                       \
               ,  &EcuabFrTp                                                                                                       \
               ,  &McalGpt                                                                                                        \
               ,  &McalIcu                                                                                                        \
               ,  &ServiceIpduM                                                                                                      \
               ,  &EcuabJ1939Tp                                                                                                    \
               ,  &McalLin                                                                                                        \
               ,  &EcuabLinIf                                                                                                      \
               ,  &EcuabLinTp                                                                                                      \
               ,  &McalMcu                                                                                                        \
/*             ,  &EcuabMemIf*/                                                                                                    \
               ,  &ServiceNm                                                                                                         \
/*             ,  &ServiceNvM*/                                                                                                      \
               ,  &McalOcu                                                                                                        \
               ,  &ServiceOs                                                                                                         \
               ,  &ServicePduR                                                                                                       \
               ,  &McalPort                                                                                                       \
               ,  &McalPwm                                                                                                        \
               ,  &ProjectARA                                                                                                        \
               ,  &ServiceSecOC                                                                                                      \
               ,  &ServiceSokFm                                                                                                      \
               ,  &McalSpi                                                                                                        \
               ,  &ServiceStartUp                                                                                                    \
               ,  &ServiceStbM                                                                                                       \
               ,  &ApplSwcFoc                                                                                                 \
/*             ,  &ServiceSwcEcuM*/                                                                                           \
               ,  &ServiceSwcOs                                                                                               \
               ,  &ServiceVkms                                                                                                       \
               ,  &McalWdg                                                                                                        \
               ,  &EcuabWdgIf                                                                                                      \
               ,  &ServiceWdgM                                                                                                       \
                                                                                                                              \
               ,  &ServiceBswM                                                                                                       \
               ,  &ServiceSchM                                                                                                       \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(Const.ConstMcalAdc)                                                                                           \
               ,  &(Const.ConstMcalCan)                                                                                           \
               ,  &(Const.ConstEcuabCanIf)                                                                                         \
               ,  &(Const.ConstServiceCanNm)                                                                                         \
               ,  &(Const.ConstServiceCanSm)                                                                                         \
               ,  &(Const.ConstEcuabCanTp)                                                                                         \
               ,  &(Const.ConstServiceCom)                                                                                           \
               ,  &(Const.ConstServiceComM)                                                                                          \
               ,  &(Const.ConstMcalCry)                                                                                           \
               ,  &(Const.ConstEcuabCryIf)                                                                                         \
               ,  &(Const.ConstServiceCsm)                                                                                           \
               ,  &(Const.ConstServiceDcm)                                                                                           \
/*             ,  &(Const.ConstServiceDem)*/                                                                                         \
/*             ,  &(Const.ConstServiceDet)*/                                                                                         \
               ,  &(Const.ConstMcalDio)                                                                                           \
               ,  &(Const.ConstServiceDlt)                                                                                           \
               ,  &(Const.ConstEcuabEa)                                                                                            \
/*             ,  &(Const.ConstServiceEcuM)*/                                                                                        \
               ,  &(Const.ConstMcalEep)                                                                                           \
               ,  &(Const.ConstMcalEth)                                                                                           \
               ,  &(Const.ConstEcuabEthIf)                                                                                         \
/*             ,  &(Const.ConstEcuabFee)*/                                                                                         \
               ,  &(Const.ConstServiceFiM)                                                                                           \
/*             ,  &(Const.ConstMcalFls)*/                                                                                         \
               ,  &(Const.ConstMcalFr)                                                                                            \
               ,  &(Const.ConstEcuabFrIf)                                                                                          \
               ,  &(Const.ConstServiceFrNm)                                                                                          \
               ,  &(Const.ConstEcuabFrTp)                                                                                          \
               ,  &(Const.ConstMcalGpt)                                                                                           \
               ,  &(Const.ConstMcalIcu)                                                                                           \
               ,  &(Const.ConstServiceIpduM)                                                                                         \
               ,  &(Const.ConstEcuabJ1939Tp)                                                                                       \
               ,  &(Const.ConstMcalLin)                                                                                           \
               ,  &(Const.ConstEcuabLinIf)                                                                                         \
               ,  &(Const.ConstEcuabLinTp)                                                                                         \
               ,  &(Const.ConstMcalMcu)                                                                                           \
/*             ,  &(Const.ConstEcuabMemIf)*/                                                                                       \
               ,  &(Const.ConstServiceNm)                                                                                            \
/*             ,  &(Const.ConstServiceNvM)*/                                                                                         \
               ,  &(Const.ConstMcalOcu)                                                                                           \
               ,  &(Const.ConstServiceOs)                                                                                            \
               ,  &(Const.ConstServicePduR)                                                                                          \
               ,  &(Const.ConstMcalPort)                                                                                          \
               ,  &(Const.ConstMcalPwm)                                                                                           \
               ,  &(Const.ConstProjectARA)                                                                                           \
               ,  &(Const.ConstServiceSecOC)                                                                                         \
               ,  &(Const.ConstServiceSokFm)                                                                                         \
               ,  &(Const.ConstMcalSpi)                                                                                           \
               ,  &(Const.ConstServiceStartUp)                                                                                       \
               ,  &(Const.ConstServiceStbM)                                                                                          \
               ,  &(Const.ConstApplSwcFoc)                                                                                    \
/*             ,  &(Const.ConstServiceSwcEcuM)*/                                                                              \
               ,  &(Const.ConstServiceSwcOs)                                                                                  \
               ,  &(Const.ConstServiceVkms)                                                                                          \
               ,  &(Const.ConstMcalWdg)                                                                                           \
               ,  &(Const.ConstEcuabWdgIf)                                                                                         \
               ,  &(Const.ConstServiceWdgM)                                                                                          \
                                                                                                                              \
               ,  &(Const.ConstServiceBswM)                                                                                          \
               ,  &(Const.ConstServiceSchM)                                                                                          \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(CfgGen_ServiceNvM.CfgMcalAdc)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgMcalCan)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabCanIf)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceCanNm)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceCanSm)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgEcuabCanTp)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceCom)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceComM)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgMcalCry)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabCryIf)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceCsm)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceDcm)                                                                                        \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceDem)*/                                                                                      \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceDet)*/                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgMcalDio)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceDlt)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabEa)                                                                                         \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceEcuM)*/                                                                                     \
               ,  &(CfgGen_ServiceNvM.CfgMcalEep)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgMcalEth)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabEthIf)                                                                                      \
/*             ,  &(CfgGen_ServiceNvM.CfgEcuabFee)*/                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceFiM)                                                                                        \
/*             ,  &(CfgGen_ServiceNvM.CfgMcalFls)*/                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgMcalFr)                                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgEcuabFrIf)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgServiceFrNm)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgEcuabFrTp)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgMcalGpt)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgMcalIcu)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceIpduM)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgEcuabJ1939Tp)                                                                                    \
               ,  &(CfgGen_ServiceNvM.CfgMcalLin)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabLinIf)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgEcuabLinTp)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgMcalMcu)                                                                                        \
/*             ,  &(CfgGen_ServiceNvM.CfgEcuabMemIf)*/                                                                                    \
               ,  &(CfgGen_ServiceNvM.CfgServiceNm)                                                                                         \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceNvM)*/                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgMcalOcu)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceOs)                                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgServicePduR)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgMcalPort)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgMcalPwm)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgProjectARA)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceSecOC)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceSokFm)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgMcalSpi)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceStartUp)                                                                                    \
               ,  &(CfgGen_ServiceNvM.CfgServiceStbM)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgApplSwcFoc)                                                                                 \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceSwcEcuM)*/                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgServiceSwcOs)                                                                               \
               ,  &(CfgGen_ServiceNvM.CfgServiceVkms)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgMcalWdg)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabWdgIf)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceWdgM)                                                                                       \
                                                                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgServiceBswM)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgServiceSchM)                                                                                       \
            }                                                                                                                 \
         ,  SizeDriverInitData_Zero                                                                                           \
         ,  {                                                                                                                 \
                  &ServiceDet                                                                                                        \
               ,  &ServiceDem                                                                                                        \
               ,  &McalFls                                                                                                        \
               ,  &EcuabFee                                                                                                        \
               ,  &EcuabMemIf                                                                                                      \
               ,  &ServiceNvM                                                                                                        \
               ,  &ServiceSwcEcuM                                                                                             \
/*             ,  &ServiceEcuM*/                                                                                                     \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(Const.ConstServiceDet)                                                                                           \
               ,  &(Const.ConstServiceDem)                                                                                           \
               ,  &(Const.ConstMcalFls)                                                                                           \
               ,  &(Const.ConstEcuabFee)                                                                                           \
               ,  &(Const.ConstEcuabMemIf)                                                                                         \
               ,  &(Const.ConstServiceNvM)                                                                                           \
               ,  &(Const.ConstServiceSwcEcuM)                                                                                \
/*             ,  &(Const.ConstServiceEcuM)*/                                                                                        \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(CfgGen_ServiceNvM.CfgServiceDet)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceDem)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgMcalFls)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabFee)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabMemIf)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceNvM)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceSwcEcuM)                                                                             \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceEcuM)*/                                                                                     \
            }                                                                                                                 \
         ,  &ServiceEcuM                                                                                                             \
         ,  &ServiceSchM                                                                                                             \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTECUM_AR_RELEASE_VERSION_MAJOR, CONSTECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}              \
         ,  &McalMcu                                                                                                              \
         ,  &ServiceOs                                                                                                               \
         ,  &ServiceSwcEcuM                                                                                                   \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTNVM_AR_RELEASE_VERSION_MAJOR, CONSTNVM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                \
         ,  &EcuabMemIf                                                                                                            \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTOS_AR_RELEASE_VERSION_MAJOR, CONSTOS_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                  \
         ,  &ServiceEcuM                                                                                                             \
         ,  &ServiceSwcOs                                                                                                     \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTSWCSERVICEOS_AR_RELEASE_VERSION_MAJOR, CONSTSWCSERVICEOS_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  &ServiceSchM                                                                                                             \
      }                                                                                                                       \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
const Const_Type Const = {
   Const_DefaultInit
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

