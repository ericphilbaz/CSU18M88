
#include "CSU18M88.h"
#include "cs_drv_uart.h"
unsigned char  Uart_RxData,Uart_TxData;
/**
* @fn	void Drv_uart0_init(void)
* @brief uart0 init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_uart0_init(void)
{
	ROOT=0x35;
	ROOT=0xc8;
	ROOT=0x17;
	ROOT_EN=1;                      //开启受保护SFR写使能
	
	UART0DIV_0=0;					//UART1_DIV[2:0] = 3'b000 --> UART0_CLK = ICK/2
	UART0DIV_1=0;
	UART0DIV_2=0;
	
	UR0_BRR0=208;
    UR0_BRR1=3;						//UR1_BRR1:(上电默认值为:00000000)
									//Bit7	AUTO_BR: 自动波特率使能 --> <相当于外部校准SOC UART BR>
									//	0 = 自动波特率功能未打开，不需要软件写0
									//	1 = 打开自动波特率功能，要求外部输入数据为55H，硬件清零

									//Bit6-4	RFU:

									//Bit3-0	BRR1: 波特率设置寄存器1，小数部分													
    UR0_CR2=00;
									//UR0_CR2:(上电默认值为:00110011)
									//Bit7	NC

									//Bit6-4	TXF_WATER_LEVEL: TXFIFO的数据量小于设定值后，报发送水线中断
									//	000 = 当TX_FIFO数据量=0时，报发送水线
									//	001 = 当TX_FIFO数据量<=1时，报发送水线中断
									//	010 = 当TX_FIFO数据量<=2时，报发送水线中断
									//	011 = 当TX_FIFO数据量<=3时，报发送水线中断
									//	100 = 当TX_FIFO数据量<=4时，报发送水线中断
									//	101 = 当TX_FIFO数据量<=5时，报发送水线中断
									//	110 = 当TX_FIFO数据量<=6时，报发送水线中断
									//   111 = 当TX_FIFO数据量<=7时，报发送水线中断

									//Bit3	RFU:

									//Bit2-0	RXF_WATER_LEVEL: RXFIFO的数据量大于设定值后，报接收水线中断
									//	000 = 当RX_FIFO数据>0时，报接收水线中断，相当于非空中断
									//	001 = 当RX_FIFO数据>1时，报接收水线中断
									//	010 = 当RX_FIFO数据>2时，报接收水线中断
									//	011 = 当RX_FIFO数据>3时，报接收水线中断
									//	100 = 当RX_FIFO数据>4时，报接收水线中断
									//	101 = 当RX_FIFO数据>5时，报接收水线中断
									//	110 = 当RX_FIFO数据>6时，报接收水线中断
									//  111 = 当RX_FIFO数据存满时，报接收水线中断    
//<注：进入Sleep后，可以采用UART唤醒中断进行唤醒。CPU被唤醒后，可以查询此Bit3。如果RX_BUSY=0，表示此次唤醒可能是由于干扰造成。>	
	UR0_ST=0x00;
									//UR0_CR2:(上电默认值为:00000000)
									//Bit7-4	NC

									//Bit3	RX_BUSY: 接收Busy指示信号
									//	0 = 表示接收端未进行接收
									//	1 = 表示接收端正在接收中

									//Bit2	TX_BUSY: 发送寄存器TX_REG的数据是否全部串行发送完毕
									//	0 = 已经全部发送完毕
									//	1 = 还未全部发送完毕

									//Bit1	RXOV_ERR: 接收RXFIFO溢出错误标志，可以触发错误中断，硬件置1，软件清0
									//	0 = 未发现溢出错误
									//	1 = 发现溢出错误

									//Bit0	STOP_ERR: 接收停止位错误标志，可以触发错误中断，硬件置1，软件清0
									//	0 = 接收时未发现停止位错误
									//	1 = 接收时发现停止位错误
									
	UR0_CR1=0x0F;
									//UR0_CR1:(上电默认值为:00000000)
									//Bit7	TX9D: 发送数据第9位
									//	0 = 发送第9位数据为0
									//	1 = 发送第9位数据为1

									//Bit6	RX9D: 接收数据第9位(Read Only)
									//	0 = 接收第9位数据为0
									//	1 = 接收第9位数据为1

									//Bit5	TX9_EN: 发送数据第9位使能
									//	0 = 关闭发送第9位*
									//	1 = 使能发送第9位

									//Bit4	RX9_EN: 接收数据第9位使能
									//	0 = 关闭接收第9位*
									//	1 = 使能接收第9位

									//Bit3	RX_EN: 接收控制选择
									//	0 = 禁止接收*
									//	1 = 允许接收

									//Bit2	TX_EN: 发送使能
									//	0 = 发送使能关闭
									//	1 = 发送使能打开*

									//Bit1	UART1_SEL: UART1接口选择							
									//	0 = PT1.2作为串口0的RX；PT1.3 作为串口0的TX
									//	1 = PT2.3作为串口0的RX；PT2.2 作为串口0的TX*
									//Bit0	UART1_EN: UART1使能控制
									//	0 = 关闭UART
									//	1 = 打开UART*	
	UR0_RNIE=1;
	UR0_RHIE=1;
	UR0_TEIE=0;	
	ROOT_EN=0;	
	ROOT=0;
}

#if 1
/**
* @fn	void Drv_Uart1_init(void)
* @brief Uart1 init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_Uart1_Init(void)
{
	ROOT=0x35;
	ROOT=0xc8;
	ROOT=0x17;
	ROOT_EN=1;                      //开启受保护SFR写使能
	
	UART1DIV_0=1;					//UART1_DIV[2:0] = 3'b000 --> UART0_CLK = ICK/2
	UART1DIV_1=0;
	UART0DIV_2=0;
	
	UR1_BRR0=208;
    UR1_BRR1=3;						//UR1_BRR1:(上电默认值为:00000000)
									//Bit7	AUTO_BR: 自动波特率使能 --> <相当于外部校准SOC UART BR>
									//	0 = 自动波特率功能未打开，不需要软件写0
									//	1 = 打开自动波特率功能，要求外部输入数据为55H，硬件清零

									//Bit6-4	RFU:

									//Bit3-0	BRR1: 波特率设置寄存器1，小数部分													
    UR1_CR2=00;
									//UR0_CR2:(上电默认值为:00110011)
									//Bit7	NC

									//Bit6-4	TXF_WATER_LEVEL: TXFIFO的数据量小于设定值后，报发送水线中断
									//	000 = 当TX_FIFO数据量=0时，报发送水线
									//	001 = 当TX_FIFO数据量<=1时，报发送水线中断
									//	010 = 当TX_FIFO数据量<=2时，报发送水线中断
									//	011 = 当TX_FIFO数据量<=3时，报发送水线中断
									//	100 = 当TX_FIFO数据量<=4时，报发送水线中断
									//	101 = 当TX_FIFO数据量<=5时，报发送水线中断
									//	110 = 当TX_FIFO数据量<=6时，报发送水线中断
									//   111 = 当TX_FIFO数据量<=7时，报发送水线中断

									//Bit3	RFU:

									//Bit2-0	RXF_WATER_LEVEL: RXFIFO的数据量大于设定值后，报接收水线中断
									//	000 = 当RX_FIFO数据>0时，报接收水线中断，相当于非空中断
									//	001 = 当RX_FIFO数据>1时，报接收水线中断
									//	010 = 当RX_FIFO数据>2时，报接收水线中断
									//	011 = 当RX_FIFO数据>3时，报接收水线中断
									//	100 = 当RX_FIFO数据>4时，报接收水线中断
									//	101 = 当RX_FIFO数据>5时，报接收水线中断
									//	110 = 当RX_FIFO数据>6时，报接收水线中断
									//  111 = 当RX_FIFO数据存满时，报接收水线中断    
//<注：进入Sleep后，可以采用UART唤醒中断进行唤醒。CPU被唤醒后，可以查询此Bit3。如果RX_BUSY=0，表示此次唤醒可能是由于干扰造成。>	
	UR1_ST=0x00;
									//UR0_CR2:(上电默认值为:00000000)
									//Bit7-4	NC

									//Bit3	RX_BUSY: 接收Busy指示信号
									//	0 = 表示接收端未进行接收
									//	1 = 表示接收端正在接收中

									//Bit2	TX_BUSY: 发送寄存器TX_REG的数据是否全部串行发送完毕
									//	0 = 已经全部发送完毕
									//	1 = 还未全部发送完毕

									//Bit1	RXOV_ERR: 接收RXFIFO溢出错误标志，可以触发错误中断，硬件置1，软件清0
									//	0 = 未发现溢出错误
									//	1 = 发现溢出错误

									//Bit0	STOP_ERR: 接收停止位错误标志，可以触发错误中断，硬件置1，软件清0
									//	0 = 接收时未发现停止位错误
									//	1 = 接收时发现停止位错误
									
	UR1_CR1=0x0f;
									//UR0_CR1:(上电默认值为:00000000)
									//Bit7	TX9D: 发送数据第9位
									//	0 = 发送第9位数据为0
									//	1 = 发送第9位数据为1

									//Bit6	RX9D: 接收数据第9位(Read Only)
									//	0 = 接收第9位数据为0
									//	1 = 接收第9位数据为1

									//Bit5	TX9_EN: 发送数据第9位使能
									//	0 = 关闭发送第9位*
									//	1 = 使能发送第9位

									//Bit4	RX9_EN: 接收数据第9位使能
									//	0 = 关闭接收第9位*
									//	1 = 使能接收第9位

									//Bit3	RX_EN: 接收控制选择
									//	0 = 禁止接收
									//	1 = 允许接收*

									//Bit2	TX_EN: 发送使能
									//	0 = 发送使能关闭
									//	1 = 发送使能打开*

									//Bit1	UART1_SEL: UART1接口选择
									//	0 = PT1.7作为串口0的RX；PT1.6作为串口0的TX*
									//	1 = PT2.6作为串口0的RX；PT2.7作为串口0的TX

									//Bit0	UART1_EN: UART1使能控制
									//	0 = 关闭UART
									//	1 = 打开UART*	
//	UR1_RNIE=1;
//	UR1_TEIE=0;	
	UR1_RNIE=1;
	UR1_RHIE=1;
	UR1_TEIE=0;	
	ROOT_EN=0;	
	ROOT=0;
}
#endif


/**
* @fn void Drv_Uart_Send_OneByte(unsigned char  Uart_Data)
* @brief Send a byte
* @param[out] none.
* @param[in] Uart_Data
* @return none.
*/
void drv_uart_send_onebyte(unsigned char  Uart_Data)
{
    UR1_TX_REG=Uart_Data;
    asm("NOP");
    asm("NOP");
    asm("NOP");
    asm("NOP");
    while(UR1_TEIF==0);
    UR1_TEIF=0;
}

/**
* @fn void Drv_Uart_RxFlag_Clear(unsigned char  Uart_Data)
* @brief Clear the UART receive flag bit
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_uart_rxflag_clear(void)
{
    unsigned char i;
    do
	{
		i=UR0_RX_REG;
	}while(UR0_RNIF);
	
}
/**
* @fn void  Drv_send_str(char str1[])
* @brief Send N bytes
* @param[out] none.
* @param[in] char str1[].
* @return none.
*/
void drv_send_str(char str1[])
{
	unsigned char i = 0;
	while(str1[i] != '\0')
	{
	   drv_uart_send_onebyte(str1[i]);
	   i++;      // 下一个字符
    }
}
/**
* @fn void Drv_send_num(unsigned long ad_data)
* @brief Convert ASIIC
* @param[out] none.
* @param[in] unsigned long ad_data.
* @return none.
*/
void drv_send_num(unsigned long ad_data)
{
	unsigned char i = 0;
    char ad_temp[10];
	if(ad_data > 10000000)
		ad_temp[i++] = ad_data /10000000 + '0';
	if(ad_data > 1000000)
		ad_temp[i++] = ad_data %10000000 /1000000 + '0';
	if(ad_data > 100000)
		ad_temp[i++] = ad_data %1000000 /100000 + '0';
	if(ad_data > 10000)
		ad_temp[i++] = ad_data %100000 /10000 + '0';
	if(ad_data > 1000)
		ad_temp[i++] = ad_data %10000 /1000 + '0';
		ad_temp[i++] = ad_data %1000 /100 + '0';
		ad_temp[i++] = ad_data %100 /10 + '0';
		ad_temp[i++] = ad_data %10 + '0';
		ad_temp[i++] = ' ';
		ad_temp[i++] = '\0';  
	drv_uart_send_onebyte('>');
	drv_send_str(ad_temp);
}