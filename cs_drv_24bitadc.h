#ifndef	_CS_DRV_24BITADC_H
#define	_CS_DRV_24BITADC_H

/**
* @fn void Drv_24BitADC_Init(void)
* @brief 24 bit ADC initialization
* @param[out] none.
* @param[in] none.
* @return none.
*/
void  drv_24BitADC_init(void);
/**
* @fn	unsigned long Read_24BitAD_Value(void)
* @brief Gets the 24ADC code value
* @param[out] none.
* @param[in] none.
* @return none.
*/
unsigned long read_24BitAD_value(void);


#endif