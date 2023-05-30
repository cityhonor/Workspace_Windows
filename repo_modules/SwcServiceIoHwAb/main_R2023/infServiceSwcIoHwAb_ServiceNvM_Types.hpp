#pragma once
/******************************************************************************/
/* File   : infServiceSwcIoHwAb_ServiceNvM_Types.hpp                          */
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
/*
#include "infMcalMcu_ServiceSwcIoHwAb.hpp"
#include "infServiceOs_ServiceSwcIoHwAb.hpp"
#include "infServiceSwcEcuM_ServiceSwcIoHwAb.hpp"
*/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class NvM_BlocksRom_ServiceSwcIoHwAb_Type:
      public ConstModule_TypeAbstract
{
/*
   public:
      infMcalMcu_ServiceSwcIoHwAb*        ptrinfMcalMcu_ServiceSwcIoHwAb;
      infServiceOs_ServiceSwcIoHwAb*      ptrinfServiceOs_ServiceSwcIoHwAb;
      infServiceSwcEcuM_ServiceSwcIoHwAb* ptrinfServiceSwcEcuM_ServiceSwcIoHwAb;
*/
};

class NvM_BlocksNv_ServiceSwcIoHwAb_Type:
      public CfgModule_TypeAbstract
{
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

