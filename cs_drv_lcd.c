#include "CSU18M88.h"
#include "cs_drv_delay.h"
#include "cs_drv_lcd.h"
#include "cs_drv_define_bit.h"

/**
*@variable
*@@brief LCD displays cached variables
*/
unsigned  char  R_APP_BUFFER1;
unsigned  char  R_APP_BUFFER2;
unsigned  char  R_APP_BUFFER3;
unsigned  char  R_APP_BUFFER4;
unsigned  char  R_APP_BUFFER5;
unsigned  char  R_APP_BUFFER6;
unsigned  char  R_APP_BUFFER7;
unsigned  char  R_APP_BUFFER8;
unsigned  char  R_APP_BUFFER9;
unsigned  char  R_APP_BUFFER;
/**
*@array char const lcd_dsp_table	
*@brief	Store the LCD display value	
*/
unsigned  char const lcd_dsp_table[LCD_TALBLE_LEN] = {
Lcdch0,Lcdch1,Lcdch2,Lcdch3,
Lcdch4,Lcdch5,Lcdch6,Lcdch7,
Lcdch8,Lcdch9,LcdchA,Lcdchb,
LcdchC,Lcdchd,LcdchE,LcdchF,
Lcdnull,LcdchL,Lcdcho,LcdchP,
Lcdchn,Lcdchr
};
/**
*@array char const lcd_dsp_table1	
*@brief	Store the LCD display value	
*/
unsigned  char const lcd_dsp_table1[LCD_TALBLE_LEN] = {
Lcd1ch0,Lcd1ch1,Lcd1ch2,Lcd1ch3,
Lcd1ch4,Lcd1ch5,Lcd1ch6,Lcd1ch7,
Lcd1ch8,Lcd1ch9,Lcd1chA,Lcd1chb,
Lcd1chC,Lcd1chd,Lcd1chE,Lcd1chF,
Lcd1null,Lcd1chL,Lcd1cho,Lcd1chP,
Lcd1chn,Lcd1chr
};

/**
* @fn	void    drv_lcd_init(void)
* @brief LCD init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void    drv_lcd_init(void)
{
    SEGCON0=0xff;
    SEGCON1=0xff;
    LCDCN1=0x03;
    LCDCN2=0xF3;
    LCDENR=0x87;
    delay(5);
    LCDEN=1;               //enabled LCD
}
/**
* @fn	void    drv_lcd_refresh(void)
* @brief LCD init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_lcd_refresh(void)
{
    drv_memory_clrf(&LCD1,LCD_CLRF_NUMBER,0x00);        //clr
    drv_lcd_char_set(&LCD17,&LCD18,drv_dsp_table1(R_APP_BUFFER1));
    drv_lcd_char_set(&LCD15,&LCD16,drv_dsp_table1(R_APP_BUFFER2));
    drv_lcd_char_set(&LCD13,&LCD14,drv_dsp_table1(R_APP_BUFFER3));
    drv_lcd_char_set(&LCD11,&LCD12,drv_dsp_table1(R_APP_BUFFER4));
    drv_lcd_char_set(&LCD7,&LCD8,drv_dsp_table(R_APP_BUFFER5));
    drv_lcd_char_set(&LCD5,&LCD6,drv_dsp_table(R_APP_BUFFER6));
    drv_lcd_char_set(&LCD3,&LCD4,drv_dsp_table(R_APP_BUFFER7));
    drv_lcd_char_set(&LCD1,&LCD2,drv_dsp_table(R_APP_BUFFER8));
    drv_lcd_char_set(&LCD9,&LCD10,drv_dsp_table(R_APP_BUFFER9));
    drv_lcd_sign_set();
}
/**
* @fn	unsigned char    drv_dsp_table(unsigned char index)
* @brief LCD inquiry 
* @param[out] none.
* @param[in] unsigned char index
* @return none..
*/
unsigned char    drv_dsp_table(unsigned char index)
{
    return *(lcd_dsp_table+index);
}
/**
* @fn	unsigned char    drv_dsp_table1(unsigned char index)
* @brief LCD inquiry 1 
* @param[out] none.
* @param[in] unsigned char index
* @return none.
*/
unsigned char    drv_dsp_table1(unsigned char index)
{
    return *(lcd_dsp_table1+index);
}
/**
* @fn	void    drv_memory_clrf(volatile unsigned char *addr, char len, char data)
* @brief  clrf LCD1~LCD20 
* @param[out] none.
* @param[in] volatile unsigned char *addr, char len, char data
* @return 
*/
void    drv_memory_clrf(volatile unsigned char *addr, char len, char data)
{
   while(len --){
       *addr = data;
        addr++;
   }
}
/**
* @fn	void    drv_lcd_char_set(volatile unsigned char *p_lcd1,volatile unsigned char *p_lcd2,unsigned char code_value)
* @brief Digital partial conversion
* @param[out] none.
* @param[in] volatile unsigned char *p_lcd1,volatile unsigned char *p_lcd2,unsigned char code_value
* @return none.
*/
void    drv_lcd_char_set(volatile unsigned char *p_lcd1,volatile unsigned char *p_lcd2,unsigned char code_value)
{
        *p_lcd1=code_value;
        *p_lcd2=code_value>>4;
}
/**
* @fn	void    drv_lcd_sign_set()
* @brief sign partial conversion 
* @param[out] none.
* @param[in] none.
* @return none.
*/
void    drv_lcd_sign_set()
{
    if(R_APP_BUFFER10_BIT0) { L_MG1_M3 = 1;  }
    if(R_APP_BUFFER10_BIT1) { L_TVOC = 1;    }
    if(R_APP_BUFFER10_BIT2) { L_DOT1 = 1;    }
    if(R_APP_BUFFER10_BIT3) { L_AQI = 1;     }
    if(R_APP_BUFFER10_BIT4) { L_COL = 1;     }
    if(R_APP_BUFFER10_BIT5) { L_MG2_M3 = 1;  }
    if(R_APP_BUFFER10_BIT6) { L_DOT2 = 1;    }
    if(R_APP_BUFFER11_BIT0) { L_HCHO = 1;    }
    if(R_APP_BUFFER11_BIT1) { L_SMILE1 = 1;   }
    if(R_APP_BUFFER11_BIT2) { L_SMILE2 = 1;  }
    if(R_APP_BUFFER11_BIT3) { L_SMILE3 = 1;  }
    if(R_APP_BUFFER11_BIT4) { L_BATTERY1 = 1;}
    if(R_APP_BUFFER11_BIT5) { L_BATTERY2 = 1;}
    if(R_APP_BUFFER11_BIT6) { L_BATTERY3 = 1;}
    if(R_APP_BUFFER11_BIT7) { L_BATTERY4 = 1;}
}
