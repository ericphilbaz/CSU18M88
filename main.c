//============================================
// filename: main.c
// chip    : CSU18M88
// author  :
// date    : 2018-09-14
//============================================
#include "CSU18M88.h"
#include "cs_drv_soc_init.h"
#include "cs_drv_24bitadc.h"
#include "cs_drv_10bitadc.h"
#include "cs_drv_uart.h"
#include "cs_drv_lcd.h"
#include "cs_drv_delay.h"
#include "cs_drv_define_bit.h"
sbit ADC_Ready;
unsigned long temp0,temp1;
//============================================
// interrupt function
//============================================
void INT_FUNCTION(void) interrupt
{
	if(UR1_RNIF==1)
	{
		temp0=UR1_RX_REG;
	}
	if(ADIF)								//24bit-ADC中断
	{
	  	ADIF=0;
	  	ADC_Ready=1; 
	}
	
}

//============================================
// program start
//============================================
void main()
{
	unsigned char  a[5];
	int i;
	drv_soc_init();
	drv_Uart1_Init();
	drv_24BitADC_init();
	GIE=1;
	drv_10BitADC_init(7);
	drv_lcd_init();
	while(1)
	{
		i=4;
		a[1]=i;
		//lcd测试程序
		for(i=0;i<=15;i++)
		{
			R_APP_BUFFER8=i;
			R_APP_BUFFER1=i;
			R_APP_BUFFER2=i;
			R_APP_BUFFER3=i;
			R_APP_BUFFER4=i;
			R_APP_BUFFER5=i;
			R_APP_BUFFER6=i;
			R_APP_BUFFER7=i;
			R_APP_BUFFER8=i;
			R_APP_BUFFER9=i;
			R_APP_BUFFER10_BIT2=1;
			R_APP_BUFFER10_BIT6=1;
			drv_lcd_refresh();
			delay(300);
		}			
	}	
}
