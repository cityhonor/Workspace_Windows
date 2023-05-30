#pragma once
/******************************************************************************/
/* File   : Compiler.hpp                                                      */
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
#include "CompilerCfg.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define AUTOMATIC
#define TYPEDEF
#define NULL_PTR                                                     ((void *)0)
#define ISERVICENMCALLINE                                                            inline
#define LOCAL_ISERVICENMCALLINE                                               static inline

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#define VAR(type, memclass)                       memclass type
#define CONST(type, memclass)                     memclass const type
#define FUNC(rettype, memclass)                   memclass rettype
#define P2VAR(type, memclass, ptrclass)           memclass ptrclass type*
#define P2CONST(type, memclass, ptrclass)         memclass const ptrclass type*
#define P2FUNC(rettype, ptrlass, fctname)         ptrclass rettype (* fctname)
#define FUNC_P2CONST(rettype, ptrclass, memclass) const ptrclass rettype * memclass
#define FUNC_P2VAR(rettype, ptrclass, memclass)   ptrclass rettype * memclass
#define CONSTP2VAR(ptrtype, memclass, ptrclass)   ptrclass ptrtype* const memclass
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrclass ptrtype* const memclass
#define CONSTP2FUNC(rettype, ptrlass, fctname)    ptrclass rettype (* const fctname)

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

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

