#include "CSU18M88.h"
#include "cs_drv_10bitadc.h"
#include "cs_drv_define_bit.h"
#include "cs_drv_delay.h"
/**
* @fn unsigned int Drv_Read_10BitADC_Value(void)
* @brief 10 bit ADC channel initialization
* @param[out] none.
* @param[in] ADCAisle :10 bit ADC channel selection .
* @return none.
*/
void drv_10BitADC_init(int ADCAisle)
{
	switch(ADCAisle)
	{
	case 0:
		PT2PU_7=0;			//关闭上拉
		PT2EN_7=0;			//设置为输入
		AIENB=0xFE;			//设置PT2_7为模拟输入
		AD2_REF=0;          //设置参考电压
		AD2OH=0x80;			//使能10bit_ADC,通道选择PT2.7
		break;
	case 1:
		PT2PU_6=0;			//关闭上拉
		PT2EN_6=0;			//设置为输入
		AIENB=0xFD;			//设置PT2_6为模拟输入
		AD2_REF=0;          //设置参考电压
		AD2OH=0x84;			//使能10bit_ADC,通道选择PT2.6
		break;
	case 2:	
		PT2PU_3=0;			//关闭上拉
		PT2EN_3=0;			//设置为输入
		AIENB=0xFB;			//设置PT2_3为模拟输入
		AD2_REF=0;          //设置参考电压
		AD2OH=0x88;			//使能10bit_ADC,通道选择PT2.3
		break;
	case 3:
		PT2PU_2=0;			//关闭上拉
		PT2EN_2=0;			//设置为输入
		AIENB=0xF7;			//设置PT2_2为模拟输入
		AD2_REF=0;          //设置参考电压
		AD2OH=0x8C;			//使能10bit_ADC,通道选择PT2.2
		break;
	case 4:	
		PT2PU_1=0;			//关闭上拉
		PT2EN_1=0;			//设置为输入
		AIENB=0xEF;			//设置PT2_1为模拟输入
		AD2OH=0x90;			//使能10bit_ADC,通道选择PT2.1
		break;
	case 5:	
		PT2_0=0;
		PT2PU_0=0;			//关闭上拉
		PT2EN_0=0;			//设置为输入	
		AIENB=0xDF;			//设置PT2_0为模拟输入
		AD2_REF=0;          //设置参考电压
		AD2OH=0x94;			//使能10bit_ADC,通道选择PT2.0
		break;
	case 6:	
		PT1PU_1=0;			//关闭上拉
		PT1EN_1=0;			//设置为输入
		AIENB3=1;
		AIENB=0xBF;			//设置PT1_1为模拟输入
		AD2_REF=0;          //设置参考电压
		AD2OH=0x98;			//使能10bit_ADC,通道选择PT1.1
		break;		
	case 7:
		PT1PU_0=0;			//关闭上拉
		PT1EN_0=0;			//设置为输入
		AIENB3=1;
		AIENB=0x7F;			//设置PT1_0为模拟输入
		AD2_REF=0;          //设置参考电压
		AD2OH=0x9c;			//使能10bit_ADC,通道选择PT1.0
		break;	
		default:
		break;
	}
	delay(10);
}
/**
* @fn unsigned int Drv_Read_10BitADC_Value(void)
* @brief Gets the 10ADC code value
* @param[out] none.
* @param[in] none.
* @return 10bit_ADC_Value.
*/
unsigned long drv_read_10BitADC_value(void)
{
	unsigned long TenBit_ADC_Value=0;
	AD2START=1;								//开启AD转换
	while(AD2START==1)						//等待AD值，转换完毕后AD2START=0，需要重新置1才能开始新的转换操作	
	{
	}
 	TenBit_ADC_Value = AD2OH&0x03;
	TenBit_ADC_Value = TenBit_ADC_Value << 8;
	TenBit_ADC_Value = TenBit_ADC_Value + AD2OL;		
	return TenBit_ADC_Value;
}