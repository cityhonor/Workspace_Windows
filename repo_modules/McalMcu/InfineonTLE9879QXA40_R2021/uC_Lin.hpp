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
#include "tle987x.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LIN_CTRL_STS_M_SM_ERR_CLR_Pos                              (24UL)
#define LIN_CTRL_STS_M_SM_ERR_CLR_Msk                              (0x1000000UL)
#define LIN_CTRL_STS_HV_MODE_Pos                                   (21UL)
#define LIN_CTRL_STS_HV_MODE_Msk                                   (0x200000UL)
#define LIN_CTRL_STS_MODE_FB_Pos                                   (16UL)
#define LIN_CTRL_STS_MODE_FB_Msk                                   (0x70000UL)
#define LIN_CTRL_STS_FB_SM3_Pos                                    (15UL)
#define LIN_CTRL_STS_FB_SM3_Msk                                    (0x8000UL)
#define LIN_CTRL_STS_FB_SM2_Pos                                    (14UL)
#define LIN_CTRL_STS_FB_SM2_Msk                                    (0x4000UL)
#define LIN_CTRL_STS_FB_SM1_Pos                                    (13UL)
#define LIN_CTRL_STS_FB_SM1_Msk                                    (0x2000UL)
#define LIN_CTRL_STS_SM_Pos                                        (11UL)
#define LIN_CTRL_STS_SM_Msk                                        (0x1800UL)
#define LIN_CTRL_STS_RXD_Pos                                       (10UL)
#define LIN_CTRL_STS_RXD_Msk                                       (0x400UL)
#define LIN_CTRL_STS_TXD_Pos                                       (9UL)
#define LIN_CTRL_STS_TXD_Msk                                       (0x200UL)
#define LIN_CTRL_STS_TXD_TMOUT_STS_Pos                             (6UL)
#define LIN_CTRL_STS_TXD_TMOUT_STS_Msk                             (0x40UL)
#define LIN_CTRL_STS_OC_STS_Pos                                    (5UL)
#define LIN_CTRL_STS_OC_STS_Msk                                    (0x20UL)
#define LIN_CTRL_STS_OT_STS_Pos                                    (4UL)
#define LIN_CTRL_STS_OT_STS_Msk                                    (0x10UL)
#define LIN_CTRL_STS_M_SM_ERR_Pos                                  (3UL)
#define LIN_CTRL_STS_M_SM_ERR_Msk                                  (0x8UL)
#define LIN_CTRL_STS_MODE_Pos                                      (1UL)
#define LIN_CTRL_STS_MODE_Msk                                      (0x6UL)
#define UART1_SBUF_VAL_Pos                                         (0UL)
#define UART1_SBUF_VAL_Msk                                         (0xffUL)
#define UART1_SCON_RI_Pos                                          (0UL)
#define UART1_SCON_RI_Msk                                          (0x1UL)
#define UART1_SCON_TI_Pos                                          (1UL)
#define UART1_SCON_TI_Msk                                          (0x2UL)
#define UART1_SCON_RB8_Pos                                         (2UL)
#define UART1_SCON_RB8_Msk                                         (0x4UL)
#define UART1_SCON_TB8_Pos                                         (3UL)
#define UART1_SCON_TB8_Msk                                         (0x8UL)
#define UART1_SCON_REN_Pos                                         (4UL)
#define UART1_SCON_REN_Msk                                         (0x10UL)
#define UART1_SCON_SM2_Pos                                         (5UL)
#define UART1_SCON_SM2_Msk                                         (0x20UL)
#define UART1_SCON_SM1_Pos                                         (6UL)
#define UART1_SCON_SM1_Msk                                         (0x40UL)
#define UART1_SCON_SM0_Pos                                         (7UL)
#define UART1_SCON_SM0_Msk                                         (0x80UL)
#define UART1_SCONCLR_RICLR_Pos                                    (0UL)
#define UART1_SCONCLR_RICLR_Msk                                    (0x1UL)
#define UART1_SCONCLR_TICLR_Pos                                    (1UL)
#define UART1_SCONCLR_TICLR_Msk                                    (0x2UL)
#define UART2_SBUF_VAL_Pos                                         (0UL)
#define UART2_SBUF_VAL_Msk                                         (0xffUL)
#define UART2_SCON_RI_Pos                                          (0UL)
#define UART2_SCON_RI_Msk                                          (0x1UL)
#define UART2_SCON_TI_Pos                                          (1UL)
#define UART2_SCON_TI_Msk                                          (0x2UL)
#define UART2_SCON_RB8_Pos                                         (2UL)
#define UART2_SCON_RB8_Msk                                         (0x4UL)
#define UART2_SCON_TB8_Pos                                         (3UL)
#define UART2_SCON_TB8_Msk                                         (0x8UL)
#define UART2_SCON_REN_Pos                                         (4UL)
#define UART2_SCON_REN_Msk                                         (0x10UL)
#define UART2_SCON_SM2_Pos                                         (5UL)
#define UART2_SCON_SM2_Msk                                         (0x20UL)
#define UART2_SCON_SM1_Pos                                         (6UL)
#define UART2_SCON_SM1_Msk                                         (0x40UL)
#define UART2_SCON_SM0_Pos                                         (7UL)
#define UART2_SCON_SM0_Msk                                         (0x80UL)
#define UART2_SCONCLR_RICLR_Pos                                    (0UL)
#define UART2_SCONCLR_RICLR_Msk                                    (0x1UL)
#define UART2_SCONCLR_TICLR_Pos                                    (1UL)
#define UART2_SCONCLR_TICLR_Msk                                    (0x2UL)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 1;
      __IOM uint32_t MODE       : 2;
      __IM  uint32_t M_SM_ERR   : 1;
      __IM  uint32_t OT_STS     : 1;
      __IM  uint32_t OC_STS     : 1;
      __IM  uint32_t TXD_TMOUT_STS : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t TXD        : 1;
      __IM  uint32_t RXD        : 1;
      __IOM uint32_t SM         : 2;
      __IM  uint32_t FB_SM1     : 1;
      __IM  uint32_t FB_SM2     : 1;
      __IM  uint32_t FB_SM3     : 1;
      __IM  uint32_t MODE_FB    : 3;
      __IM  uint32_t            : 2;
      __IOM uint32_t HV_MODE    : 1;
      __IM  uint32_t            : 2;
      __IOM uint32_t M_SM_ERR_CLR : 1;
    }bit;
  }CTRL_STS;
}LIN_Type;

typedef struct{
  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t RI          : 1;
      __IOM uint8_t TI          : 1;
      __IOM uint8_t RB8         : 1;
      __IOM uint8_t TB8         : 1;
      __IOM uint8_t REN         : 1;
      __IOM uint8_t SM2         : 1;
      __IOM uint8_t SM1         : 1;
      __IOM uint8_t SM0         : 1;
    }bit;
  }SCON;
  __IM  uint8_t   RESERVED[3];

  union{
    __IOM uint8_t reg;

    struct{
      __IOM uint8_t VAL         : 8;
    }bit;
  }SBUF;
  __IM  uint8_t   RESERVED1[3];

  union{
    __IOM uint8_t reg;

    struct{
      __OM  uint8_t RICLR       : 1;
      __OM  uint8_t TICLR       : 1;
    }bit;
  }SCONCLR;
}UART_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern LIN_Type                                                           LIN;
extern UART_Type                                                          UART1;
extern UART_Type                                                          UART2;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


