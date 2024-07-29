
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
	ROOT_EN=1;                      //�����ܱ���SFRдʹ��
	
	UART0DIV_0=0;					//UART1_DIV[2:0] = 3'b000 --> UART0_CLK = ICK/2
	UART0DIV_1=0;
	UART0DIV_2=0;
	
	UR0_BRR0=208;
    UR0_BRR1=3;						//UR1_BRR1:(�ϵ�Ĭ��ֵΪ:00000000)
									//Bit7	AUTO_BR: �Զ�������ʹ�� --> <�൱���ⲿУ׼SOC UART BR>
									//	0 = �Զ������ʹ���δ�򿪣�����Ҫ���д0
									//	1 = ���Զ������ʹ��ܣ�Ҫ���ⲿ��������Ϊ55H��Ӳ������

									//Bit6-4	RFU:

									//Bit3-0	BRR1: ���������üĴ���1��С������													
    UR0_CR2=00;
									//UR0_CR2:(�ϵ�Ĭ��ֵΪ:00110011)
									//Bit7	NC

									//Bit6-4	TXF_WATER_LEVEL: TXFIFO��������С���趨ֵ�󣬱�����ˮ���ж�
									//	000 = ��TX_FIFO������=0ʱ��������ˮ��
									//	001 = ��TX_FIFO������<=1ʱ��������ˮ���ж�
									//	010 = ��TX_FIFO������<=2ʱ��������ˮ���ж�
									//	011 = ��TX_FIFO������<=3ʱ��������ˮ���ж�
									//	100 = ��TX_FIFO������<=4ʱ��������ˮ���ж�
									//	101 = ��TX_FIFO������<=5ʱ��������ˮ���ж�
									//	110 = ��TX_FIFO������<=6ʱ��������ˮ���ж�
									//   111 = ��TX_FIFO������<=7ʱ��������ˮ���ж�

									//Bit3	RFU:

									//Bit2-0	RXF_WATER_LEVEL: RXFIFO�������������趨ֵ�󣬱�����ˮ���ж�
									//	000 = ��RX_FIFO����>0ʱ��������ˮ���жϣ��൱�ڷǿ��ж�
									//	001 = ��RX_FIFO����>1ʱ��������ˮ���ж�
									//	010 = ��RX_FIFO����>2ʱ��������ˮ���ж�
									//	011 = ��RX_FIFO����>3ʱ��������ˮ���ж�
									//	100 = ��RX_FIFO����>4ʱ��������ˮ���ж�
									//	101 = ��RX_FIFO����>5ʱ��������ˮ���ж�
									//	110 = ��RX_FIFO����>6ʱ��������ˮ���ж�
									//  111 = ��RX_FIFO���ݴ���ʱ��������ˮ���ж�    
//<ע������Sleep�󣬿��Բ���UART�����жϽ��л��ѡ�CPU�����Ѻ󣬿��Բ�ѯ��Bit3�����RX_BUSY=0����ʾ�˴λ��ѿ��������ڸ�����ɡ�>	
	UR0_ST=0x00;
									//UR0_CR2:(�ϵ�Ĭ��ֵΪ:00000000)
									//Bit7-4	NC

									//Bit3	RX_BUSY: ����Busyָʾ�ź�
									//	0 = ��ʾ���ն�δ���н���
									//	1 = ��ʾ���ն����ڽ�����

									//Bit2	TX_BUSY: ���ͼĴ���TX_REG�������Ƿ�ȫ�����з������
									//	0 = �Ѿ�ȫ���������
									//	1 = ��δȫ���������

									//Bit1	RXOV_ERR: ����RXFIFO��������־�����Դ��������жϣ�Ӳ����1�������0
									//	0 = δ�����������
									//	1 = �����������

									//Bit0	STOP_ERR: ����ֹͣλ�����־�����Դ��������жϣ�Ӳ����1�������0
									//	0 = ����ʱδ����ֹͣλ����
									//	1 = ����ʱ����ֹͣλ����
									
	UR0_CR1=0x0F;
									//UR0_CR1:(�ϵ�Ĭ��ֵΪ:00000000)
									//Bit7	TX9D: �������ݵ�9λ
									//	0 = ���͵�9λ����Ϊ0
									//	1 = ���͵�9λ����Ϊ1

									//Bit6	RX9D: �������ݵ�9λ(Read Only)
									//	0 = ���յ�9λ����Ϊ0
									//	1 = ���յ�9λ����Ϊ1

									//Bit5	TX9_EN: �������ݵ�9λʹ��
									//	0 = �رշ��͵�9λ*
									//	1 = ʹ�ܷ��͵�9λ

									//Bit4	RX9_EN: �������ݵ�9λʹ��
									//	0 = �رս��յ�9λ*
									//	1 = ʹ�ܽ��յ�9λ

									//Bit3	RX_EN: ���տ���ѡ��
									//	0 = ��ֹ����*
									//	1 = �������

									//Bit2	TX_EN: ����ʹ��
									//	0 = ����ʹ�ܹر�
									//	1 = ����ʹ�ܴ�*

									//Bit1	UART1_SEL: UART1�ӿ�ѡ��							
									//	0 = PT1.2��Ϊ����0��RX��PT1.3 ��Ϊ����0��TX
									//	1 = PT2.3��Ϊ����0��RX��PT2.2 ��Ϊ����0��TX*
									//Bit0	UART1_EN: UART1ʹ�ܿ���
									//	0 = �ر�UART
									//	1 = ��UART*	
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
	ROOT_EN=1;                      //�����ܱ���SFRдʹ��
	
	UART1DIV_0=1;					//UART1_DIV[2:0] = 3'b000 --> UART0_CLK = ICK/2
	UART1DIV_1=0;
	UART0DIV_2=0;
	
	UR1_BRR0=208;
    UR1_BRR1=3;						//UR1_BRR1:(�ϵ�Ĭ��ֵΪ:00000000)
									//Bit7	AUTO_BR: �Զ�������ʹ�� --> <�൱���ⲿУ׼SOC UART BR>
									//	0 = �Զ������ʹ���δ�򿪣�����Ҫ���д0
									//	1 = ���Զ������ʹ��ܣ�Ҫ���ⲿ��������Ϊ55H��Ӳ������

									//Bit6-4	RFU:

									//Bit3-0	BRR1: ���������üĴ���1��С������													
    UR1_CR2=00;
									//UR0_CR2:(�ϵ�Ĭ��ֵΪ:00110011)
									//Bit7	NC

									//Bit6-4	TXF_WATER_LEVEL: TXFIFO��������С���趨ֵ�󣬱�����ˮ���ж�
									//	000 = ��TX_FIFO������=0ʱ��������ˮ��
									//	001 = ��TX_FIFO������<=1ʱ��������ˮ���ж�
									//	010 = ��TX_FIFO������<=2ʱ��������ˮ���ж�
									//	011 = ��TX_FIFO������<=3ʱ��������ˮ���ж�
									//	100 = ��TX_FIFO������<=4ʱ��������ˮ���ж�
									//	101 = ��TX_FIFO������<=5ʱ��������ˮ���ж�
									//	110 = ��TX_FIFO������<=6ʱ��������ˮ���ж�
									//   111 = ��TX_FIFO������<=7ʱ��������ˮ���ж�

									//Bit3	RFU:

									//Bit2-0	RXF_WATER_LEVEL: RXFIFO�������������趨ֵ�󣬱�����ˮ���ж�
									//	000 = ��RX_FIFO����>0ʱ��������ˮ���жϣ��൱�ڷǿ��ж�
									//	001 = ��RX_FIFO����>1ʱ��������ˮ���ж�
									//	010 = ��RX_FIFO����>2ʱ��������ˮ���ж�
									//	011 = ��RX_FIFO����>3ʱ��������ˮ���ж�
									//	100 = ��RX_FIFO����>4ʱ��������ˮ���ж�
									//	101 = ��RX_FIFO����>5ʱ��������ˮ���ж�
									//	110 = ��RX_FIFO����>6ʱ��������ˮ���ж�
									//  111 = ��RX_FIFO���ݴ���ʱ��������ˮ���ж�    
//<ע������Sleep�󣬿��Բ���UART�����жϽ��л��ѡ�CPU�����Ѻ󣬿��Բ�ѯ��Bit3�����RX_BUSY=0����ʾ�˴λ��ѿ��������ڸ�����ɡ�>	
	UR1_ST=0x00;
									//UR0_CR2:(�ϵ�Ĭ��ֵΪ:00000000)
									//Bit7-4	NC

									//Bit3	RX_BUSY: ����Busyָʾ�ź�
									//	0 = ��ʾ���ն�δ���н���
									//	1 = ��ʾ���ն����ڽ�����

									//Bit2	TX_BUSY: ���ͼĴ���TX_REG�������Ƿ�ȫ�����з������
									//	0 = �Ѿ�ȫ���������
									//	1 = ��δȫ���������

									//Bit1	RXOV_ERR: ����RXFIFO��������־�����Դ��������жϣ�Ӳ����1�������0
									//	0 = δ�����������
									//	1 = �����������

									//Bit0	STOP_ERR: ����ֹͣλ�����־�����Դ��������жϣ�Ӳ����1�������0
									//	0 = ����ʱδ����ֹͣλ����
									//	1 = ����ʱ����ֹͣλ����
									
	UR1_CR1=0x0f;
									//UR0_CR1:(�ϵ�Ĭ��ֵΪ:00000000)
									//Bit7	TX9D: �������ݵ�9λ
									//	0 = ���͵�9λ����Ϊ0
									//	1 = ���͵�9λ����Ϊ1

									//Bit6	RX9D: �������ݵ�9λ(Read Only)
									//	0 = ���յ�9λ����Ϊ0
									//	1 = ���յ�9λ����Ϊ1

									//Bit5	TX9_EN: �������ݵ�9λʹ��
									//	0 = �رշ��͵�9λ*
									//	1 = ʹ�ܷ��͵�9λ

									//Bit4	RX9_EN: �������ݵ�9λʹ��
									//	0 = �رս��յ�9λ*
									//	1 = ʹ�ܽ��յ�9λ

									//Bit3	RX_EN: ���տ���ѡ��
									//	0 = ��ֹ����
									//	1 = �������*

									//Bit2	TX_EN: ����ʹ��
									//	0 = ����ʹ�ܹر�
									//	1 = ����ʹ�ܴ�*

									//Bit1	UART1_SEL: UART1�ӿ�ѡ��
									//	0 = PT1.7��Ϊ����0��RX��PT1.6��Ϊ����0��TX*
									//	1 = PT2.6��Ϊ����0��RX��PT2.7��Ϊ����0��TX

									//Bit0	UART1_EN: UART1ʹ�ܿ���
									//	0 = �ر�UART
									//	1 = ��UART*	
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
	   i++;      // ��һ���ַ�
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