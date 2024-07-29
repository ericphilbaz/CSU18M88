//Data Memory Organization 00h-08h
volatile unsigned char IND0        @ 0x00;
volatile unsigned char IND1        @ 0x01;
volatile unsigned char FSR0        @ 0x02;
volatile unsigned char FSR1        @ 0x03;
volatile unsigned char STATUS      @ 0x04;
volatile unsigned char WORK        @ 0x05;
volatile unsigned char INTF        @ 0x06;
volatile unsigned char INTE        @ 0x07;
volatile unsigned char BSR         @ 0x08;

//Peripheral special registers               
volatile unsigned char MCK         @ 0x09;
volatile unsigned char EADRH       @ 0x0A;
volatile unsigned char EADRL       @ 0x0B;
volatile unsigned char EDAT        @ 0x0C;
volatile unsigned char EOPEN       @ 0x0D;
volatile unsigned char WDTCON      @ 0x0E;
volatile unsigned char WDTIN       @ 0x0F;
volatile unsigned char ADOH        @ 0x10;
volatile unsigned char ADOL        @ 0x11;
volatile unsigned char PCLOADL     @ 0x12;
volatile unsigned char PCLOADH     @ 0x13;
volatile unsigned char ROOT        @ 0x14;
volatile unsigned char PCK         @ 0x15;
volatile unsigned char ADCFG       @ 0x16;
volatile unsigned char ANACFG      @ 0x17;
volatile unsigned char TEMPC       @ 0x18;
volatile unsigned char AD2OH       @ 0x19;
volatile unsigned char AD2OL       @ 0x1A;
volatile unsigned char LVDCON      @ 0x1B;
volatile unsigned char ADOLL       @ 0x1C;
volatile unsigned char PT1         @ 0x1D;
volatile unsigned char PT1EN       @ 0x1E;
volatile unsigned char PT1PU       @ 0x1F;
volatile unsigned char AIENB       @ 0x20;
volatile unsigned char PT2         @ 0x21;
volatile unsigned char PT2EN       @ 0x22;
volatile unsigned char PT2PU       @ 0x23;
volatile unsigned char PT3         @ 0x24;
volatile unsigned char PT3EN       @ 0x25;
volatile unsigned char PT3PU       @ 0x26;
volatile unsigned char PT4         @ 0x27;
volatile unsigned char PT4EN       @ 0x28;
volatile unsigned char PT4PU       @ 0x29;
volatile unsigned char PT5         @ 0x2A;
volatile unsigned char PT5EN       @ 0x2B;
volatile unsigned char PT5PU       @ 0x2C;
volatile unsigned char PTCON       @ 0x2D;
volatile unsigned char PTINT0      @ 0x2E;
volatile unsigned char PTINT1      @ 0x2F;
volatile unsigned char SEGCON0     @ 0x30;
volatile unsigned char SEGCON1     @ 0x31;
volatile unsigned char INTF2       @ 0x32;
volatile unsigned char INTE2       @ 0x33;
volatile unsigned char TM0CON      @ 0x34;
volatile unsigned char TM0IN       @ 0x35;
volatile unsigned char TM0CNT      @ 0x36;
volatile unsigned char TM1CON      @ 0x37;
volatile unsigned char TM1IN       @ 0x38;
volatile unsigned char TM1CNT      @ 0x39;
volatile unsigned char TM1R        @ 0x3A;
volatile unsigned char TM2CON      @ 0x3B;
volatile unsigned char TM2IN       @ 0x3C;
volatile unsigned char TM2CNT      @ 0x3D;
volatile unsigned char TM2R        @ 0x3E;
volatile unsigned char TM3CON      @ 0x3F;
volatile unsigned char TM3IN       @ 0x40;
volatile unsigned char TM3CNT      @ 0x41;
volatile unsigned char TM3R        @ 0x42;
volatile unsigned char LCD1        @ 0x43;
volatile unsigned char LCD2        @ 0x44;
volatile unsigned char LCD3        @ 0x45;
volatile unsigned char LCD4        @ 0x46;
volatile unsigned char LCD5        @ 0x47;
volatile unsigned char LCD6        @ 0x48;
volatile unsigned char LCD7        @ 0x49;
volatile unsigned char LCD8        @ 0x4A;
volatile unsigned char LCD9        @ 0x4B;
volatile unsigned char LCD10       @ 0x4C;
volatile unsigned char LCD11       @ 0x4D;
volatile unsigned char LCD12       @ 0x4E;
volatile unsigned char LCD13       @ 0x4F;
volatile unsigned char LCD14       @ 0x50;
volatile unsigned char LCD15       @ 0x51;
volatile unsigned char LCD16       @ 0x52;
volatile unsigned char LCD17       @ 0x53;
volatile unsigned char LCD18       @ 0x54;
volatile unsigned char LCD19       @ 0x55;
volatile unsigned char LCD20       @ 0x56;
volatile unsigned char LCDCN1      @ 0x57;
volatile unsigned char LCDCN2      @ 0x58;
volatile unsigned char LCDENR      @ 0x59;
volatile unsigned char INTF3       @ 0x5A;
volatile unsigned char INTE3       @ 0x5B;
volatile unsigned char SPICFG      @ 0x5C;
volatile unsigned char SPICN       @ 0x5D;
volatile unsigned char SPICKR      @ 0x5E;
volatile unsigned char SPIDAT      @ 0x5F;
volatile unsigned char RTCCON      @ 0x60;
volatile unsigned char RTCAER      @ 0x61;
volatile unsigned char RTCYEAR     @ 0x62;
volatile unsigned char RTCMON      @ 0x63;
volatile unsigned char RTCDAY      @ 0x64;
volatile unsigned char RTCHOUR     @ 0x65;
volatile unsigned char RTCMIN      @ 0x66;
volatile unsigned char RTCSEC      @ 0x67;
volatile unsigned char I2CCON      @ 0x68;
volatile unsigned char I2CDAT      @ 0x69;
volatile unsigned char FRACTION    @ 0x6A;
volatile unsigned char ADCON       @ 0x6B;
volatile unsigned char TEST        @ 0x6C;
volatile unsigned char WDT_TRIM    @ 0x6D;
volatile unsigned char ICK_TRIM    @ 0x6E;
volatile unsigned char VS_TRIM     @ 0x6F;
volatile unsigned char UR0_CR1     @ 0x70;
volatile unsigned char UR0_BRR0    @ 0x71;
volatile unsigned char UR0_BRR1    @ 0x72;
volatile unsigned char UR0_TX_REG  @ 0x73;
volatile unsigned char UR0_RX_REG  @ 0x74;
volatile unsigned char UR0_CR2     @ 0x75;
volatile unsigned char UR0_ST      @ 0x76;
volatile unsigned char UR1_CR1     @ 0x77;
volatile unsigned char UR1_BRR0    @ 0x78;
volatile unsigned char UR1_BRR1    @ 0x79;
volatile unsigned char UR1_TX_REG  @ 0x7A;
volatile unsigned char UR1_RX_REG  @ 0x7B;
volatile unsigned char UR1_CR2     @ 0x7C;
volatile unsigned char UR1_ST      @ 0x7D;
volatile unsigned char RTCDWR      @ 0x7E;
volatile unsigned char I2CADR      @ 0x7F;

volatile sbit  PD           @ 0x04*8+4;
volatile sbit  TO           @ 0x04*8+3;
volatile sbit  DC           @ 0x04*8+2;
volatile sbit  C            @ 0x04*8+1;
volatile sbit  Z            @ 0x04*8+0;

volatile sbit  TM2IF        @ 0x06*8+6;
volatile sbit  TM1IF        @ 0x06*8+5;                  
volatile sbit  TM0IF        @ 0x06*8+4;
volatile sbit  AD2IF        @ 0x06*8+3;
volatile sbit  ADIF         @ 0x06*8+2;
volatile sbit  E1IF         @ 0x06*8+1;
volatile sbit  E0IF         @ 0x06*8+0;

volatile sbit  GIE          @ 0x07*8+7;
volatile sbit  TM2IE        @ 0x07*8+6;
volatile sbit  TM1IE        @ 0x07*8+5;                  
volatile sbit  TM0IE        @ 0x07*8+4;
volatile sbit  AD2IE        @ 0x07*8+3;
volatile sbit  ADIE         @ 0x07*8+2;
volatile sbit  E1IE         @ 0x07*8+1;
volatile sbit  E0IE         @ 0x07*8+0;

volatile sbit  IRP0         @ 0x08*8+7;
volatile sbit  IRP1	      @ 0x08*8+6;
volatile sbit  PAGE1        @ 0x08*8+1;
volatile sbit  PAGE0	      @ 0x08*8+0;

volatile sbit  ick_ldo_by   @ 0x09*8+7;
volatile sbit  M3_CK	      @ 0x09*8+6;
volatile sbit  M2_CK	      @ 0x09*8+5;                  
volatile sbit  M1_CK	      @ 0x09*8+4;
volatile sbit  ECK_EN	      @ 0x09*8+3;
volatile sbit  WDT_CLK_EN	  @ 0x09*8+2;
volatile sbit  ICK_EN	      @ 0x09*8+1;
volatile sbit  CLK_SEL      @ 0x09*8+0;

volatile sbit  PROG_BUSY    @ 0x0a*8+0;
volatile sbit  READ_CHECK   @ 0x0a*8+1;

volatile sbit  WDTEN	      @ 0x0e*8+7;
volatile sbit  ROOT_EN	  @ 0x0e*8+6;
volatile sbit  AIENB3	      @ 0x0e*8+5;                  
volatile sbit  I2C_DIV_1    @ 0x0e*8+4;
volatile sbit  I2C_DIV_0    @ 0x0e*8+3;
volatile sbit  WDTS_2   	  @ 0x0e*8+2;
volatile sbit  WDTS_1       @ 0x0e*8+1;
volatile sbit  WDTS_0       @ 0x0e*8+0;

volatile sbit  UART1DIV_2   @ 0x15*8+7;
volatile sbit  UART1DIV_1   @ 0x15*8+6;
volatile sbit  UART1DIV_0   @ 0x15*8+5;                  
volatile sbit  UART0DIV_2   @ 0x15*8+4;
volatile sbit  UART0DIV_1   @ 0x15*8+3;
volatile sbit  UART0DIV_0	  @ 0x15*8+2;
volatile sbit  S_BEEP_1     @ 0x15*8+1;
volatile sbit  S_BEEP_0     @ 0x15*8+0;

volatile sbit  ADSC	      @ 0x16*8+7;
volatile sbit  F_GAIN_1     @ 0x16*8+6;
volatile sbit  F_GAIN_0     @ 0x16*8+5;                  
volatile sbit  S_GAIN_1     @ 0x16*8+4;
volatile sbit  S_GAIN_0     @ 0x16*8+3;
volatile sbit  R_GAIN	 	  @ 0x16*8+2;
volatile sbit  CHOPM_1      @ 0x16*8+1;
volatile sbit  CHOPM_0      @ 0x16*8+0;

volatile sbit  LDOEN	      @ 0x17*8+7;
volatile sbit  LDOS_1       @ 0x17*8+6;
volatile sbit  LDOS_0       @ 0x17*8+5;                  
volatile sbit  BGR_ENB	  @ 0x17*8+4;
volatile sbit  BGID	      @ 0x17*8+3;
volatile sbit  SINL_1  	  @ 0x17*8+2;
volatile sbit  SINL_0       @ 0x17*8+1;
volatile sbit  ADEN         @ 0x17*8+0;

volatile sbit  AD2EN	      @ 0x19*8+7;
volatile sbit  AD2START     @ 0x19*8+6;
volatile sbit  AD3_SL_3     @ 0x19*8+5;                  
volatile sbit  AD3_SL_2	  @ 0x19*8+4;
volatile sbit  AD3_SL_1     @ 0x19*8+3;
volatile sbit  AD3_SL_0 	  @ 0x19*8+2;
volatile sbit  AD2O_9       @ 0x19*8+1;
volatile sbit  AD2O_8       @ 0x19*8+0;

volatile sbit  LVDEN		  @ 0x1b*8+7;
volatile sbit  AD2_REF	  @ 0x1b*8+6;
volatile sbit  AIENB1		  @ 0x1b*8+5;                  
volatile sbit  SILB_2    	  @ 0x1b*8+4;
volatile sbit  SILB_1       @ 0x1b*8+3;
volatile sbit  SILB_0	  	  @ 0x1b*8+2;
volatile sbit  LBOUT	      @ 0x1b*8+1;
volatile sbit  LB_RST_CON   @ 0x1b*8+0;

volatile sbit  SMT5_EN	  @ 0x2b*8+7;
volatile sbit  SMT2_EN	  @ 0x2b*8+6;
volatile sbit  SMT1_EN	  @ 0x2b*8+5; 

volatile sbit  PT15_VDD	  @ 0x2c*8+7;
volatile sbit  PT14_VDD	  @ 0x2c*8+6;
volatile sbit  I2C_VDD 	  @ 0x2c*8+5;

volatile sbit  BZEN	  	  @ 0x2d*8+7;
volatile sbit  PWM3_SEL     @ 0x2d*8+6;
volatile sbit  PWM2_SEL     @ 0x2d*8+5;                  
volatile sbit  PWM1_SEL     @ 0x2d*8+4;
volatile sbit  E1M_1        @ 0x2d*8+3;
volatile sbit  E1M_0	      @ 0x2d*8+2;
volatile sbit  E0M_1        @ 0x2d*8+1;
volatile sbit  E0M_0        @ 0x2d*8+0;

volatile sbit  UR1_RHIF 	  @ 0x32*8+7;
volatile sbit  UR1_RNIF     @ 0x32*8+6;
volatile sbit  UR1_THIF     @ 0x32*8+5;                  
volatile sbit  UR1_TEIF     @ 0x32*8+4;
volatile sbit  UR0_RHIF     @ 0x32*8+3;
volatile sbit  UR0_RNIF     @ 0x32*8+2;
volatile sbit  UR0_THIF     @ 0x32*8+1;
volatile sbit  UR0_TEIF     @ 0x32*8+0;

volatile sbit  UR1_RHIE 	  @ 0x33*8+7;
volatile sbit  UR1_RNIE     @ 0x33*8+6;
volatile sbit  UR1_THIE     @ 0x33*8+5;                  
volatile sbit  UR1_TEIE     @ 0x33*8+4;
volatile sbit  UR0_RHIE     @ 0x33*8+3;
volatile sbit  UR0_RNIE     @ 0x33*8+2;
volatile sbit  UR0_THIE     @ 0x33*8+1;
volatile sbit  UR0_TEIE     @ 0x33*8+0;

volatile sbit  T0EN	 	  @ 0x34*8+7;
volatile sbit  T0RATE_2     @ 0x34*8+6;
volatile sbit  T0RATE_1     @ 0x34*8+5;                  
volatile sbit  T0RATE_0     @ 0x34*8+4;
volatile sbit  T0RSTB	      @ 0x34*8+2;
volatile sbit  T0SEL_1      @ 0x34*8+1;
volatile sbit  T0SEL_0      @ 0x34*8+0;

volatile sbit  T1EN	 	  @ 0x37*8+7;
volatile sbit  T1RATE_2     @ 0x37*8+6;
volatile sbit  T1RATE_1     @ 0x37*8+5;                  
volatile sbit  T1RATE_0     @ 0x37*8+4;
volatile sbit  T1CKS	      @ 0x37*8+3;
volatile sbit  T1RSTB	      @ 0x37*8+2;
volatile sbit  T1OUT	      @ 0x37*8+1;
volatile sbit  PWM1OUT      @ 0x37*8+0;

volatile sbit  T2EN		  @ 0x3b*8+7;
volatile sbit  T2RATE_2     @ 0x3b*8+6;
volatile sbit  T2RATE_1     @ 0x3b*8+5;                  
volatile sbit  T2RATE_0     @ 0x3b*8+4;
volatile sbit  T2CKS	      @ 0x3b*8+3;
volatile sbit  T2RSTB	      @ 0x3b*8+2;
volatile sbit  T2OUT	      @ 0x3b*8+1;
volatile sbit  PWM2OUT      @ 0x3b*8+0;

volatile sbit  T3EN		  @ 0x3f*8+7;
volatile sbit  T3RATE_2     @ 0x3f*8+6;
volatile sbit  T3RATE_1     @ 0x3f*8+5;                  
volatile sbit  T3RATE_0     @ 0x3f*8+4;
volatile sbit  T3SEL	      @ 0x3f*8+3;
volatile sbit  T3RSTB	      @ 0x3f*8+2;
volatile sbit  T3OUT	      @ 0x3f*8+1;
volatile sbit  PWM3OUT      @ 0x3f*8+0;

volatile sbit  LCDFC_1      @ 0x57*8+6;
volatile sbit  LCDFC_0      @ 0x57*8+5;                  
volatile sbit  WDT_LCD      @ 0x57*8+4;
volatile sbit  CSE_LCD      @ 0x57*8+3;
volatile sbit  VLCDX_1      @ 0x57*8+1;
volatile sbit  VLCDX_0      @ 0x57*8+0;

volatile sbit  LCDSCKS_3 	  @ 0x58*8+7;
volatile sbit  LCDSCKS_2    @ 0x58*8+6;
volatile sbit  LCDSCKS_1    @ 0x58*8+5;                  
volatile sbit  LCDSCKS_0    @ 0x58*8+4;
volatile sbit  LCDFR	      @ 0x58*8+3;
volatile sbit  LCDREF_2     @ 0x58*8+2;
volatile sbit  LCDREF_1     @ 0x58*8+1;
volatile sbit  LCDREF_0     @ 0x58*8+0;

volatile sbit  LCDCKS_1     @ 0x59*8+7;
volatile sbit  LCDCKS_0     @ 0x59*8+6;
volatile sbit  LCDEN	      @ 0x59*8+5;                  
volatile sbit  LCDWS	      @ 0x59*8+4;
volatile sbit  LEVEL	      @ 0x59*8+3;
volatile sbit  LCD_DUTY_1   @ 0x59*8+2;
volatile sbit  LCD_DUTY_0   @ 0x59*8+1;
volatile sbit  ENPMPL       @ 0x59*8+0;

volatile sbit  I2C_TIF      @ 0x5a*8+7;
volatile sbit  I2C_RIF      @ 0x5a*8+6;
volatile sbit  UR1ERR_IE    @ 0x5a*8+5;                  
volatile sbit  UR1WK_IF     @ 0x5a*8+4;
volatile sbit  UR0WK_IF     @ 0x5a*8+3;
volatile sbit  TM3IF	      @ 0x5a*8+2;
volatile sbit  RTCIF	      @ 0x5a*8+1;
volatile sbit  SPIIF        @ 0x5a*8+0;

volatile sbit  I2C_TIE      @ 0x5b*8+7;
volatile sbit  I2C_RIE      @ 0x5b*8+6;
volatile sbit  UR0ERR_IE    @ 0x5b*8+5;                  
volatile sbit  UR1WK_IE     @ 0x5b*8+4;
volatile sbit  UR0WK_IE     @ 0x5b*8+3;
volatile sbit  TM3IE	      @ 0x5b*8+2;
volatile sbit  RTCIE	      @ 0x5b*8+1;
volatile sbit  SPIIE        @ 0x5b*8+0;

volatile sbit  SPIEN	      @ 0x5c*8+7;
volatile sbit  MSTEN	      @ 0x5c*8+6;
volatile sbit  CKPHA	      @ 0x5c*8+5;                  
volatile sbit  CKPOL	      @ 0x5c*8+4;
volatile sbit  MULMST	      @ 0x5c*8+3;
volatile sbit  WIREMOD	  @ 0x5c*8+2;
volatile sbit  SPIBSY	      @ 0x5c*8+1;
volatile sbit  SPIRST       @ 0x5c*8+0;

volatile sbit  SLVSEL	      @ 0x5d*8+3;
volatile sbit  WCOL	      @ 0x5d*8+6;
volatile sbit  MODCOL	      @ 0x5d*8+7;

volatile sbit  LIR	      @ 0x60*8+7;
volatile sbit  RFU	      @ 0x60*8+6;
volatile sbit  HR_24_12     @ 0x60*8+5;                  
volatile sbit  RTCEN	      @ 0x60*8+4;
volatile sbit  INTEGER_3    @ 0x60*8+3;
volatile sbit  INTEGER_2    @ 0x60*8+2;
volatile sbit  INTEGER_1    @ 0x60*8+1;
volatile sbit  INTEGER_0    @ 0x60*8+0;

volatile sbit  TEN_YEAR_3   @ 0x62*8+7;
volatile sbit  TEN_YEAR_2   @ 0x62*8+6;
volatile sbit  TEN_YEAR_1   @ 0x62*8+5;                  
volatile sbit  TEN_YEAR_0   @ 0x62*8+4;
volatile sbit  ONE_YEAR_3   @ 0x62*8+3;
volatile sbit  ONE_YEAR_2   @ 0x62*8+2;
volatile sbit  ONE_YEAR_1   @ 0x62*8+1;
volatile sbit  ONE_YEAR_0   @ 0x62*8+0;

volatile sbit  TEN_MON	  @ 0x63*8+4;
volatile sbit  ONE_MON_3    @ 0x63*8+3;
volatile sbit  ONE_MON_2    @ 0x63*8+2;
volatile sbit  ONE_MON_1    @ 0x63*8+1;
volatile sbit  ONE_MON_0    @ 0x63*8+0;

volatile sbit  TEN_DAY_1    @ 0x64*8+5;                  
volatile sbit  TEN_DAY_0    @ 0x64*8+4;
volatile sbit  ONE_DAY_3    @ 0x64*8+3;
volatile sbit  ONE_DAY_2    @ 0x64*8+2;
volatile sbit  ONE_DAY_1    @ 0x64*8+1;
volatile sbit  ONE_DAY_0    @ 0x64*8+0;

volatile sbit  AM_PM        @ 0x65*8+6;
volatile sbit  TEN_HOUR_1   @ 0x65*8+5;                  
volatile sbit  TEN_HOUR_0   @ 0x65*8+4;
volatile sbit  ONE_HOUR_3   @ 0x65*8+3;
volatile sbit  ONE_HOUR_2   @ 0x65*8+2;
volatile sbit  ONE_HOUR_1   @ 0x65*8+1;
volatile sbit  ONE_HOUR_0   @ 0x65*8+0;

volatile sbit  TEN_MIN_2    @ 0x66*8+6;
volatile sbit  TEN_MIN_1    @ 0x66*8+5;                  
volatile sbit  TEN_MIN_0    @ 0x66*8+4;
volatile sbit  ONE_MIN_3    @ 0x66*8+3;
volatile sbit  ONE_MIN_2    @ 0x66*8+2;
volatile sbit  ONE_MIN_1    @ 0x66*8+1;
volatile sbit  ONE_MIN_0    @ 0x66*8+0;

volatile sbit  TEN_SEC_2    @ 0x67*8+6;
volatile sbit  TEN_SEC_1    @ 0x67*8+5;                  
volatile sbit  TEN_SEC_0    @ 0x67*8+4;
volatile sbit  ONE_SEC_3    @ 0x67*8+3;
volatile sbit  ONE_SEC_2    @ 0x67*8+2;
volatile sbit  ONE_SEC_1    @ 0x67*8+1;
volatile sbit  ONE_SEC_0    @ 0x67*8+0;

volatile sbit  I2C_EN       @ 0x68*8+7;
volatile sbit  AWK_EN	      @ 0x68*8+6;
volatile sbit  CST_EN       @ 0x68*8+5;                  
volatile sbit  ACK_EN       @ 0x68*8+4;
volatile sbit  I2CSTUS_3    @ 0x68*8+3;
volatile sbit  I2CSTUS_2    @ 0x68*8+2;
volatile sbit  I2CSTUS_1    @ 0x68*8+1;
volatile sbit  I2CSTUS_0    @ 0x68*8+0;

volatile sbit  TMOD_1       @ 0x6d*8+7;
volatile sbit  TMOD_0       @ 0x6d*8+6;
volatile sbit  ICK_SEL_1    @ 0x6d*8+5;                  
volatile sbit  ICK_SEL_0    @ 0x6d*8+4;
volatile sbit  WDT_TRIM_3   @ 0x6d*8+3;
volatile sbit  WDT_TRIM_2   @ 0x6d*8+2;
volatile sbit  WDT_TRIM_1   @ 0x6d*8+1;
volatile sbit  WDT_TRIM_0   @ 0x6d*8+0;

volatile sbit  sim_rst      @ 0x6f*8+7;
volatile sbit  LVD_TRIM_2   @ 0x6f*8+6;
volatile sbit  LVD_TRIM_1   @ 0x6f*8+5;                  
volatile sbit  LVD_TRIM_0   @ 0x6f*8+4;
volatile sbit  VS_TRIM_3    @ 0x6f*8+3;
volatile sbit  VS_TRIM_2    @ 0x6f*8+2;
volatile sbit  VS_TRIM_1    @ 0x6f*8+1;
volatile sbit  VS_TRIM_0    @ 0x6f*8+0;

volatile sbit  UR0_CR1_TX9D	       @ 0x70*8+7;
volatile sbit  UR0_CR1_RX9D	       @ 0x70*8+6;
volatile sbit  UR0_CR1_TX9_EN	   @ 0x70*8+5;                  
volatile sbit  UR0_CR1_RX9_EN	   @ 0x70*8+4;
volatile sbit  UR0_CR1_RX_EN        @ 0x70*8+3;
volatile sbit  UR0_CR1_TX_EN	       @ 0x70*8+2;
volatile sbit  UR0_CR1_UART_SEL     @ 0x70*8+1;
volatile sbit  UR0_CR1_UART_EN      @ 0x70*8+0;

volatile sbit  UR0_BRR1_AUTO_BR      @ 0x72*8+7;

volatile sbit  UR0_CR2_RXF_WATER_LEVEL_2     @ 0x75*8+6;                  
volatile sbit  UR0_CR2_RXF_WATER_LEVEL_1     @ 0x75*8+5;
volatile sbit  UR0_CR2_RXF_WATER_LEVEL_0     @ 0x75*8+4;
volatile sbit  UR0_CR2_TXF_WATER_LEVEL_2     @ 0x75*8+2;
volatile sbit  UR0_CR2_TXF_WATER_LEVEL_1     @ 0x75*8+1;
volatile sbit  UR0_CR2_TXF_WATER_LEVEL_0     @ 0x75*8+0;

volatile sbit  UR0_ST_RX_BUSY       @ 0x76*8+3;
volatile sbit  UR0_ST_TX_BUSY	   @ 0x76*8+2;
volatile sbit  UR0_ST_RXOV_ERR      @ 0x76*8+1;
volatile sbit  UR0_ST_STOP_ERR      @ 0x76*8+0;

volatile sbit  UR1_CR1_TX9D	       @ 0x77*8+7;
volatile sbit  UR1_CR1_RX9D	       @ 0x77*8+6;
volatile sbit  UR1_CR1_TX9_EN	   @ 0x77*8+5;                  
volatile sbit  UR1_CR1_RX9_EN	   @ 0x77*8+4;
volatile sbit  UR1_CR1_RX_EN        @ 0x77*8+3;
volatile sbit  UR1_CR1_TX_EN	       @ 0x77*8+2;
volatile sbit  UR1_CR1_UART_SEL     @ 0x77*8+1;
volatile sbit  UR1_CR1_UART_EN      @ 0x77*8+0;

volatile sbit  UR1_BRR1_AUTO_BR     @ 0x79*8+7;

volatile sbit  UR1_CR2_RXF_WATER_LEVEL_2     @ 0x7c*8+6;                  
volatile sbit  UR1_CR2_RXF_WATER_LEVEL_1     @ 0x7c*8+5;
volatile sbit  UR1_CR2_RXF_WATER_LEVEL_0     @ 0x7c*8+4;
volatile sbit  UR1_CR2_TXF_WATER_LEVEL_2     @ 0x7c*8+2;
volatile sbit  UR1_CR2_TXF_WATER_LEVEL_1     @ 0x7c*8+1;
volatile sbit  UR1_CR2_TXF_WATER_LEVEL_0     @ 0x7c*8+0;

volatile sbit  UR1_ST_RX_BUSY       @ 0x7d*8+3;
volatile sbit  UR1_ST_TX_BUSY	   @ 0x7d*8+2;
volatile sbit  UR1_ST_RXOV_ERR      @ 0x7d*8+1;
volatile sbit  UR1_ST_STOP_ERR      @ 0x7d*8+0;

volatile sbit  DWR_2	      @ 0x7e*8+2;
volatile sbit  DWR_1        @ 0x7e*8+1;
volatile sbit  DWR_0        @ 0x7e*8+0;

volatile sbit  GC_EN	   	  @ 0x7f*8+0;

                       
