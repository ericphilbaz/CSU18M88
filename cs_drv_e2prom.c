#include "CSU18M88.h"
#include "cs_drv_e2prom.h"


bank0 unsigned char EEPROM_Data @ 0x82 ;
/**
* @fn void drv_e2prom_writeByte_code(unsigned int addr, unsigned int dat)
* @brief  .
* @param[out] none.
* @param[in] .
* @return Data.
*/
void drv_e2prom_writeByte_code(unsigned int addr, unsigned int dat)
{
 	while(1);
}

/**
* @fn unsigned int F_Drv_E2prom_ReadByte_Code(unsigned int addr)
* @brief _E2prom ReadByte.
* @param[out] none.
* @param[in]unsigned int addr.
* @return Data.
*/
unsigned int drv_e2prom_readByte_Code(unsigned int addr)
{
	unsigned int dat;
	
	GIE = 0;
	EADRH = (addr>>8);
	EADRL = addr;	
	EDAT = (dat>>8);
	EEPROM_Data = dat;	
	asm("MOVP");
	dat = WORK;
	dat |= (EDAT<<8);
	GIE = 1;
	return dat;
}

/**
* @fn void F_Drv_E2prom_WriteByte(char Address, char Data)
* @brief E2prom WriteByte.
* @param[out] none.
* @param[inunsigned char addr, unsigned char dat 
* @return none.
*/
void drv_e2prom_writeByte(unsigned char addr, unsigned char dat)
{
	GIE = 0; //关中断
	
	//保护 eeprom数据
	if(addr < 4)
	{
		GIE = 1; //开中断
		return;
	}
	if(addr>127)
	{
		GIE = 1; //开中断
		return;
	}

	EADRH = 0x20;
	EADRL = addr;

	EEPROM_Data = dat;
	
	if(EADRL < 4)
	{
		GIE = 1;
		return;
	}	
	EOPEN = 0x96;
	EOPEN = 0x69;
	EOPEN = 0x5A;
		
	WORK = EEPROM_Data;
	asm("TBLP 100");
	
	EADRH = 0x20;
	EADRL = 0x70;
	GIE = 1; //开中断
}

/**
* @fn void F_Drv_E2prom_WriteByte(char Address, char Data)
* @brief E2prom ReadByte.
* @param[out] none.
* @param[in]char Address.
* @return Data.
*/
unsigned char drv_e2prom_readByte(unsigned char addr)
{
	unsigned char dat;
	GIE = 0; //关中断

	EADRH = 0x20;
	EADRL = addr;

	asm("MOVP");
	dat = WORK;	
	GIE = 1; //开中断	
	return dat;
}


