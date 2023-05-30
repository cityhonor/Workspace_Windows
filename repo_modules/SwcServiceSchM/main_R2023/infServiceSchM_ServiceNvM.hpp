#pragma once
/******************************************************************************/
/* File   : infServiceSchM_ServiceNvM.hpp                                     */
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
#include "infServiceSchMClient.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ServiceSchM_SizeServiceSchMClients_1ms                                 5
#define ServiceSchM_SizeServiceSchMClients_25ms                                5

#define NvM_InitBlocksRom_ServiceSchM                                                                                \
   ,  {                                                                                                              \
            {SERVICESCHM_AR_RELEASE_VERSION_MAJOR, SERVICESCHM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  ServiceSchM_SizeServiceSchMClients_1ms                                                                   \
         ,  {                                                                                                        \
                  &ServiceEcuM                                                                                       \
               ,  &ServiceNvM                                                                                        \
               ,  &EcuabCanIf                                                                                        \
               ,  &ServicePduR                                                                                       \
               ,  &ServiceDcm                                                                                        \
            }                                                                                                        \
         ,  ServiceSchM_SizeServiceSchMClients_25ms                                                                  \
         ,  {                                                                                                        \
                  &McalWdg                                                                                           \
               ,  &McalAdc                                                                                           \
               ,  &ServiceSwcIoHwAb                                                                                  \
               ,  &ApplSwcFoc                                                                                        \
               ,  &McalGpt                                                                                           \
            }                                                                                                        \
      }                                                                                                              \

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

