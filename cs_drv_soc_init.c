#include "CSU18M88.h"
#include "cs_drv_soc_init.h"
#include "cs_drv_define_bit.h"
/**
* @fn	void Drv_SOC_Init(void)
* @brief soc init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_soc_init(void)
{
	//-----------------------------------------------------------------
	//清中断使能/状态寄存器
	//-----------------------------------------------------------------
	//需要判断首次上电，以免造成INTF清零
	//需要判断首次上电，以免造成INTF清零
	//需要判断首次上电，以免造成INTF清零
	INTE=0;
	INTE2=0;
	INTE3=0;
	INTF=0;
	INTF2=0;
	INTF3=0;
	BSR=0;
	//-----------------------------------------------------------------
	//设置MCK寄存器：CPUCLK = MCK/4 = 8MHz/4 = 2MHz
	//-----------------------------------------------------------------							
	MCK=0X32;					
									/*****************************************
									;MCK:(上电默认值为:00100010)
									;Bit7   ick_ldo_by: ick_ldo_bypass功能控制									
									;	0 = 打开ICK模块的LDO*
									;	1 = 关闭ICK模块的LDO

									;Bit6-4 M3_CK M2_CK M1_CK: 指令周期配置
									;	000 = MCK/32
									;	001 = MCK/16
									;	010 = MCK/8
									;	011 = MCK/4*
									;	1xx = MCK/2(不可配置)

									;Bit3	ECK_EN: 外部晶振1(32768Hz)启动开关
									;	0 = 外部晶振1关闭*
									;	1 = 外部晶振1打开

									;Bit2	WDT_CLK_EN: 内部WDT时钟启动开关
									;	0 = WDT_CLK关闭
									;	1 = WDT_CLK启动*

									;Bit1	ICK_EN: 内部高速时钟启动开关
									;	0 = 内部时钟关闭
									;	1 = 内部时钟启动*

									;Bit0	CLK_SEL: 时钟源选择位
									;	0 = 内部时钟作为系统时钟*
									;	1 = 外部晶振作为系统时钟
									*****************************************/
}
/**
* @fn void  drv_back_light_init(void)
* @brief back light init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_back_light_init(void)
{
 	PT1PU_4=0;      //断开上拉
    PT1EN_4=1;      //定义为输出
}

/**
* @fn void  drv_key_init(void)
* @brief key init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_key_init(void)
{
    PT1PU_3=1;      //定义为上拉
    PT1EN_3=0;      //定义为输入
}

/**
* @fn void  drv_bell_init(void)
* @brief bell init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_bell_init(void)
{
    PT1PU_5=1;      //定义为上拉
    PT1EN_5=0;      //定义为输入
}


