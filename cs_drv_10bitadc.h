#ifndef CS_DRV_10BITADC_H
#define	CS_DRV_10BITADC_H

/**
* @fn unsigned int Drv_Read_10BitADC_Value(void)
* @brief 10 bit ADC channel initialization
* @param[out] none.
* @param[in] ADCAisle :10 bit ADC channel selection .
* @return 10bit_ADC_Value.
*/
void drv_10BitADC_init(int ADCAisle);
/**
* @fn unsigned int Drv_Read_10BitADC_Value(void)
* @brief Gets the 10ADC code value
* @param[out] none.
* @param[in] none.
* @return 10bit_ADC_Value.
*/
unsigned long drv_read_10BitADC_value(void);

#endif