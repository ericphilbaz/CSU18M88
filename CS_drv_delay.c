#include  "CSU18M88.h"
#include "cs_drv_delay.h"


void delay(unsigned int ms)//软件延时10ms
{
	unsigned int i,j;
	for(j=0;j<=ms;j++)
	{
		for(i=0;i<51;i++)
		{
			asm("nop");
		}	
	}

}

void delay_10us()//延时10us
{
		asm("nop");
		asm("nop");
		asm("nop");
		asm("nop");	
		asm("nop");
		asm("nop");
		asm("nop");			
		asm("nop");
		asm("nop");
		asm("nop");	
		asm("nop");
}