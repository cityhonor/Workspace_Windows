#include "Std_Types.hpp"

#include "DcmMemCheck.hpp"
#include "LibAutosar_Crc.hpp"
#include "version.hpp"

extern boolean DcmVerifyApplicationMemory(void){
   uint32 ulCrc32Calculated = LibAutosarCrc_u32Calculate(
         (const uint8*)0x20100U
      ,  0x57ae0U
      ,  LibAutosarCrc_dValueInitial32
      ,  TRUE
   );

   tDescriptorBlock* pApplMetaData = VERSION_GetPointerToDescriptorBlock(cAPP);

   uint32 ulCrcRom = *((uint32*)&(pApplMetaData->ucHash));

   
   return (
         ulCrcRom
      == ulCrc32Calculated
   )
   ? TRUE
   : FALSE
   ;
}