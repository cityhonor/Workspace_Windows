#pragma once
/******************************************************************************/
/* File   : uC_Dma.hpp                                                        */
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
#define DMA_ALT_CTRL_BASE_PTR_ALT_CTRL_BASE_PTR_Pos               (0UL)
#define DMA_ALT_CTRL_BASE_PTR_ALT_CTRL_BASE_PTR_Msk               (0xffffffffUL)
#define DMA_CFG_CHN1_PROT_CTRL_Pos                                (5UL)
#define DMA_CFG_CHN1_PROT_CTRL_Msk                                (0xe0UL)
#define DMA_CFG_MASTER_ENABLE_Pos                                 (0UL)
#define DMA_CFG_MASTER_ENABLE_Msk                                 (0x1UL)
#define DMA_CHNL_ENABLE_CLR_CHNL_ENABLE_CLR_Pos                   (0UL)
#define DMA_CHNL_ENABLE_CLR_CHNL_ENABLE_CLR_Msk                   (0x3fffUL)
#define DMA_CHNL_ENABLE_SET_CHNL_ENABLE_SET_Pos                   (0UL)
#define DMA_CHNL_ENABLE_SET_CHNL_ENABLE_SET_Msk                   (0x3fffUL)
#define DMA_CHNL_PRI_ALT_CLR_CHNL_PRI_ALT_CLR_Pos                 (0UL)
#define DMA_CHNL_PRI_ALT_CLR_CHNL_PRI_ALT_CLR_Msk                 (0x3fffUL)
#define DMA_CHNL_PRI_ALT_SET_CHNL_PRI_ALT_SET_Pos                 (0UL)
#define DMA_CHNL_PRI_ALT_SET_CHNL_PRI_ALT_SET_Msk                 (0x3fffUL)
#define DMA_CHNL_PRIORITY_CLR_CHNL_PRIORITY_CLR_Pos               (0UL)
#define DMA_CHNL_PRIORITY_CLR_CHNL_PRIORITY_CLR_Msk               (0x3fffUL)
#define DMA_CHNL_PRIORITY_SET_CHNL_PRIORITY_SET_Pos               (0UL)
#define DMA_CHNL_PRIORITY_SET_CHNL_PRIORITY_SET_Msk               (0x3fffUL)
#define DMA_CHNL_REQ_MASK_CLR_CHNL_REQ_MASK_CLR_Pos               (0UL)
#define DMA_CHNL_REQ_MASK_CLR_CHNL_REQ_MASK_CLR_Msk               (0x3fffUL)
#define DMA_CHNL_REQ_MASK_SET_CHNL_REQ_MASK_SET_Pos               (0UL)
#define DMA_CHNL_REQ_MASK_SET_CHNL_REQ_MASK_SET_Msk               (0x3fffUL)
#define DMA_CHNL_SW_REQUEST_CHNL_SW_REQUEST_Pos                   (0UL)
#define DMA_CHNL_SW_REQUEST_CHNL_SW_REQUEST_Msk                   (0x3fffUL)
#define DMA_CHNL_USEBURST_CLR_CHNL_USEBURST_CLR_Pos               (0UL)
#define DMA_CHNL_USEBURST_CLR_CHNL_USEBURST_CLR_Msk               (0x3fffUL)
#define DMA_CHNL_USEBURST_SET_CHNL_USEBURST_SET_Pos               (0UL)
#define DMA_CHNL_USEBURST_SET_CHNL_USEBURST_SET_Msk               (0x3fffUL)
#define DMA_CTRL_BASE_PTR_CTRL_BASE_PTR_Pos                       (9UL)
#define DMA_CTRL_BASE_PTR_CTRL_BASE_PTR_Msk                       (0xfffffe00UL)
#define DMA_ERR_CLR_ERR_CLR_Pos                                   (0UL)
#define DMA_ERR_CLR_ERR_CLR_Msk                                   (0x1UL)
#define DMA_STATUS_CHNLS_MINUS1_Pos                               (16UL)
#define DMA_STATUS_CHNLS_MINUS1_Msk                               (0x1f0000UL)
#define DMA_STATUS_STATE_Pos                                      (4UL)
#define DMA_STATUS_STATE_Msk                                      (0xf0UL)
#define DMA_STATUS_MASTER_ENABLE_Pos                              (0UL)
#define DMA_STATUS_MASTER_ENABLE_Msk                              (0x1UL)
#define DMA_WAITONREQ_STATUS_WAITONREQ_STATUS_Pos                 (0UL)
#define DMA_WAITONREQ_STATUS_WAITONREQ_STATUS_Msk                 (0x3fffUL)

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
      __IM  uint32_t MASTER_ENABLE : 1;
      __IM  uint32_t            : 3;
      __IM  uint32_t STATE      : 4;
      __IM  uint32_t            : 8;
      __IM  uint32_t CHNLS_MINUS1 : 5;
    }bit;
  }STATUS;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t MASTER_ENABLE : 1;
      __IM  uint32_t            : 4;
      __OM  uint32_t CHN1_PROT_CTRL : 3;
    }bit;
  }CFG;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t            : 9;
      __IOM uint32_t CTRL_BASE_PTR : 23;
    }bit;
  }CTRL_BASE_PTR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t ALT_CTRL_BASE_PTR : 32;
    }bit;
  }ALT_CTRL_BASE_PTR;

  union{
    __IOM uint32_t reg;

    struct{
      __IM  uint32_t WAITONREQ_STATUS : 14;
    }bit;
  }WAITONREQ_STATUS;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_SW_REQUEST : 14;
    }bit;
  }CHNL_SW_REQUEST;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHNL_USEBURST_SET : 14;
    }bit;
  }CHNL_USEBURST_SET;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_USEBURST_CLR : 14;
    }bit;
  }CHNL_USEBURST_CLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHNL_REQ_MASK_SET : 14;
    }bit;
  }CHNL_REQ_MASK_SET;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_REQ_MASK_CLR : 14;
    }bit;
  }CHNL_REQ_MASK_CLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHNL_ENABLE_SET : 14;
    }bit;
  }CHNL_ENABLE_SET;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_ENABLE_CLR : 14;
    }bit;
  }CHNL_ENABLE_CLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHNL_PRI_ALT_SET : 14;
    }bit;
  }CHNL_PRI_ALT_SET;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_PRI_ALT_CLR : 14;
    }bit;
  }CHNL_PRI_ALT_CLR;

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t CHNL_PRIORITY_SET : 14;
    }bit;
  }CHNL_PRIORITY_SET;

  union{
    __IOM uint32_t reg;

    struct{
      __OM  uint32_t CHNL_PRIORITY_CLR : 14;
    }bit;
  }CHNL_PRIORITY_CLR;
  __IM  uint32_t  RESERVED[3];

  union{
    __IOM uint32_t reg;

    struct{
      __IOM uint32_t ERR_CLR    : 1;
    }bit;
  }ERR_CLR;
}DMA_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern DMA_Type                                                             DMA;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
