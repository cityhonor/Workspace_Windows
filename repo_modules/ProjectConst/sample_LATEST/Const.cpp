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
#define Const_DefaultInit                                                                                                      \
      {CONSTAPPLSWCFOC_AR_RELEASE_VERSION_MAJOR,     CONSTAPPLSWCFOC_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTRTE_AR_RELEASE_VERSION_MAJOR,            CONSTRTE_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEBSWM_AR_RELEASE_VERSION_MAJOR,    CONSTSERVICEBSWM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICECANNM_AR_RELEASE_VERSION_MAJOR,   CONSTSERVICECANNM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICECANSM_AR_RELEASE_VERSION_MAJOR,   CONSTSERVICECANSM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICECOM_AR_RELEASE_VERSION_MAJOR,     CONSTSERVICECOM_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICECOMM_AR_RELEASE_VERSION_MAJOR,    CONSTSERVICECOMM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICECSM_AR_RELEASE_VERSION_MAJOR,     CONSTSERVICECSM_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {                                                                                                                        \
            {CONSTSERVICEDCM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICEDCM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}   \
         ,  ServiceDcm_SizeinfServiceDcmClients                                                                                \
         ,  {                                                                                                                  \
                  &ApplSwcFoc                                                                                                  \
               ,  &ProjectARA                                                                                                  \
               ,  &ServiceBswM                                                                                                 \
               ,  &ServiceCanNm                                                                                                \
               ,  &ServiceCanSm                                                                                                \
               ,  &ServiceCom                                                                                                  \
               ,  &ServiceComM                                                                                                 \
               ,  &ServiceCsm                                                                                                  \
               ,  &ServiceDcm                                                                                                  \
               ,  &ServiceDem                                                                                                  \
               ,  &ServiceDet                                                                                                  \
               ,  &ServiceDlt                                                                                                  \
               ,  &ServiceEcuM                                                                                                 \
               ,  &ServiceFiM                                                                                                  \
               ,  &ServiceFrNm                                                                                                 \
               ,  &ServiceIpduM                                                                                                \
               ,  &ServiceNm                                                                                                   \
               ,  &ServiceNvM                                                                                                  \
               ,  &ServiceOs                                                                                                   \
               ,  &ServicePduR                                                                                                 \
               ,  &ServiceSchM                                                                                                 \
               ,  &ServiceSecOC                                                                                                \
               ,  &ServiceSokFm                                                                                                \
               ,  &ServiceStartUp                                                                                              \
               ,  &ServiceStbM                                                                                                 \
               ,  &ServiceSwcEcuM                                                                                              \
               ,  &ServiceSwcOs                                                                                                \
               ,  &ServiceVkms                                                                                                 \
               ,  &ServiceWdgM                                                                                                 \
               ,  &EcuabCanIf                                                                                                  \
               ,  &EcuabCanTp                                                                                                  \
               ,  &EcuabCryIf                                                                                                  \
               ,  &EcuabEthIf                                                                                                  \
               ,  &EcuabFee                                                                                                    \
               ,  &EcuabFrIf                                                                                                   \
               ,  &EcuabFrTp                                                                                                   \
               ,  &EcuabJ1939Tp                                                                                                \
               ,  &EcuabLinIf                                                                                                  \
               ,  &EcuabLinTp                                                                                                  \
               ,  &EcuabMemIf                                                                                                  \
               ,  &EcuabWdgIf                                                                                                  \
               ,  &McalAdc                                                                                                     \
               ,  &McalCan                                                                                                     \
               ,  &McalCry                                                                                                     \
               ,  &McalDio                                                                                                     \
               ,  &EcuabEa                                                                                                     \
               ,  &McalEep                                                                                                     \
               ,  &McalEth                                                                                                     \
               ,  &McalFls                                                                                                     \
               ,  &McalFr                                                                                                      \
               ,  &McalGpt                                                                                                     \
               ,  &McalIcu                                                                                                     \
               ,  &McalLin                                                                                                     \
               ,  &McalMcu                                                                                                     \
               ,  &McalOcu                                                                                                     \
               ,  &McalPort                                                                                                    \
               ,  &McalPwm                                                                                                     \
               ,  &McalSpi                                                                                                     \
               ,  &McalWdg                                                                                                     \
            }                                                                                                                  \
         ,  {                                                                                                                  \
                  "ApplSwcFoc"                                                                                                 \
               ,  "ProjectARA"                                                                                                 \
               ,  "ServiceBswM"                                                                                                \
               ,  "ServiceCanNm"                                                                                               \
               ,  "ServiceCanSm"                                                                                               \
               ,  "ServiceCom"                                                                                                 \
               ,  "ServiceComM"                                                                                                \
               ,  "ServiceCsm"                                                                                                 \
               ,  "ServiceDcm"                                                                                                 \
               ,  "ServiceDem"                                                                                                 \
               ,  "ServiceDet"                                                                                                 \
               ,  "ServiceDlt"                                                                                                 \
               ,  "ServiceEcuM"                                                                                                \
               ,  "ServiceFiM"                                                                                                 \
               ,  "ServiceFrNm"                                                                                                \
               ,  "ServiceIpduM"                                                                                               \
               ,  "ServiceNm"                                                                                                  \
               ,  "ServiceNvM"                                                                                                 \
               ,  "ServiceOs"                                                                                                  \
               ,  "ServicePduR"                                                                                                \
               ,  "ServiceSchM"                                                                                                \
               ,  "ServiceSecOC"                                                                                               \
               ,  "ServiceSokFm"                                                                                               \
               ,  "ServiceStartUp"                                                                                             \
               ,  "ServiceStbM"                                                                                                \
               ,  "ServiceSwcEcuM"                                                                                             \
               ,  "ServiceSwcOs"                                                                                               \
               ,  "ServiceVkms"                                                                                                \
               ,  "ServiceWdgM"                                                                                                \
               ,  "EcuabCanIf"                                                                                                 \
               ,  "EcuabCanTp"                                                                                                 \
               ,  "EcuabCryIf"                                                                                                 \
               ,  "EcuabEa"                                                                                                    \
               ,  "EcuabEthIf"                                                                                                 \
               ,  "EcuabFee"                                                                                                   \
               ,  "EcuabFrIf"                                                                                                  \
               ,  "EcuabFrTp"                                                                                                  \
               ,  "EcuabJ1939Tp"                                                                                               \
               ,  "EcuabLinIf"                                                                                                 \
               ,  "EcuabLinTp"                                                                                                 \
               ,  "EcuabMemIf"                                                                                                 \
               ,  "EcuabWdgIf"                                                                                                 \
               ,  "McalAdc"                                                                                                    \
               ,  "McalCan"                                                                                                    \
               ,  "McalCry"                                                                                                    \
               ,  "McalDio"                                                                                                    \
               ,  "McalEep"                                                                                                    \
               ,  "McalEth"                                                                                                    \
               ,  "McalFls"                                                                                                    \
               ,  "McalFr"                                                                                                     \
               ,  "McalGpt"                                                                                                    \
               ,  "McalIcu"                                                                                                    \
               ,  "McalLin"                                                                                                    \
               ,  "McalMcu"                                                                                                    \
               ,  "McalOcu"                                                                                                    \
               ,  "McalPwm"                                                                                                    \
               ,  "McalPort"                                                                                                   \
               ,  "McalSpi"                                                                                                    \
               ,  "McalWdg"                                                                                                    \
            }                                                                                                                  \
      }                                                                                                                        \
   ,  {CONSTSERVICEDEM_AR_RELEASE_VERSION_MAJOR,     CONSTSERVICEDEM_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEDET_AR_RELEASE_VERSION_MAJOR,     CONSTSERVICEDET_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEDLT_AR_RELEASE_VERSION_MAJOR,     CONSTSERVICEDLT_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {                                                                                                                        \
            {CONSTSERVICEECUM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICEECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  &McalMcu                                                                                                           \
         ,  &ServiceOs                                                                                                         \
         ,  &ServiceSwcEcuM                                                                                                    \
      }                                                                                                                        \
   ,  {CONSTSERVICEFIM_AR_RELEASE_VERSION_MAJOR,     CONSTSERVICEFIM_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEFRNM_AR_RELEASE_VERSION_MAJOR,    CONSTSERVICEFRNM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEIPDUM_AR_RELEASE_VERSION_MAJOR,   CONSTSERVICEIPDUM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICENM_AR_RELEASE_VERSION_MAJOR,      CONSTSERVICENM_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'} \
   ,  {                                                                                                                        \
            {CONSTSERVICENVM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICENVM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}   \
         ,  &EcuabMemIf                                                                                                        \
      }                                                                                                                        \
   ,  {                                                                                                                        \
            {CONSTSERVICEOS_AR_RELEASE_VERSION_MAJOR, CONSTSERVICEOS_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}     \
         ,  &ServiceEcuM                                                                                                       \
         ,  &ServiceSwcOs                                                                                                      \
      }                                                                                                                        \
   ,  {CONSTSERVICEPDUR_AR_RELEASE_VERSION_MAJOR,    CONSTSERVICEPDUR_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'} \
   ,  {                                                                                                                        \
            {CONSTSERVICESCHM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICESCHM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  ServiceSchM_SizeServiceSchMClients                                                                                 \
         ,  {                                                                                                                  \
                  &ServiceEcuM                                                                                                 \
               ,  &ServiceNvM                                                                                                  \
               ,  &EcuabCanIf                                                                                                  \
               ,  &ServicePduR                                                                                                 \
               ,  &ServiceDcm                                                                                                  \
            }                                                                                                                  \
      }                                                                                                                        \
   ,  {CONSTSERVICESECOC_AR_RELEASE_VERSION_MAJOR,   CONSTSERVICESECOC_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICESOKFM_AR_RELEASE_VERSION_MAJOR,   CONSTSERVICESOKFM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICESTARTUP_AR_RELEASE_VERSION_MAJOR, CONSTSERVICESTARTUP_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICESTBM_AR_RELEASE_VERSION_MAJOR,    CONSTSERVICESTBM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'} \
   ,  {                                                                                                                        \
            {CONSTSERVICESWCECUM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICESWCECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  SizeDriverInitData_One                                                                                             \
         ,  {                                                                                                                  \
                  &McalAdc                                                                                                     \
               ,  &McalCan                                                                                                     \
               ,  &McalCry                                                                                                     \
               ,  &McalDio                                                                                                     \
               ,  &McalEep                                                                                                     \
               ,  &McalEth                                                                                                     \
/*             ,  &McalFls*/                                                                                                   \
               ,  &McalFr                                                                                                      \
               ,  &McalGpt                                                                                                     \
               ,  &McalIcu                                                                                                     \
               ,  &McalLin                                                                                                     \
               ,  &McalMcu                                                                                                     \
               ,  &McalOcu                                                                                                     \
               ,  &McalPort                                                                                                    \
               ,  &McalPwm                                                                                                     \
               ,  &McalSpi                                                                                                     \
               ,  &McalWdg                                                                                                     \
               ,  &EcuabCanIf                                                                                                  \
               ,  &EcuabCanTp                                                                                                  \
               ,  &EcuabCryIf                                                                                                  \
               ,  &EcuabEa                                                                                                     \
               ,  &EcuabEthIf                                                                                                  \
/*             ,  &EcuabFee*/                                                                                                  \
               ,  &EcuabFrIf                                                                                                   \
               ,  &EcuabFrTp                                                                                                   \
               ,  &EcuabJ1939Tp                                                                                                \
               ,  &EcuabLinIf                                                                                                  \
               ,  &EcuabLinTp                                                                                                  \
/*             ,  &EcuabMemIf*/                                                                                                \
               ,  &EcuabWdgIf                                                                                                  \
               ,  &ServiceCanNm                                                                                                \
               ,  &ServiceCanSm                                                                                                \
               ,  &ServiceCom                                                                                                  \
               ,  &ServiceComM                                                                                                 \
               ,  &ServiceCsm                                                                                                  \
               ,  &ServiceDcm                                                                                                  \
/*             ,  &ServiceDem*/                                                                                                \
/*             ,  &ServiceDet*/                                                                                                \
               ,  &ServiceDlt                                                                                                  \
/*             ,  &ServiceEcuM*/                                                                                               \
               ,  &ServiceFiM                                                                                                  \
               ,  &ServiceFrNm                                                                                                 \
               ,  &ServiceIpduM                                                                                                \
               ,  &ServiceNm                                                                                                   \
/*             ,  &ServiceNvM*/                                                                                                \
               ,  &ServiceOs                                                                                                   \
               ,  &ServicePduR                                                                                                 \
               ,  &ServiceSecOC                                                                                                \
               ,  &ServiceSokFm                                                                                                \
               ,  &ServiceStartUp                                                                                              \
               ,  &ServiceStbM                                                                                                 \
/*             ,  &ServiceSwcEcuM*/                                                                                            \
               ,  &ServiceSwcOs                                                                                                \
               ,  &ServiceVkms                                                                                                 \
               ,  &ServiceWdgM                                                                                                 \
               ,  &ProjectARA                                                                                                  \
               ,  &ApplSwcFoc                                                                                                  \
                                                                                                                               \
               ,  &ServiceBswM                                                                                                 \
               ,  &ServiceSchM                                                                                                 \
            }                                                                                                                  \
         ,  {                                                                                                                  \
                  &(Const.ConstMcalAdc)                                                                                        \
               ,  &(Const.ConstMcalCan)                                                                                        \
               ,  &(Const.ConstMcalCry)                                                                                        \
               ,  &(Const.ConstMcalDio)                                                                                        \
               ,  &(Const.ConstMcalEep)                                                                                        \
               ,  &(Const.ConstMcalEth)                                                                                        \
/*             ,  &(Const.ConstMcalFls)*/                                                                                      \
               ,  &(Const.ConstMcalFr)                                                                                         \
               ,  &(Const.ConstMcalGpt)                                                                                        \
               ,  &(Const.ConstMcalIcu)                                                                                        \
               ,  &(Const.ConstMcalLin)                                                                                        \
               ,  &(Const.ConstMcalMcu)                                                                                        \
               ,  &(Const.ConstMcalOcu)                                                                                        \
               ,  &(Const.ConstMcalPort)                                                                                       \
               ,  &(Const.ConstMcalPwm)                                                                                        \
               ,  &(Const.ConstMcalSpi)                                                                                        \
               ,  &(Const.ConstMcalWdg)                                                                                        \
               ,  &(Const.ConstEcuabCanIf)                                                                                     \
               ,  &(Const.ConstEcuabCanTp)                                                                                     \
               ,  &(Const.ConstEcuabCryIf)                                                                                     \
               ,  &(Const.ConstEcuabEa)                                                                                        \
               ,  &(Const.ConstEcuabEthIf)                                                                                     \
/*             ,  &(Const.ConstEcuabFee)*/                                                                                     \
               ,  &(Const.ConstEcuabFrIf)                                                                                      \
               ,  &(Const.ConstEcuabFrTp)                                                                                      \
               ,  &(Const.ConstEcuabJ1939Tp)                                                                                   \
               ,  &(Const.ConstEcuabLinIf)                                                                                     \
               ,  &(Const.ConstEcuabLinTp)                                                                                     \
/*             ,  &(Const.ConstEcuabMemIf)*/                                                                                   \
               ,  &(Const.ConstEcuabWdgIf)                                                                                     \
               ,  &(Const.ConstServiceCanNm)                                                                                   \
               ,  &(Const.ConstServiceCanSm)                                                                                   \
               ,  &(Const.ConstServiceCom)                                                                                     \
               ,  &(Const.ConstServiceComM)                                                                                    \
               ,  &(Const.ConstServiceCsm)                                                                                     \
               ,  &(Const.ConstServiceDcm)                                                                                     \
/*             ,  &(Const.ConstServiceDem)*/                                                                                   \
/*             ,  &(Const.ConstServiceDet)*/                                                                                   \
               ,  &(Const.ConstServiceDlt)                                                                                     \
/*             ,  &(Const.ConstServiceEcuM)*/                                                                                  \
               ,  &(Const.ConstServiceFiM)                                                                                     \
               ,  &(Const.ConstServiceFrNm)                                                                                    \
               ,  &(Const.ConstServiceIpduM)                                                                                   \
               ,  &(Const.ConstServiceNm)                                                                                      \
/*             ,  &(Const.ConstServiceNvM)*/                                                                                   \
               ,  &(Const.ConstServiceOs)                                                                                      \
               ,  &(Const.ConstServicePduR)                                                                                    \
               ,  &(Const.ConstServiceSecOC)                                                                                   \
               ,  &(Const.ConstServiceSokFm)                                                                                   \
               ,  &(Const.ConstServiceStartUp)                                                                                 \
               ,  &(Const.ConstServiceStbM)                                                                                    \
/*             ,  &(Const.ConstServiceSwcEcuM)*/                                                                               \
               ,  &(Const.ConstServiceSwcOs)                                                                                   \
               ,  &(Const.ConstServiceVkms)                                                                                    \
               ,  &(Const.ConstServiceWdgM)                                                                                    \
               ,  &(Const.ConstProjectARA)                                                                                     \
               ,  &(Const.ConstApplSwcFoc)                                                                                     \
                                                                                                                               \
               ,  &(Const.ConstServiceBswM)                                                                                    \
               ,  &(Const.ConstServiceSchM)                                                                                    \
            }                                                                                                                  \
         ,  {                                                                                                                  \
                  &(CfgGen_ServiceNvM.CfgMcalAdc)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalCan)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalCry)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalDio)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalEep)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalEth)                                                                              \
/*             ,  &(CfgGen_ServiceNvM.CfgMcalFls)*/                                                                            \
               ,  &(CfgGen_ServiceNvM.CfgMcalFr)                                                                               \
               ,  &(CfgGen_ServiceNvM.CfgMcalGpt)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalIcu)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalLin)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalMcu)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalOcu)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalPort)                                                                             \
               ,  &(CfgGen_ServiceNvM.CfgMcalPwm)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalSpi)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgMcalWdg)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgEcuabCanIf)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgEcuabCanTp)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgEcuabCryIf)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgEcuabEa)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgEcuabEthIf)                                                                           \
/*             ,  &(CfgGen_ServiceNvM.CfgEcuabFee)*/                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgEcuabFrIf)                                                                            \
               ,  &(CfgGen_ServiceNvM.CfgEcuabFrTp)                                                                            \
               ,  &(CfgGen_ServiceNvM.CfgEcuabJ1939Tp)                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgEcuabLinIf)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgEcuabLinTp)                                                                           \
/*             ,  &(CfgGen_ServiceNvM.CfgEcuabMemIf)*/                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgEcuabWdgIf)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgServiceCanNm)                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgServiceCanSm)                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgServiceCom)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgServiceComM)                                                                          \
               ,  &(CfgGen_ServiceNvM.CfgServiceCsm)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgServiceDcm)                                                                           \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceDem)*/                                                                         \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceDet)*/                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgServiceDlt)                                                                           \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceEcuM)*/                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceFiM)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgServiceFrNm)                                                                          \
               ,  &(CfgGen_ServiceNvM.CfgServiceIpduM)                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgServiceNm)                                                                            \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceNvM)*/                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgServiceOs)                                                                            \
               ,  &(CfgGen_ServiceNvM.CfgServicePduR)                                                                          \
               ,  &(CfgGen_ServiceNvM.CfgServiceSecOC)                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgServiceSokFm)                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgServiceStartUp)                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgServiceStbM)                                                                          \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceSwcEcuM)*/                                                                     \
               ,  &(CfgGen_ServiceNvM.CfgServiceSwcOs)                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgServiceVkms)                                                                          \
               ,  &(CfgGen_ServiceNvM.CfgServiceWdgM)                                                                          \
               ,  &(CfgGen_ServiceNvM.CfgProjectARA)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgApplSwcFoc)                                                                           \
                                                                                                                               \
               ,  &(CfgGen_ServiceNvM.CfgServiceBswM)                                                                          \
               ,  &(CfgGen_ServiceNvM.CfgServiceSchM)                                                                          \
            }                                                                                                                  \
         ,  SizeDriverInitData_Zero                                                                                            \
         ,  {                                                                                                                  \
                  &ServiceDet                                                                                                  \
               ,  &ServiceDem                                                                                                  \
               ,  &McalFls                                                                                                     \
               ,  &EcuabFee                                                                                                    \
               ,  &EcuabMemIf                                                                                                  \
               ,  &ServiceNvM                                                                                                  \
               ,  &ServiceSwcEcuM                                                                                              \
/*             ,  &ServiceEcuM*/                                                                                               \
            }                                                                                                                  \
         ,  {                                                                                                                  \
                  &(Const.ConstServiceDet)                                                                                     \
               ,  &(Const.ConstServiceDem)                                                                                     \
               ,  &(Const.ConstMcalFls)                                                                                        \
               ,  &(Const.ConstEcuabFee)                                                                                       \
               ,  &(Const.ConstEcuabMemIf)                                                                                     \
               ,  &(Const.ConstServiceNvM)                                                                                     \
               ,  &(Const.ConstServiceSwcEcuM)                                                                                 \
/*             ,  &(Const.ConstServiceEcuM)*/                                                                                  \
            }                                                                                                                  \
         ,  {                                                                                                                  \
                  &(CfgGen_ServiceNvM.CfgServiceDet)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgServiceDem)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgMcalFls)                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgEcuabFee)                                                                             \
               ,  &(CfgGen_ServiceNvM.CfgEcuabMemIf)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgServiceNvM)                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgServiceSwcEcuM)                                                                       \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceEcuM)*/                                                                        \
            }                                                                                                                  \
         ,  &ServiceEcuM                                                                                                       \
         ,  &ServiceSchM                                                                                                       \
      }                                                                                                                        \
   ,  {                                                                                                                        \
            {CONSTSERVICESWCOS_AR_RELEASE_VERSION_MAJOR, CONSTSERVICESWCOS_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  &ServiceSchM                                                                                                       \
      }                                                                                                                        \
   ,  {CONSTSERVICEVKMS_AR_RELEASE_VERSION_MAJOR,    CONSTSERVICEVKMS_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEWDGM_AR_RELEASE_VERSION_MAJOR,    CONSTSERVICEWDGM_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABCANIF_AR_RELEASE_VERSION_MAJOR,     CONSTECUABCANIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABCANTP_AR_RELEASE_VERSION_MAJOR,     CONSTECUABCANTP_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABCRYIF_AR_RELEASE_VERSION_MAJOR,     CONSTECUABCRYIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABEA_AR_RELEASE_VERSION_MAJOR,        CONSTECUABEA_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABETHIF_AR_RELEASE_VERSION_MAJOR,     CONSTECUABETHIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABFEE_AR_RELEASE_VERSION_MAJOR,       CONSTECUABFEE_AR_RELEASE_VERSION_MINOR,       0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABFRIF_AR_RELEASE_VERSION_MAJOR,      CONSTECUABFRIF_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABFRTP_AR_RELEASE_VERSION_MAJOR,      CONSTECUABFRTP_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABJ1939TP_AR_RELEASE_VERSION_MAJOR,   CONSTECUABJ1939TP_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABLINIF_AR_RELEASE_VERSION_MAJOR,     CONSTECUABLINIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABLINTP_AR_RELEASE_VERSION_MAJOR,     CONSTECUABLINTP_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABMEMIF_AR_RELEASE_VERSION_MAJOR,     CONSTECUABMEMIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABWDGIF_AR_RELEASE_VERSION_MAJOR,     CONSTECUABWDGIF_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALADC_AR_RELEASE_VERSION_MAJOR,        CONSTMCALADC_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALCAN_AR_RELEASE_VERSION_MAJOR,        CONSTMCALCAN_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALCRY_AR_RELEASE_VERSION_MAJOR,        CONSTMCALCRY_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALDIO_AR_RELEASE_VERSION_MAJOR,        CONSTMCALDIO_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALEEP_AR_RELEASE_VERSION_MAJOR,        CONSTMCALEEP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALETH_AR_RELEASE_VERSION_MAJOR,        CONSTMCALETH_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALFLS_AR_RELEASE_VERSION_MAJOR,        CONSTMCALFLS_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALFR_AR_RELEASE_VERSION_MAJOR,         CONSTMCALFR_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALGPT_AR_RELEASE_VERSION_MAJOR,        CONSTMCALGPT_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALICU_AR_RELEASE_VERSION_MAJOR,        CONSTMCALICU_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALLIN_AR_RELEASE_VERSION_MAJOR,        CONSTMCALLIN_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALMCU_AR_RELEASE_VERSION_MAJOR,        CONSTMCALMCU_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALOCU_AR_RELEASE_VERSION_MAJOR,        CONSTMCALOCU_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALPORT_AR_RELEASE_VERSION_MAJOR,       CONSTMCALPORT_AR_RELEASE_VERSION_MINOR,       0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALPWM_AR_RELEASE_VERSION_MAJOR,        CONSTMCALPWM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALSPI_AR_RELEASE_VERSION_MAJOR,        CONSTMCALSPI_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALWDG_AR_RELEASE_VERSION_MAJOR,        CONSTMCALWDG_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \

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

