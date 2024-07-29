#ifndef	_CS_DRV_E2PROM_H
#define	_CS_DRV_E2PROM_H

/**
* @fn void drv_e2prom_writeByte_code(unsigned int addr, unsigned int dat)
* @brief  .
* @param[out] none.
* @param[in] .
* @return Data.
*/
void drv_e2prom_writeByte_code(unsigned int addr, unsigned int dat);

/**
* @fn unsigned int F_Drv_E2prom_ReadByte_Code(unsigned int addr)
* @brief _E2prom ReadByte.
* @param[out] none.
* @param[in]unsigned int addr.
* @return Data.
*/
unsigned int drv_e2prom_readByte_Code(unsigned int addr);
/**
* @fn void F_Drv_E2prom_WriteByte(char Address, char Data)
* @brief E2prom WriteByte.
* @param[out] none.
* @param[inunsigned char addr, unsigned char dat 
* @return none.
*/
void drv_e2prom_writeByte(unsigned char addr, unsigned char dat);
/**
* @fn void F_Drv_E2prom_WriteByte(char Address, char Data)
* @brief E2prom ReadByte.
* @param[out] none.
* @param[in]char Address.
* @return Data.
*/
unsigned char drv_e2prom_readByte(unsigned char addr);

#endif