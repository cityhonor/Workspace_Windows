#include "Std_Types.hpp"
#include <iostream>

#include "ReSimCmd.hpp"

static std::string str;
static uint8 u8IndexChar;
uint8 au8BufCmd[64];

/******************************************************************************/
//TBD: Duplicated code, make library
/******************************************************************************/
static uint8 Ascii2Hex(uint8 c){
        if(c>='0'&&c<='9'){return(uint8)(c-'0');}
   else if(c>='A'&&c<='F'){return(uint8)(c-'A'+10);}
   else if(c>='a'&&c<='f'){return(uint8)(c-'a'+10);}
   else                   {return 0;}
}

/******************************************************************************/
//TBD: Duplicated code, make library
/******************************************************************************/
static uint8 GetNibble(void){
   uint8 chRead;
   do{
      chRead = str[u8IndexChar++];
   }while(
     !(
            (('0' <= chRead) && ('9' >= chRead))
         || (('a' <= chRead) && ('f' >= chRead))
         || (('A' <= chRead) && ('F' >= chRead))
      )
   );
   return chRead;
}

/******************************************************************************/
//TBD: Duplicated code, make library
/******************************************************************************/
static uint8 GetByte(void){
   uint8  u8Byte  = (Ascii2Hex(GetNibble()));
          u8Byte  = (u8Byte << 4) & 0xF0;
          u8Byte |= Ascii2Hex(GetNibble());
   return u8Byte;
}

void ReSimCmd_Read(void){
   u8IndexChar = 0;
// str = '\0'; TBD: study material
// memclr(au8BufCmd); TBD: study material
   std::cin>>str;
   au8BufCmd[0] = GetByte();
   printf("Received command: 0x%2.2X", au8BufCmd[0]);
   for(
      uint8 u8IndexByte = 1;
            u8IndexByte < au8BufCmd[0];
            u8IndexByte ++
   ){
      au8BufCmd[u8IndexByte] = GetByte();
      printf(" 0x%2.2X", au8BufCmd[u8IndexByte]);
   }
}

void ReSimCmd_InitFunction(void){
}

void ReSimCmd_MainFunction(void){
   std::cout<<std::endl<<"$cmd:\\>";
   ReSimCmd_Read();
}
