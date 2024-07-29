#ifndef	_CS_DRV_UART_h
#define _CS_DRV_UART_h

void drv_uart0_init(void);
void drv_Uart1_Init(void);
void drv_uart_send_oneByte(unsigned char  Uart_Data);
void drv_uart_rxflag_clear(void);
void drv_send_str(char str1[]);
void drv_send_num(unsigned long ad_data);

#endif