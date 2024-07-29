#include "CSU18M88.h"
#include "cs_drv_24bitadc.h"
#include "cs_drv_delay.h"
/**
* @fn void Drv_24BitADC_Init(void)
* @brief 24 bit ADC initialization
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_24BitADC_init(void)
{
	//-----------------------------------------------------------------
	//设置24bit-ADC
	//-----------------------------------------------------------------
	//VS=2.45V/DR=30.5Hz
	//如果使用2节干电池时，VS选择2.35V
	//-----------------------------------------------------------------	
	ANACFG=0xF0;
	//ANACFG=0x50;
									//ANACFG:(上电默认值为:00000000)
									//Bit7	LDOEN: LDO电源使能信号
									//	0 = LDO电源不使能*
									//	1 = LDO电源使能

									//Bit6-5	LDOS[1:0]: VS电压值选择
									//	00 = VS=3.3V
									//	01 = VS=3.0V
									//	10 = VS=2.45V*
									//	11 = VS=2.35V

									//Bit4	BGR_ENB: bandgap使能
									//	0 = 打开bandgap*
									//	1 = 关闭bandgap

									//Bit3	BGID: ADC模式选择，与METCH[3]控制ADC模式(Metch[3]默认值0)
									//	BGID=0/METCH[3]=x	低功耗模式*
									//	BGID=1/METCH[3]=0	高性能模式
									//	BGID=1/METCH[3]=1	加强高性能模式

									//Bit2-1	SINL[1:0]: ADC通道选择
									//	00 = 24bit-ADC输入端连接到AIN0和AIN1，AIN0为Vin+，AIN1为Vin-*
									//	01 = 内短
									//	10 = 24bit-ADC输入端连接到TEMP
									//	11 = 24bit-ADC输入端连接到AIN2和AIN3，AIN2为Vin+，AIN3为Vin-

									//Bit0	ADEN: 24Bit-ADC使能标志
									//	0 = 24bit-ADC不使能*
									//	1 = 24bit-ADC使能
	AD2EN=0;
	AD3_SL_1=1;
	AD3_SL_0=1;
	AD2O_9=0;
	AD2O_8=1;						//	4'b1101 = CK_SMP/8192 = 30.5Hz<详见Datasheet>

	
    ADCON |= 0x0E;
    ADCON &= ~0x01;
	//ADCFG=0xe8;
	ADCFG=0x00;
									//111  10 0 00b			;ADCFG:(上电默认值为:00000000)160
									//Bit7-5	ADSC/F_GAIN[1:0]: ADC的采样时钟频率选择(CK_SMP)
									//	0/00 = ICK/4/8
									//	0/01 = ICK/4/8
									//	0/10 = ICK/4/12
									//	0/11 = ICK/4/16
									//	1/00 = ICK/2/8
									//	1/01 = ICK/2/8
									//	1/10 = ICK/2/12
									//	1/11 = ICK/2/16* --> CK_SMP = 8MHz/2/16 = 250KHz

									//Bit4-2	S_GAIN[1:0]/R_GAIN:

									//ADC的PGA选择: F_GAIN[1:0]/R_GAIN/S_GAIN[1:0]
									//	00/0/00 = Gain = 1
									//	00/0/01 = Gain = 10
									//	00/0/10 = Gain = 20
									//	00/0/11 = Gain = 21
									//	00/1/00 = Gain = 2.5
									//	00/1/01 = Gain = 25
									//	00/1/10 = Gain = 50
									//	00/1/11 = Gain = 52.5

									//	01/0/00 = Gain = 8
									//	01/0/01 = Gain = 80
									//	01/0/10 = Gain = 160
									//	01/0/11 = Gain = 168
									//	01/1/00 = Gain = 20
									//	01/1/01 = Gain = 200
									//	01/1/10 = Gain = 400
									//	01/1/11 = Gain = 420

									//	10/0/00 = Gain = 12
									//	10/0/01 = Gain = 120
									//	10/0/10 = Gain = 240
									//	10/0/11 = Gain = 252
									//	10/1/00 = Gain = 30
									//	10/1/01 = Gain = 300
									//	10/1/10 = Gain = 600
									//	10/1/11 = Gain = 630

									//	11/0/00 = Gain = 16
									//	11/0/01 = Gain = 160
									//	11/0/10 = Gain = 320
									//	11/0/11 = Gain = 336
									//	11/1/00 = Gain = 40
									//	11/1/01 = Gain = 400*
									//	11/1/10 = Gain = 800
									//	11/1/11 = Gain = 840

									//Bit1-0	CHOPM[1:0]: 24bit-ADC斩波选择
									//	00 = 斩波频率设置为采样频率的1/32*
									//	01 = 关闭斩波
									//	10 = 斩波频率设置为采样频率的1/256
									//	11 = 关闭斩波

									//<整机测试后在确定参数>
	//TEMPC=0xE0;
	TEMPC=0x60;
//	TEMPC=0x00;
	delay(5);
	ADIE=1;
	ADEN=1;							//使能24bit-ADC								
}
/**
* @fn	unsigned long Read_24BitAD_Value(void)
* @brief Gets the 24ADC code value
* @param[out] none.
* @param[in] none.
* @return none.
*/
unsigned long read_24BitAD_value(void)
{	
	unsigned long R_AD0 = 0;		//原始AD值
	R_AD0 = ADOH;// + 0x80;
	R_AD0 = R_AD0 << 8;
	R_AD0 = R_AD0 + ADOL;
	R_AD0 = R_AD0 << 8;
	R_AD0 = R_AD0 + ADOLL;
	return  R_AD0;
}