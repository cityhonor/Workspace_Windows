#include "Std_Types.hpp"

#include "Types_SwcServiceEcuM.hpp"

#include "WrapNv_Cfg.hpp"
#include "MemConversion.hpp"
#include "DcmCore_DslDsd_Inf.hpp"

#if(DCM_CFG_STORING_ENABLED != DCM_CFG_OFF)
#define DCM_START_SEC_CODE
#include "Dcm_Cfg_MemMap.hpp"
FUNC(void,DCM_APPL_CODE) DcmAppl_Switch_DcmBootLoaderReset(void){
   vuint8     nvBuffer[3];
   tFblResult status       = (tFblResult)ApplFblNvReadProgAttemptsCounter(nvBuffer);
   vuint8     progAttempts = (vuint8)FblMemGetInteger(kEepSizeProgAttemptsCounter, nvBuffer);
   if(status == kFblOk){
      progAttempts = FblInvert8Bit(progAttempts);
      progAttempts++;
      progAttempts = FblInvert8Bit(progAttempts);
      FblMemSetInteger(kEepSizeProgAttemptsCounter, progAttempts, nvBuffer);
      status = (tFblResult)ApplFblNvWriteProgAttemptsCounter(nvBuffer);
   }
   nvBuffer[0] = kEepFblReprogram;
   ApplFblNvWriteProgReqFlag(nvBuffer);
   nvBuffer[0] = RESET_RESPONSE_ECURESET_REQUIRED;
   ApplFblNvWriteResetResponseFlag(nvBuffer);
   infSwcApplEcuMSwcApplDcm_vPrepareReset(0);
}
#define DCM_STOP_SEC_CODE
#include "Dcm_Cfg_MemMap.hpp"
#endif
