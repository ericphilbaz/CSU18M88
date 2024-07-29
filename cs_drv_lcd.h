#ifndef _CS_DRV_LCD_H
#define _CS_DRV_LCD_H

extern    unsigned  char  R_APP_BUFFER1;
extern    unsigned  char  R_APP_BUFFER2;
extern    unsigned  char  R_APP_BUFFER3;
extern    unsigned  char  R_APP_BUFFER4;
extern    unsigned  char  R_APP_BUFFER5;
extern    unsigned  char  R_APP_BUFFER6;
extern    unsigned  char  R_APP_BUFFER7;
extern    unsigned  char  R_APP_BUFFER8;
extern    unsigned  char  R_APP_BUFFER9;
/**
* @fn	void    drv_lcd_init(void)
* @brief LCD init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void    drv_lcd_init(void);
/**
* @fn	void    drv_lcd_refresh(void)
* @brief LCD init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_lcd_refresh(void);

/**
* @fn	unsigned char    drv_dsp_table(unsigned char index)
* @brief LCD inquiry 
* @param[out] none.
* @param[in] unsigned char index
* @return *.
*/
unsigned char    drv_dsp_table(unsigned char index);
/**
* @fn	unsigned char    drv_dsp_table1(unsigned char index)
* @brief LCD inquiry 1 
* @param[out] none.
* @param[in] unsigned char index
* @return 
*/
unsigned char    drv_dsp_table1(unsigned char index);
/**
* @fn	void    drv_memory_clrf(volatile unsigned char *addr, char len, char data)
* @brief  clrf LCD1~LCD20 
* @param[out] none.
* @param[in] volatile unsigned char *addr, char len, char data
* @return 
*/
void    drv_memory_clrf(volatile unsigned char *addr, char len, char data);
/**
* @fn	void    drv_lcd_char_set(volatile unsigned char *p_lcd1,volatile unsigned char *p_lcd2,unsigned char code_value)
* @brief Digital partial conversion
* @param[out] none.
* @param[in] volatile unsigned char *p_lcd1,volatile unsigned char *p_lcd2,unsigned char code_value
* @return 
*/
void    drv_lcd_char_set(volatile unsigned char *p_lcd1,volatile unsigned char *p_lcd2,unsigned char code_value);
/**
* @fn	void    drv_lcd_sign_set()
* @brief sign partial conversion 
* @param[out] none.
* @param[in] 
* @return 
*/
void    drv_lcd_sign_set();


#define     LCD_TALBLE_LEN   22
#define     LCD_CLRF_NUMBER  20

#define     DISP_BUF_BIT0   0x01
#define     DISP_BUF_BIT1   0x02
#define     DISP_BUF_BIT2   0x04
#define     DISP_BUF_BIT3   0x08
#define     DISP_BUF_BIT4   0x10
#define     DISP_BUF_BIT5   0x20
#define     DISP_BUF_BIT6   0x40
#define     DISP_BUF_BIT7   0x80

//======================================
//	数码管的A~G段和显示缓存的位对应关系
//======================================
//  __	   A		3			
// |  |	 F	 B 	  7	  2 	
//  __	   G		6		
// |  |	 E	 C	  5   1		
//  __     D		0		
//======================================
#define     S_A     DISP_BUF_BIT3
#define     S_B     DISP_BUF_BIT2
#define     S_C     DISP_BUF_BIT1
#define     S_D     DISP_BUF_BIT0
#define     S_E     DISP_BUF_BIT5
#define     S_F     DISP_BUF_BIT7
#define     S_G     DISP_BUF_BIT6
//======================================
//	数码管的A~G段和显示缓存的位对应关系
//======================================
//  __	   A		0			
// |  |	 F	 B 	  4	  1 	
//  __	   G		5		
// |  |	 E	 C	  6   2	
//  __     D		3		
//======================================
#define     S1_A     DISP_BUF_BIT0
#define     S1_B     DISP_BUF_BIT1
#define     S1_C     DISP_BUF_BIT2
#define     S1_D     DISP_BUF_BIT3
#define     S1_E     DISP_BUF_BIT6
#define     S1_F     DISP_BUF_BIT4
#define     S1_G     DISP_BUF_BIT5
//======================================
//	数字符号编码表1
//======================================
//  __		A			
// |  |   F	  B 	
//  __		G		
// |  |   E   C		
//  __  	D
//======================================
#define     Lcdch0      S_A+S_B+S_C+S_D+S_E+S_F
#define     Lcdch1      S_B+S_C
#define     Lcdch2      S_A+S_B+S_D+S_E+S_G
#define     Lcdch3      S_A+S_B+S_C+S_D+S_G
#define     Lcdch4      S_B+S_C+S_F+S_G
#define     Lcdch5      S_A+S_C+S_D+S_F+S_G
#define     Lcdch6      S_A+S_C+S_D+S_E+S_F+S_G
#define     Lcdch7      S_A+S_B+S_C 
#define     Lcdch8      S_A+S_B+S_C+S_D+S_E+S_F+S_G
#define     Lcdch9      S_A+S_B+S_C+S_D+S_F+S_G
#define     LcdchA      S_A+S_B+S_C+S_E+S_F+S_G
#define     Lcdchb      S_C+S_D+S_E+S_F+S_G
#define     LcdchC      S_A+S_D+S_E+S_F
#define     Lcdchd      S_B+S_C+S_D+S_E+S_G
#define     LcdchE      S_A+S_D+S_E+S_F+S_G
#define     LcdchF      S_A+S_E+S_F+S_G
#define     Lcdnull     0
#define     LcdchL      S_D+S_E+S_F
#define     Lcdcho      S_C+S_D+S_E+S_G
#define     LcdchP      S_A+S_B+S_E+S_F+S_G
#define     Lcdchn      S_C+S_E+S_G
#define     Lcdchr      S_E+S_G

//======================================
//	数字符号编码表2
//======================================
//  __		A			
// |  |   F	  B 	
//  __		G		
// |  |   E   C		
//  __  	D
//======================================
#define     Lcd1ch0      S1_A+S1_B+S1_C+S1_D+S1_E+S1_F
#define     Lcd1ch1      S1_B+S1_C
#define     Lcd1ch2      S1_A+S1_B+S1_D+S1_E+S1_G
#define     Lcd1ch3      S1_A+S1_B+S1_C+S1_D+S1_G
#define     Lcd1ch4      S1_B+S1_C+S1_F+S1_G
#define     Lcd1ch5      S1_A+S1_C+S1_D+S1_F+S1_G
#define     Lcd1ch6      S1_A+S1_C+S1_D+S1_E+S1_F+S1_G
#define     Lcd1ch7      S1_A+S1_B+S1_C
#define     Lcd1ch8      S1_A+S1_B+S1_C+S1_D+S1_E+S1_F+S1_G
#define     Lcd1ch9      S1_A+S1_B+S1_C+S1_D+S1_F+S1_G
#define     Lcd1chA      S1_A+S1_B+S1_C+S1_E+S1_F+S1_G
#define     Lcd1chb      S1_C+S1_D+S1_E+S1_F+S1_G
#define     Lcd1chC      S1_A+S1_D+S1_E+S1_F
#define     Lcd1chd      S1_B+S1_C+S1_D+S1_E+S1_G
#define     Lcd1chE      S1_A+S1_D+S1_E+S1_F+S1_G
#define     Lcd1chF      S1_A+S1_E+S1_F+S1_G
#define     Lcd1null     0 
#define     Lcd1chL      S1_D+S1_E+S1_F
#define     Lcd1cho      S1_C+S1_D+S1_E+S1_G
#define     Lcd1chP      S1_A+S1_B+S1_E+S1_F+S1_G
#define     Lcd1chn      S1_C+S1_E+S1_G
#define     Lcd1chr      S1_E+S1_G


#define     C_Ch_A      10
#define     C_Ch_b      11
#define     C_Ch_C      12
#define     C_Ch_d      13
#define     C_Ch_E      14
#define     C_Ch_F      15
#define     C_Ch_null   16
#define     C_Ch_L      17
#define     C_Ch_o      18
#define     C_Ch_P      19
#define     C_Ch_n      20
#define     C_Ch_r      21


#define     L_MG1_M3    LCD2_0
#define     L_TVOC      LCD4_0
#define     L_DOT1      LCD6_0
#define     L_AQI       LCD8_0
#define     L_COL       LCD10_0
#define     L_MG2_M3    LCD12_3
#define     L_DOT2      LCD16_3

#define     L_HCHO      LCD19_0
#define     L_SMILE1    LCD19_1
#define     L_SMILE2    LCD19_2
#define     L_SMILE3    LCD19_3
#define     L_BATTERY1  LCD20_0
#define     L_BATTERY2  LCD20_1
#define     L_BATTERY3  LCD20_2
#define     L_BATTERY4  LCD20_3


#endif