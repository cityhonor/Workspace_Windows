#include "Std_Types.hpp"

#include "Types_SwcServiceEcuM.hpp"

#include "DcmCore_DslDsd_Inf.hpp"

#if(DCM_CFG_STORING_ENABLED != DCM_CFG_OFF)
#define DCM_START_SEC_CODE
#include "Dcm_Cfg_MemMap.hpp"
FUNC(void,DCM_APPL_CODE)  DcmAppl_Switch_DcmSysSupplierReset(void){infSwcApplEcuMSwcApplDcm_vPrepareSmartTesterJump(50);}
#define DCM_STOP_SEC_CODE
#include "Dcm_Cfg_MemMap.hpp"
#endif
