#include "Std_Types.hpp"

#include "iTpms_Interface.hpp"
#include "SwcApplTpms_NvM_If.hpp"
#include "SwcApplTpms_Rte.hpp"
#include "SwcApplTpms_NvM.hpp"

void NvM_WriteData_PressureFL    (uint8  lptru8Data ){WriteMember2Blocks (6, 1, &lptru8Data);}
void NvM_ReadData_PressureFL     (uint8* ucpData){ReadBlock2Member   (6, 1, ucpData);}
void NvM_WriteData_PressureFR    (uint8  lptru8Data ){WriteMember2Blocks (6, 2, &lptru8Data);}
void NvM_ReadData_PressureFR     (uint8* ucpData){ReadBlock2Member   (6, 2, ucpData);}
void NvM_WriteData_PressureRL    (uint8  lptru8Data ){WriteMember2Blocks (6, 3, &lptru8Data);}
void NvM_ReadData_PressureRL     (uint8* ucpData){ReadBlock2Member   (6, 3, ucpData);}
void NvM_WriteData_PressureRR    (uint8  lptru8Data ){WriteMember2Blocks (6, 4, &lptru8Data);}
void NvM_ReadData_PressureRR     (uint8* ucpData){ReadBlock2Member   (6, 4, ucpData);}
void NvM_WriteData_TemperatureFL (uint8  lptru8Data ){WriteMember2Blocks (6, 5, &lptru8Data);}
void NvM_ReadData_TemperatureFL  (uint8* ucpData){ReadBlock2Member   (6, 5, ucpData);}
void NvM_WriteData_TemperatureFR (uint8  lptru8Data ){WriteMember2Blocks (6, 6, &lptru8Data);}
void NvM_ReadData_TemperatureFR  (uint8* ucpData){ReadBlock2Member   (6, 6, ucpData);}
void NvM_WriteData_TemperatureRL (uint8  lptru8Data ){WriteMember2Blocks (6, 7, &lptru8Data);}
void NvM_ReadData_TemperatureRL  (uint8* ucpData){ReadBlock2Member   (6, 7, ucpData);}
void NvM_WriteData_TemperatureRR (uint8  lptru8Data ){WriteMember2Blocks (6, 8, &lptru8Data);}
void NvM_ReadData_TemperatureRR  (uint8* ucpData){ReadBlock2Member   (6, 8, ucpData);}

