#pragma once

#define __ALIGNED(x)                           __attribute__((aligned(x)))
#define __ASM                                  __asm
#define __BKPT(value)
#define __CMSIS_GCC_OUT_REG(r)
#define __CMSIS_GCC_RW_REG(r)
#define __CMSIS_GCC_USE_REG(r)
#define __cmsis_start() _start()
#define __COMPILER_BARRIER()
//#define __has_builtin(x) (0)
#define __INITIAL_SP              __StackTop
#define __INLINE
#define __NO_RETURN                            __attribute__((__noreturn__))
#define __NOP()
#define __PACKED                               __attribute__((packed, aligned(1)))
#define __PACKED_STRUCT                        struct __attribute__((packed, aligned(1)))
#define __PACKED_UNION                         union __attribute__((packed, aligned(1)))
#define __PKHBT(ARG1,ARG2,ARG3) 0
#define __PKHTB(ARG1,ARG2,ARG3) 0
#define __PROGRAM_START           __cmsis_start
#define __RESTRICT                             __restrict
#define __SEV()

#define __SSAT(ARG1, ARG2)   0
#define __SSAT16(ARG1, ARG2) 0
#define __STACK_LIMIT             __StackLimit
#define __STACK_SEAL              __StackSeal
#define __STATIC_FORCEINLINE
#define __STATIC_INLINE
#define __TZ_STACK_SEAL_SIZE      8U
#define __TZ_STACK_SEAL_VALUE     0xFEF5EDA5FEF5EDA5ULL
#define __USAT(ARG1, ARG2) 0
#define __USAT16(ARG1, ARG2) 0
#define __USED                                 __attribute__((used))
#define __VECTOR_TABLE            __Vectors
#define __VECTOR_TABLE_ATTRIBUTE  __attribute__((used, section(".vectors")))
#define __WEAK                                 __attribute__((weak))
#define __WFE()
#define __WFI()
#define __REVSH(value)                                                         0
#define __QADD(op1,op2)                                                        0
#define __QSUB(op1,op2)                                                        0
#define __SMMLA(op1,op2,op3)                                                   0
#define __LDAEXH(ptr)                                                          0
#define __LDAH(ptr)                                                            0
#define __LDREXH(addr)                                                         0
#define __LDRHT(ptr)                                                           0
#define __get_APSR()                                                           0
#define __get_BASEPRI()                                                        0
#define __get_CONTROL()                                                        0
#define __get_FAULTMASK()                                                      0
#define __get_FPSCR()                                                          0
#define __get_IPSR()                                                           0
#define __get_MSP()                                                            0
#define __get_MSPLIM()                                                         0
#define __get_PRIMASK()                                                        0
#define __get_PSP()                                                            0
#define __get_PSPLIM()                                                         0
#define __get_xPSR()                                                           0
#define __LDA(ptr)                                                             0
#define __LDAEX(ptr)                                                           0
#define __LDREXW(addr)                                                         0
#define __LDRT(ptr)                                                            0
#define __QADD16(op1,op2)                                                      0
#define __QADD8(op1,op2)                                                       0
#define __QASX(op1,op2)                                                        0
#define __QSAX(op1,op2)                                                        0
#define __QSUB16(op1,op2)                                                      0
#define __QSUB8(op1,op2)                                                       0
#define __RBIT(value)                                                          0
#define __REV(value)                                                           0
#define __REV16(value)                                                         0
#define __ROR(op1,op2)                                                         0
#define __RRX(value)                                                           0
#define __SADD16(op1,op2)                                                      0
#define __SADD8(op1,op2)                                                       0
#define __SASX(op1,op2)                                                        0
#define __SEL(op1,op2)                                                         0
#define __SHADD16(op1,op2)                                                     0
#define __SHADD8(op1,op2)                                                      0
#define __SHASX(op1,op2)                                                       0
#define __SHSAX(op1,op2)                                                       0
#define __SHSUB16(op1,op2)                                                     0
#define __SHSUB8(op1,op2)                                                      0
#define __SMLAD(op1,op2,op3)                                                   0
#define __SMLADX(op1,op2,op3)                                                  0
#define __SMLSD(op1,op2,op3)                                                   0
#define __SMLSDX(op1,op2,op3)                                                  0
#define __SMUAD(op1,op2)                                                       0
#define __SMUADX(op1,op2)                                                      0
#define __SMUSD(op1,op2)                                                       0
#define __SMUSDX(op1,op2)                                                      0
#define __SSAX(op1,op2)                                                        0
#define __SSUB16(op1,op2)                                                      0
#define __SSUB8(op1,op2)                                                       0
#define __STLEX(value,ptr)                                                     0
#define __STLEXB(value,ptr)                                                    0
#define __STLEXH(value,ptr)                                                    0
#define __STREXB(value,addr)                                                   0
#define __STREXH(value,addr)                                                   0
#define __STREXW(value,addr)                                                   0
#define __SXTAB16_RORn(op1,op2,rotate)                                         0
#define __SXTAB16(op1,op2)                                                     0
#define __SXTB16_RORn(op1,rotate)                                              0
#define __SXTB16(op1)                                                          0
#define __TZ_get_BASEPRI_NS()                                                  0
#define __TZ_get_CONTROL_NS()                                                  0
#define __TZ_get_FAULTMASK_NS()                                                0
#define __TZ_get_MSP_NS()                                                      0
#define __TZ_get_MSPLIM_NS()                                                   0
#define __TZ_get_PRIMASK_NS()                                                  0
#define __TZ_get_PSP_NS()                                                      0
#define __TZ_get_PSPLIM_NS()                                                   0
#define __TZ_get_SP_NS()                                                       0
#define __UADD16(op1,op2)                                                      0
#define __UADD8(op1,op2)                                                       0
#define __UASX(op1,op2)                                                        0
#define __UHADD16(op1,op2)                                                     0
#define __UHADD8(op1,op2)                                                      0
#define __UHASX(op1,op2)                                                       0
#define __UHSAX(op1,op2)                                                       0
#define __UHSUB16(op1,op2)                                                     0
#define __UHSUB8(op1,op2)                                                      0
#define __UQADD16(op1,op2)                                                     0
#define __UQADD8(op1,op2)                                                      0
#define __UQASX(op1,op2)                                                       0
#define __UQSAX(op1,op2)                                                       0
#define __UQSUB16(op1,op2)                                                     0
#define __UQSUB8(op1,op2)                                                      0
#define __USAD8(op1,op2)                                                       0
#define __USADA8(op1,op2,op3)                                                  0
#define __USAX(op1,op2)                                                        0
#define __USUB16(op1,op2)                                                      0
#define __USUB8(op1,op2)                                                       0
#define __UXTAB16(op1,op2)                                                     0
#define __UXTB16(op1)                                                          0
#define __SMLALD(op1,op2,acc)                                                  0
#define __SMLALDX(op1,op2,acc)                                                 0
#define __SMLSLD(op1,op2,acc)                                                  0
#define __SMLSLDX(op1,op2,acc)                                                 0
#define __CLZ(value)                                                           0
#define __LDAB(ptr)                                                            0
#define __LDAEXB(ptr)                                                          0
#define __LDRBT(ptr)                                                           0
#define __LDREXB(addr)                                                         0
#define __CLREX()
#define __disable_fault_irq()
#define __disable_irq()
#define __DMB()
#define __DSB()
#define __enable_fault_irq()
#define __enable_irq()
#define __ISB()
#define __set_BASEPRI_MAX(basePri)
#define __set_BASEPRI(basePri)
#define __set_CONTROL(control)
#define __set_FAULTMASK(faultMask)
#define __set_FPSCR(fpscr)
#define __set_MSP(topOfMainStack)
#define __set_MSPLIM(MainStackPtrLimit)
#define __set_PRIMASK(priMask)
#define __set_PSP(topOfProcStack)
#define __set_PSPLIM(ProcStackPtrLimit)
#define __STL(value,ptr)
#define __STLB(value,ptr)
#define __STLH(value,ptr)
#define __STRBT(value,ptr)
#define __STRHT(value,ptr)
#define __STRT(value,ptr)
#define __TZ_set_BASEPRI_NS(basePri)
#define __TZ_set_CONTROL_NS(control)
#define __TZ_set_FAULTMASK_NS(faultMask)
#define __TZ_set_MSP_NS(topOfMainStack)
#define __TZ_set_MSPLIM_NS(MainStackPtrLimit)
#define __TZ_set_PRIMASK_NS(priMask)
#define __TZ_set_PSP_NS(topOfProcStack)
#define __TZ_set_PSPLIM_NS(ProcStackPtrLimit)
#define __TZ_set_SP_NS(topOfStack)
#define __TZ_set_STACKSEAL_S(stackTop)
