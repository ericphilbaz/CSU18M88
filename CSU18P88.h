//==============================================
// CSU18P88 Special Register Address Definition
// Date:2020-03-16
// Version: V1.0.0 
//==============================================

#ifndef  _CSU18P88_H
#define  _CSU18P88_H 1

//Data Memory Organization 00h-08h
extern volatile unsigned char IND0             @ 0x00;     //{  }
extern volatile unsigned char IND1             @ 0x01;     //{  }
extern volatile unsigned char FSR0             @ 0x02;     //{  }
extern volatile unsigned char FSR1             @ 0x03;     //{  }
extern volatile unsigned char STATUS           @ 0x04;     //{ 0, 0, 0, PD, TO, DC, C, Z }
extern volatile unsigned char WORK             @ 0x05;     //{  }
extern volatile unsigned char INTF             @ 0x06;     //{ 0, TM2IF, 0, TM0IF, ADIF, LVDIF, E1IF, E0IF }
extern volatile unsigned char INTE             @ 0x07;     //{ GIE, TM2IE, 0, TM0IE, ADIE, LVDIE, E1IE, E0IE }
extern volatile unsigned char BSR              @ 0x08;     //{ IRP0, IRP1, 0, 0, 0, 0, 0, PAGE0 }

//Peripheral special registers 09h-33h
extern volatile unsigned char RSTSR            @ 0x09;     //{ 0, 0, 0, 0, 0, EMCF, ILOPF, WWDTF }
extern volatile unsigned char EADRH            @ 0x0A;     //{ EADRH[7:0] }
extern volatile unsigned char EADRL            @ 0x0B;     //{ EADRL[7:0] }
extern volatile unsigned char EDATH            @ 0x0C;     //{ EDATH[7:0] }
extern volatile unsigned char WDTCON           @ 0x0D;     //{ WDTEN, 0, 0, 0, 0, WDTS[2:0] }
extern volatile unsigned char WDTIN            @ 0x0E;     //{ WDTIN[7:0] }
extern volatile unsigned char TM0CON           @ 0x0F;     //{ T0EN, T0RATE[2:0], 0, T0RSTB, T0SEL[1:0] }
extern volatile unsigned char TM0IN            @ 0x10;     //{ TM0IN[7:0] }
extern volatile unsigned char TM0CNT           @ 0x11;     //{ TM0CNT[7:0] }
extern volatile unsigned char ADOH             @ 0x12;     //{ ADO[23:16] }
extern volatile unsigned char ADOL             @ 0x13;     //{ ADO[15:8] }
extern volatile unsigned char ADOLL            @ 0x14;     //{ ADO[7:0] }
extern volatile unsigned char ADCON            @ 0x15;     //{ 0, 0, 0, CM_SEL, FS_SEL[1:0], ADGN[1:0] }
extern volatile unsigned char ADC_TR0          @ 0x16;     //{ SINL[1:0], CHOPM[2:0], 0, 0, 0 }
extern volatile unsigned char ADC_TR1          @ 0x17;     //{ ADM[3:0], CHOPAI[2:0], ADEN }
extern volatile unsigned char ADC_TR2          @ 0x18;     //{ BUFBP, EN_SP, PGA[1:0], EMCRCS[1:0], EN_ADCAT, IMOD }
extern volatile unsigned char OTPAW            @ 0x19;     //{ Q_BIAS, 0, 0, Q_IREF, ERV, 0, 0, 0 }
extern volatile unsigned char MCK              @ 0x1A;     //{ 0, 0, CST_WDT, 0, M3_CK, M2_CK, M1_CK, 0 }
extern volatile unsigned char PCK              @ 0x1B;     //{ WDT_LCD, LCDSCKS[3:0], S_beep[1:0], CSE_LCD }
extern volatile unsigned char MCK2             @ 0x1C;     //{ T2SEL[1:0], XTALSEL, CST_E, CST_IN, EO_SLP, 0, CLK_SEL }
extern volatile unsigned char TM2CON           @ 0x1D;     //{ T2EN, T2RATE[2:0], T2CKS, T2RSTB, T2OUT, PWM2OUT }
extern volatile unsigned char TM2IN            @ 0x1E;     //{ TM2IN[7:0] }
extern volatile unsigned char TM2CNT           @ 0x1F;     //{ TM2CNT[7:0] }
extern volatile unsigned char TM2R             @ 0x20;     //{ TM2R[7:0] }
extern volatile unsigned char TM2INH           @ 0x21;     //{ 0, 0, 0, 0, TM2IN[11:8] }
extern volatile unsigned char TM2CNTH          @ 0x22;     //{ 0, 0, 0, 0, TM2CNT[11:8] }
extern volatile unsigned char TM2RH            @ 0x23;     //{ 0, 0, 0, 0, TM2R[11:8] }
extern volatile unsigned char PT1              @ 0x24;     //{ PT1[7:4], 0, 0, 0, 0 }
extern volatile unsigned char PT1EN            @ 0x25;     //{ PT1EN[7:4], 0, 0, 0, 0 }
extern volatile unsigned char PT1PU            @ 0x26;     //{ PT1PU[7:4], 0, 0, 0, 0 }
extern volatile unsigned char AIENB            @ 0x27;     //{ 0, 0, 0, 0, AIENB1, 0, 0, 0 }
extern volatile unsigned char PT2              @ 0x28;     //{ PT2[7:0] }
extern volatile unsigned char PT2EN            @ 0x29;     //{ PT2EN[7:0] }
extern volatile unsigned char PT2PU            @ 0x2A;     //{ PT2PU[7:0] }
extern volatile unsigned char PT2MR            @ 0x2B;     //{ BZEN, 0, 0, 0, E1M[1:0], E0M[1:0] }
extern volatile unsigned char PT2CON           @ 0x2C;     //{ SEGCON1, SEGCON0, SEGCON2, SEGCON3, BZSEL, 0, 0, 0 }
extern volatile unsigned char PT3              @ 0x2D;     //{ PT3[7:0] }
extern volatile unsigned char PT3EN            @ 0x2E;     //{ PT3EN[7:0] }
extern volatile unsigned char PT3CON           @ 0x2F;     //{ PT3CON[7:0] }
extern volatile unsigned char PT3PU            @ 0x30;     //{ PT3PU[7:0] }
extern volatile unsigned char PT4              @ 0x31;     //{ 0, 0, 0, 0, PT4[3:0] }
extern volatile unsigned char PT4EN            @ 0x32;     //{ 0, 0, 0, 0, PT4EN[3:0] }
extern volatile unsigned char PT4CON           @ 0x33;     //{ 0, 0, 0, 0, PT4CON[3:0] }
extern volatile unsigned char PT4PU            @ 0x34;     //{ 0, 0, 0, 0, PT4PU[3:0] }
extern volatile unsigned char PTINT            @ 0x35;     //{ 0, PTW1[2:0], PT_SMT, IO_BGDRV, PTW0[1:0] }
extern volatile unsigned char INTF2            @ 0x36;     //{ 0, 0, 0, 0, 0, 0, RTCIF, URIF }
extern volatile unsigned char INTE2            @ 0x37;     //{ 0, 0, 0, 0, 0, 0, RTCIE, 0 }
extern volatile unsigned char LDOS             @ 0x38;     //{ LDOS[1:0], 0, 0, 0, 0, 0, LVDAUTO }
extern volatile unsigned char NETF             @ 0x39;     //{ CHP_VPP, LVR_EN, ENVDDA, 0, 0, 0, 0, ENVB }
extern volatile unsigned char SVD              @ 0x3D;     //{ SILB[5:0], LVD_EN, LBOUT }
extern volatile unsigned char LCDCON1          @ 0x3E;     //{ 0, LCDCH, LEVEL_S, VLCDX[1:0], 0, LCDREF[1:0] }
extern volatile unsigned char LCDENR           @ 0x3F;     //{ LCDCKS[1:0], LCDEN, LCDWS, LEVEL, LCD_DUTY[1:0], ENPMPL }
extern volatile unsigned char LEDADR           @ 0x40;     //{ 0, 0, 0, 0, 0, LEDADR[2:0] }
extern volatile unsigned char LEDDAT           @ 0x41;     //{ LEDDAT[7:0] }
extern volatile unsigned char LEDDUTY          @ 0x42;     //{ 0, 0, 0, LEDDUTY[4:0] }
extern volatile unsigned char LEDCOM           @ 0x43;     //{ LEDCOM[7:0] }
extern volatile unsigned char LEDCON           @ 0x44;     //{ LEDEN, LEDCKS[1:0], LEDAUTO, 0, 0, LEDNUM[1:0] }
extern volatile unsigned char LEDCON1          @ 0x45;     //{ 0, 0, 0, 0, 0, 0, LEDCUR[1:0] }
extern volatile unsigned char WWDTCR           @ 0x47;     //{ WWDTEN, TR[6:0] }
extern volatile unsigned char WWDTWR           @ 0x48;     //{ 0, WD[6:0] }
extern volatile unsigned char UR_CR0           @ 0x4F;     //{ 0, 0, 0, 0, 0, 0, UART_SEL[-1:-1] }
extern volatile unsigned char UR_CR1           @ 0x50;     //{ TX9D, RX9D, TX9_EN, RX9_EN, RX_EN, TX_EN, 0, UART0_EN }
extern volatile unsigned char UR_BRR0          @ 0x51;     //{ BRR0[7:0] }
extern volatile unsigned char UR_BRR1          @ 0x52;     //{ 0, UARTDIV[2:0], BRR1[3:0] }
extern volatile unsigned char UR_TX_REG        @ 0x53;     //{ TX_REG[7:0] }
extern volatile unsigned char UR_RX_REG        @ 0x54;     //{ RX_REG[7:0] }
extern volatile unsigned char UR_ST            @ 0x55;     //{ UR_TINV, UR_RINV, 0, TXFIFO_EMPTY, RX_BUSY, TX_BUSY, RX_OVERR, STOP_ERR }
extern volatile unsigned char UR_INTF          @ 0x56;     //{ 0, 0, 0, URERRIF, UR_RHIF, UR_RNIF, URWKIF, UR_TEIF }
extern volatile unsigned char UR_INTE          @ 0x57;     //{ 0, 0, 0, URERRIE, UR_RHIE, UR_RNIE, URWKIE, UR_TEIE }
extern volatile unsigned char METCH            @ 0x59;     //{ GTC[5:0], 0, 0 }
extern volatile unsigned char RTCCON           @ 0x5B;     //{ LIR, 0, 24HR_12HR, RTCEN, INTEGER[3:0] }
extern volatile unsigned char RTCAER           @ 0x5C;     //{ AER[7:0] }
extern volatile unsigned char RTCYEAR          @ 0x5D;     //{ 10YEAR[3:0], 1YEAR[3:0] }
extern volatile unsigned char RTCMON           @ 0x5E;     //{ 0, 0, 0, 10MON, 1MON[3:0] }
extern volatile unsigned char RTCDAY           @ 0x5F;     //{ 0, 0, 10DAY[1:0], 1DAT[3:0] }
extern volatile unsigned char RTCHOUR          @ 0x60;     //{ 0, AM_PM, 10HOUR10[1:0], 1HOUR[3:0] }
extern volatile unsigned char RTCMIN           @ 0x61;     //{ 0, 10MIN[2:0], 1MIN[3:0] }
extern volatile unsigned char RTCSEC           @ 0x62;     //{ 0, 10SEC[2:0], 1SEC[3:0] }
extern volatile unsigned char FRACTION         @ 0x63;     //{ 0, 0, FRACTION[5:0] }
extern volatile unsigned char RTCDWR           @ 0x64;     //{ 0, 0, 0, 0, 0, DWR[2:0] }
extern volatile unsigned char WDT_C            @ 0x65;     //{ 0, 0, 0, WDT_C[4:0] }
extern volatile unsigned char IOSC_C           @ 0x66;     //{ IOSC_C[7:0] }
extern volatile unsigned char VS_C             @ 0x67;     //{ VSTRIM_EN, VS_ATA, 0, 0, VS_C[-1:-1] }
extern volatile unsigned char LVD_C            @ 0x68;     //{ LVDTRIM_EN, SIM1EN, 0, LVD_C[-1:-1] }
extern volatile unsigned char OSCTCX_C         @ 0x69;     //{ 0, 0, 0, 0, 0, 0, OSCTCX_C[-1:-1] }
extern volatile unsigned char TESTM            @ 0x6A;     //{ VHH_C, 0, 0, 0, TESTM[-1:-1] }
extern volatile unsigned char WRPRT            @ 0x7C;     //{ WRPRT[7:0] }
extern volatile unsigned char PAGECTL          @ 0x7D;     //{ 0, 0, 0, 0, 0, 0, 0, PAGE2 }
extern volatile unsigned char METCH2           @ 0x7E;     //{ METCH2[7:0] }
//=============== PAGE1 ===========
extern volatile unsigned char bank2 CHIP_ID0L        @ 0x16;     //{  }
extern volatile unsigned char bank2 CHIP_ID0H        @ 0x17;     //{  }
extern volatile unsigned char bank2 CHIP_ID1L        @ 0x18;     //{  }
extern volatile unsigned char bank2 CHIP_ID1H        @ 0x19;     //{  }
extern volatile unsigned char bank2 SFR_WK           @ 0x1A;     //{ SFR_WK[7:0] }
extern volatile unsigned char bank2 MM_WK            @ 0x1B;     //{ MM_WK[7:0] }
extern volatile unsigned char bank2 UOB_WK           @ 0x1C;     //{ UOB_WK[7:0] }
extern volatile unsigned char bank2 POB_WK           @ 0x1D;     //{ POB_WK[7:0] }
extern volatile unsigned char bank2 MP_WK            @ 0x1E;     //{ MP_WK[7:0] }
extern volatile unsigned char bank2 CALSEL           @ 0x1F;     //{ START, TRIMAUTO, 0, 0, OSC[3:0] }
extern volatile unsigned char bank2 VS_TRIM          @ 0x20;     //{ VSTRIM_EN, VS_ATA, 0, 0, VS_TRIM[3:0] }
extern volatile unsigned char bank2 TRIMWDT          @ 0x21;     //{ EN_BIASNA, 0, 0, TRIM_WDT[4:0] }
extern volatile unsigned char bank2 TRIMHIRC         @ 0x22;     //{ TRIM_HIRC[7:0] }
extern volatile unsigned char bank2 OSC_DIV          @ 0x23;     //{ SLEEP, 0, 0, 0, OSC_DIV[3:0] }
extern volatile unsigned char bank2 SR               @ 0x24;     //{ SFRWEL　, MPWEL　, POBWEL　, UOBWEL　, MMWEL　, BUSY, ERR[1:0] }
extern volatile unsigned char bank2 VCHECKSUM        @ 0x25;     //{ VCHECKSUM[7:0] }
extern volatile unsigned char bank2 ISPCFG           @ 0x26;     //{ VPPEN, PROG, VHHDEN, Q_MGN1, Q_MGN2, PTM[2:0] }
extern volatile unsigned char bank2 LVD_TRIM         @ 0x27;     //{ LVDTRIM_EN, 0, 0, LVD_TRIM[4:0] }
extern volatile unsigned char bank2 OSCTCX_TRIM       @ 0x28;     //{ 0, 0, 0, 0, 0, 0, OSCTCX_TRIM[-1:-1] }
extern volatile unsigned char bank2 SR2              @ 0x2B;     //{ 0, 0, 0, 0, 0, 0, TRIM_ERR, 0 }
extern volatile unsigned char bank2 TRIMLIMIT         @ 0x2C;     //{ TRIM_LIMIT[-1:-1] }
extern volatile unsigned char bank2 TRAMGAP          @ 0x33;     //{ TRIM_GAP[7:0] }

//-------------------------------------------------------
//  STATUS register bit map
//-------------------------------------------------------
extern volatile sbit Z                         @ 0x04*8+0;
extern volatile sbit C                         @ 0x04*8+1;
extern volatile sbit DC                        @ 0x04*8+2;
extern volatile sbit TO                        @ 0x04*8+3;
extern volatile sbit PD                        @ 0x04*8+4;

//-------------------------------------------------------
//  INTF register bit map
//-------------------------------------------------------
extern volatile sbit E0IF                      @ 0x06*8+0;
extern volatile sbit E1IF                      @ 0x06*8+1;
extern volatile sbit LVDIF                     @ 0x06*8+2;
extern volatile sbit ADIF                      @ 0x06*8+3;
extern volatile sbit TM0IF                     @ 0x06*8+4;
extern volatile sbit TM2IF                     @ 0x06*8+6;

//-------------------------------------------------------
//  INTE register bit map
//-------------------------------------------------------
extern volatile sbit E0IE                      @ 0x07*8+0;
extern volatile sbit E1IE                      @ 0x07*8+1;
extern volatile sbit LVDIE                     @ 0x07*8+2;
extern volatile sbit ADIE                      @ 0x07*8+3;
extern volatile sbit TM0IE                     @ 0x07*8+4;
extern volatile sbit TM2IE                     @ 0x07*8+6;
extern volatile sbit GIE                       @ 0x07*8+7;

//-------------------------------------------------------
//  BSR register bit map
//-------------------------------------------------------
extern volatile sbit PAGE0                     @ 0x08*8+0;
extern volatile sbit IRP1                      @ 0x08*8+6;
extern volatile sbit IRP0                      @ 0x08*8+7;

//-------------------------------------------------------
//  RSTSR register bit map
//-------------------------------------------------------
extern volatile sbit WWDTF                     @ 0x09*8+0;
extern volatile sbit ILOPF                     @ 0x09*8+1;
extern volatile sbit EMCF                      @ 0x09*8+2;

//-------------------------------------------------------
//  EADRH register bit map
//-------------------------------------------------------
extern volatile sbit EADRH_0                   @ 0x0A*8+0;
extern volatile sbit EADRH_1                   @ 0x0A*8+1;
extern volatile sbit EADRH_2                   @ 0x0A*8+2;
extern volatile sbit EADRH_3                   @ 0x0A*8+3;
extern volatile sbit EADRH_4                   @ 0x0A*8+4;
extern volatile sbit EADRH_5                   @ 0x0A*8+5;
extern volatile sbit EADRH_6                   @ 0x0A*8+6;
extern volatile sbit EADRH_7                   @ 0x0A*8+7;

//-------------------------------------------------------
//  EADRL register bit map
//-------------------------------------------------------
extern volatile sbit EADRL_0                   @ 0x0B*8+0;
extern volatile sbit EADRL_1                   @ 0x0B*8+1;
extern volatile sbit EADRL_2                   @ 0x0B*8+2;
extern volatile sbit EADRL_3                   @ 0x0B*8+3;
extern volatile sbit EADRL_4                   @ 0x0B*8+4;
extern volatile sbit EADRL_5                   @ 0x0B*8+5;
extern volatile sbit EADRL_6                   @ 0x0B*8+6;
extern volatile sbit EADRL_7                   @ 0x0B*8+7;

//-------------------------------------------------------
//  EDATH register bit map
//-------------------------------------------------------
extern volatile sbit EDATH_0                   @ 0x0C*8+0;
extern volatile sbit EDATH_1                   @ 0x0C*8+1;
extern volatile sbit EDATH_2                   @ 0x0C*8+2;
extern volatile sbit EDATH_3                   @ 0x0C*8+3;
extern volatile sbit EDATH_4                   @ 0x0C*8+4;
extern volatile sbit EDATH_5                   @ 0x0C*8+5;
extern volatile sbit EDATH_6                   @ 0x0C*8+6;
extern volatile sbit EDATH_7                   @ 0x0C*8+7;

//-------------------------------------------------------
//  WDTCON register bit map
//-------------------------------------------------------
extern volatile sbit WDTS_0                    @ 0x0D*8+0;
extern volatile sbit WDTS_1                    @ 0x0D*8+1;
extern volatile sbit WDTS_2                    @ 0x0D*8+2;
extern volatile sbit WDTEN                     @ 0x0D*8+7;

//-------------------------------------------------------
//  WDTIN register bit map
//-------------------------------------------------------
extern volatile sbit WDTIN_0                   @ 0x0E*8+0;
extern volatile sbit WDTIN_1                   @ 0x0E*8+1;
extern volatile sbit WDTIN_2                   @ 0x0E*8+2;
extern volatile sbit WDTIN_3                   @ 0x0E*8+3;
extern volatile sbit WDTIN_4                   @ 0x0E*8+4;
extern volatile sbit WDTIN_5                   @ 0x0E*8+5;
extern volatile sbit WDTIN_6                   @ 0x0E*8+6;
extern volatile sbit WDTIN_7                   @ 0x0E*8+7;

//-------------------------------------------------------
//  TM0CON register bit map
//-------------------------------------------------------
extern volatile sbit T0SEL_0                   @ 0x0F*8+0;
extern volatile sbit T0SEL_1                   @ 0x0F*8+1;
extern volatile sbit T0RSTB                    @ 0x0F*8+2;
extern volatile sbit T0RATE_0                  @ 0x0F*8+4;
extern volatile sbit T0RATE_1                  @ 0x0F*8+5;
extern volatile sbit T0RATE_2                  @ 0x0F*8+6;
extern volatile sbit T0EN                      @ 0x0F*8+7;

//-------------------------------------------------------
//  TM0IN register bit map
//-------------------------------------------------------
extern volatile sbit TM0IN_0                   @ 0x10*8+0;
extern volatile sbit TM0IN_1                   @ 0x10*8+1;
extern volatile sbit TM0IN_2                   @ 0x10*8+2;
extern volatile sbit TM0IN_3                   @ 0x10*8+3;
extern volatile sbit TM0IN_4                   @ 0x10*8+4;
extern volatile sbit TM0IN_5                   @ 0x10*8+5;
extern volatile sbit TM0IN_6                   @ 0x10*8+6;
extern volatile sbit TM0IN_7                   @ 0x10*8+7;

//-------------------------------------------------------
//  TM0CNT register bit map
//-------------------------------------------------------
extern volatile sbit TM0CNT_0                  @ 0x11*8+0;
extern volatile sbit TM0CNT_1                  @ 0x11*8+1;
extern volatile sbit TM0CNT_2                  @ 0x11*8+2;
extern volatile sbit TM0CNT_3                  @ 0x11*8+3;
extern volatile sbit TM0CNT_4                  @ 0x11*8+4;
extern volatile sbit TM0CNT_5                  @ 0x11*8+5;
extern volatile sbit TM0CNT_6                  @ 0x11*8+6;
extern volatile sbit TM0CNT_7                  @ 0x11*8+7;

//-------------------------------------------------------
//  ADOH register bit map
//-------------------------------------------------------
extern volatile sbit ADO_16                    @ 0x12*8+0;
extern volatile sbit ADO_17                    @ 0x12*8+1;
extern volatile sbit ADO_18                    @ 0x12*8+2;
extern volatile sbit ADO_19                    @ 0x12*8+3;
extern volatile sbit ADO_20                    @ 0x12*8+4;
extern volatile sbit ADO_21                    @ 0x12*8+5;
extern volatile sbit ADO_22                    @ 0x12*8+6;
extern volatile sbit ADO_23                    @ 0x12*8+7;

//-------------------------------------------------------
//  ADOL register bit map
//-------------------------------------------------------
extern volatile sbit ADO_8                     @ 0x13*8+0;
extern volatile sbit ADO_9                     @ 0x13*8+1;
extern volatile sbit ADO_10                    @ 0x13*8+2;
extern volatile sbit ADO_11                    @ 0x13*8+3;
extern volatile sbit ADO_12                    @ 0x13*8+4;
extern volatile sbit ADO_13                    @ 0x13*8+5;
extern volatile sbit ADO_14                    @ 0x13*8+6;
extern volatile sbit ADO_15                    @ 0x13*8+7;

//-------------------------------------------------------
//  ADOLL register bit map
//-------------------------------------------------------
extern volatile sbit ADO_0                     @ 0x14*8+0;
extern volatile sbit ADO_1                     @ 0x14*8+1;
extern volatile sbit ADO_2                     @ 0x14*8+2;
extern volatile sbit ADO_3                     @ 0x14*8+3;
extern volatile sbit ADO_4                     @ 0x14*8+4;
extern volatile sbit ADO_5                     @ 0x14*8+5;
extern volatile sbit ADO_6                     @ 0x14*8+6;
extern volatile sbit ADO_7                     @ 0x14*8+7;

//-------------------------------------------------------
//  ADCON register bit map
//-------------------------------------------------------
extern volatile sbit ADGN_0                    @ 0x15*8+0;
extern volatile sbit ADGN_1                    @ 0x15*8+1;
extern volatile sbit FS_SEL_0                  @ 0x15*8+2;
extern volatile sbit FS_SEL_1                  @ 0x15*8+3;
extern volatile sbit CM_SEL                    @ 0x15*8+4;

//-------------------------------------------------------
//  ADC_TR0 register bit map
//-------------------------------------------------------
extern volatile sbit CHOPM_0                   @ 0x16*8+3;
extern volatile sbit CHOPM_1                   @ 0x16*8+4;
extern volatile sbit CHOPM_2                   @ 0x16*8+5;
extern volatile sbit SINL_0                    @ 0x16*8+6;
extern volatile sbit SINL_1                    @ 0x16*8+7;

//-------------------------------------------------------
//  ADC_TR1 register bit map
//-------------------------------------------------------
extern volatile sbit ADEN                      @ 0x17*8+0;
extern volatile sbit CHOPAI_0                  @ 0x17*8+1;
extern volatile sbit CHOPAI_1                  @ 0x17*8+2;
extern volatile sbit CHOPAI_2                  @ 0x17*8+3;
extern volatile sbit ADM_0                     @ 0x17*8+4;
extern volatile sbit ADM_1                     @ 0x17*8+5;
extern volatile sbit ADM_2                     @ 0x17*8+6;
extern volatile sbit ADM_3                     @ 0x17*8+7;

//-------------------------------------------------------
//  ADC_TR2 register bit map
//-------------------------------------------------------
extern volatile sbit IMOD                      @ 0x18*8+0;
extern volatile sbit EN_ADCAT                  @ 0x18*8+1;
extern volatile sbit EMCRCS_0                  @ 0x18*8+2;
extern volatile sbit EMCRCS_1                  @ 0x18*8+3;
extern volatile sbit PGA_0                     @ 0x18*8+4;
extern volatile sbit PGA_1                     @ 0x18*8+5;
extern volatile sbit EN_SP                     @ 0x18*8+6;
extern volatile sbit BUFBP                     @ 0x18*8+7;

//-------------------------------------------------------
//  OTPAW register bit map
//-------------------------------------------------------
extern volatile sbit ERV                       @ 0x19*8+3;
extern volatile sbit Q_IREF                    @ 0x19*8+4;
extern volatile sbit Q_BIAS                    @ 0x19*8+7;

//-------------------------------------------------------
//  MCK register bit map
//-------------------------------------------------------
extern volatile sbit M1_CK                     @ 0x1A*8+1;
extern volatile sbit M2_CK                     @ 0x1A*8+2;
extern volatile sbit M3_CK                     @ 0x1A*8+3;
extern volatile sbit CST_WDT                   @ 0x1A*8+5;

//-------------------------------------------------------
//  PCK register bit map
//-------------------------------------------------------
extern volatile sbit CSE_LCD                   @ 0x1B*8+0;
extern volatile sbit S_beep_0                  @ 0x1B*8+1;
extern volatile sbit S_beep_1                  @ 0x1B*8+2;
extern volatile sbit LCDSCKS_0                 @ 0x1B*8+3;
extern volatile sbit LCDSCKS_1                 @ 0x1B*8+4;
extern volatile sbit LCDSCKS_2                 @ 0x1B*8+5;
extern volatile sbit LCDSCKS_3                 @ 0x1B*8+6;
extern volatile sbit WDT_LCD                   @ 0x1B*8+7;

//-------------------------------------------------------
//  MCK2 register bit map
//-------------------------------------------------------
extern volatile sbit CLK_SEL                   @ 0x1C*8+0;
extern volatile sbit EO_SLP                    @ 0x1C*8+2;
extern volatile sbit CST_IN                    @ 0x1C*8+3;
extern volatile sbit CST_E                     @ 0x1C*8+4;
extern volatile sbit XTALSEL                   @ 0x1C*8+5;
extern volatile sbit T2SEL_0                   @ 0x1C*8+6;
extern volatile sbit T2SEL_1                   @ 0x1C*8+7;

//-------------------------------------------------------
//  TM2CON register bit map
//-------------------------------------------------------
extern volatile sbit PWM2OUT                   @ 0x1D*8+0;
extern volatile sbit T2OUT                     @ 0x1D*8+1;
extern volatile sbit T2RSTB                    @ 0x1D*8+2;
extern volatile sbit T2CKS                     @ 0x1D*8+3;
extern volatile sbit T2RATE_0                  @ 0x1D*8+4;
extern volatile sbit T2RATE_1                  @ 0x1D*8+5;
extern volatile sbit T2RATE_2                  @ 0x1D*8+6;
extern volatile sbit T2EN                      @ 0x1D*8+7;

//-------------------------------------------------------
//  TM2IN register bit map
//-------------------------------------------------------
extern volatile sbit TM2IN_0                   @ 0x1E*8+0;
extern volatile sbit TM2IN_1                   @ 0x1E*8+1;
extern volatile sbit TM2IN_2                   @ 0x1E*8+2;
extern volatile sbit TM2IN_3                   @ 0x1E*8+3;
extern volatile sbit TM2IN_4                   @ 0x1E*8+4;
extern volatile sbit TM2IN_5                   @ 0x1E*8+5;
extern volatile sbit TM2IN_6                   @ 0x1E*8+6;
extern volatile sbit TM2IN_7                   @ 0x1E*8+7;

//-------------------------------------------------------
//  TM2CNT register bit map
//-------------------------------------------------------
extern volatile sbit TM2CNT_0                  @ 0x1F*8+0;
extern volatile sbit TM2CNT_1                  @ 0x1F*8+1;
extern volatile sbit TM2CNT_2                  @ 0x1F*8+2;
extern volatile sbit TM2CNT_3                  @ 0x1F*8+3;
extern volatile sbit TM2CNT_4                  @ 0x1F*8+4;
extern volatile sbit TM2CNT_5                  @ 0x1F*8+5;
extern volatile sbit TM2CNT_6                  @ 0x1F*8+6;
extern volatile sbit TM2CNT_7                  @ 0x1F*8+7;

//-------------------------------------------------------
//  TM2R register bit map
//-------------------------------------------------------
extern volatile sbit TM2R_0                    @ 0x20*8+0;
extern volatile sbit TM2R_1                    @ 0x20*8+1;
extern volatile sbit TM2R_2                    @ 0x20*8+2;
extern volatile sbit TM2R_3                    @ 0x20*8+3;
extern volatile sbit TM2R_4                    @ 0x20*8+4;
extern volatile sbit TM2R_5                    @ 0x20*8+5;
extern volatile sbit TM2R_6                    @ 0x20*8+6;
extern volatile sbit TM2R_7                    @ 0x20*8+7;

//-------------------------------------------------------
//  TM2INH register bit map
//-------------------------------------------------------
extern volatile sbit TM2IN_8                   @ 0x21*8+0;
extern volatile sbit TM2IN_9                   @ 0x21*8+1;
extern volatile sbit TM2IN_10                  @ 0x21*8+2;
extern volatile sbit TM2IN_11                  @ 0x21*8+3;

//-------------------------------------------------------
//  TM2CNTH register bit map
//-------------------------------------------------------
extern volatile sbit TM2CNT_8                  @ 0x22*8+0;
extern volatile sbit TM2CNT_9                  @ 0x22*8+1;
extern volatile sbit TM2CNT_10                 @ 0x22*8+2;
extern volatile sbit TM2CNT_11                 @ 0x22*8+3;

//-------------------------------------------------------
//  TM2RH register bit map
//-------------------------------------------------------
extern volatile sbit TM2R_8                    @ 0x23*8+0;
extern volatile sbit TM2R_9                    @ 0x23*8+1;
extern volatile sbit TM2R_10                   @ 0x23*8+2;
extern volatile sbit TM2R_11                   @ 0x23*8+3;

//-------------------------------------------------------
//  PT1 register bit map
//-------------------------------------------------------
extern volatile sbit PT1_4                     @ 0x24*8+4;
extern volatile sbit PT1_5                     @ 0x24*8+5;
extern volatile sbit PT1_6                     @ 0x24*8+6;
extern volatile sbit PT1_7                     @ 0x24*8+7;

//-------------------------------------------------------
//  PT1EN register bit map
//-------------------------------------------------------
extern volatile sbit PT1EN_4                   @ 0x25*8+4;
extern volatile sbit PT1EN_5                   @ 0x25*8+5;
extern volatile sbit PT1EN_6                   @ 0x25*8+6;
extern volatile sbit PT1EN_7                   @ 0x25*8+7;

//-------------------------------------------------------
//  PT1PU register bit map
//-------------------------------------------------------
extern volatile sbit PT1PU_4                   @ 0x26*8+4;
extern volatile sbit PT1PU_5                   @ 0x26*8+5;
extern volatile sbit PT1PU_6                   @ 0x26*8+6;
extern volatile sbit PT1PU_7                   @ 0x26*8+7;

//-------------------------------------------------------
//  AIENB register bit map
//-------------------------------------------------------
extern volatile sbit AIENB1                    @ 0x27*8+3;

//-------------------------------------------------------
//  PT2 register bit map
//-------------------------------------------------------
extern volatile sbit PT2_0                     @ 0x28*8+0;
extern volatile sbit PT2_1                     @ 0x28*8+1;
extern volatile sbit PT2_2                     @ 0x28*8+2;
extern volatile sbit PT2_3                     @ 0x28*8+3;
extern volatile sbit PT2_4                     @ 0x28*8+4;
extern volatile sbit PT2_5                     @ 0x28*8+5;
extern volatile sbit PT2_6                     @ 0x28*8+6;
extern volatile sbit PT2_7                     @ 0x28*8+7;

//-------------------------------------------------------
//  PT2EN register bit map
//-------------------------------------------------------
extern volatile sbit PT2EN_0                   @ 0x29*8+0;
extern volatile sbit PT2EN_1                   @ 0x29*8+1;
extern volatile sbit PT2EN_2                   @ 0x29*8+2;
extern volatile sbit PT2EN_3                   @ 0x29*8+3;
extern volatile sbit PT2EN_4                   @ 0x29*8+4;
extern volatile sbit PT2EN_5                   @ 0x29*8+5;
extern volatile sbit PT2EN_6                   @ 0x29*8+6;
extern volatile sbit PT2EN_7                   @ 0x29*8+7;

//-------------------------------------------------------
//  PT2PU register bit map
//-------------------------------------------------------
extern volatile sbit PT2PU_0                   @ 0x2A*8+0;
extern volatile sbit PT2PU_1                   @ 0x2A*8+1;
extern volatile sbit PT2PU_2                   @ 0x2A*8+2;
extern volatile sbit PT2PU_3                   @ 0x2A*8+3;
extern volatile sbit PT2PU_4                   @ 0x2A*8+4;
extern volatile sbit PT2PU_5                   @ 0x2A*8+5;
extern volatile sbit PT2PU_6                   @ 0x2A*8+6;
extern volatile sbit PT2PU_7                   @ 0x2A*8+7;

//-------------------------------------------------------
//  PT2MR register bit map
//-------------------------------------------------------
extern volatile sbit E0M_0                     @ 0x2B*8+0;
extern volatile sbit E0M_1                     @ 0x2B*8+1;
extern volatile sbit E1M_0                     @ 0x2B*8+2;
extern volatile sbit E1M_1                     @ 0x2B*8+3;
extern volatile sbit BZEN                      @ 0x2B*8+7;

//-------------------------------------------------------
//  PT2CON register bit map
//-------------------------------------------------------
extern volatile sbit BZSEL                     @ 0x2C*8+3;
extern volatile sbit SEGCON3                   @ 0x2C*8+4;
extern volatile sbit SEGCON2                   @ 0x2C*8+5;
extern volatile sbit SEGCON0                   @ 0x2C*8+6;
extern volatile sbit SEGCON1                   @ 0x2C*8+7;

//-------------------------------------------------------
//  PT3 register bit map
//-------------------------------------------------------
extern volatile sbit PT3_0                     @ 0x2D*8+0;
extern volatile sbit PT3_1                     @ 0x2D*8+1;
extern volatile sbit PT3_2                     @ 0x2D*8+2;
extern volatile sbit PT3_3                     @ 0x2D*8+3;
extern volatile sbit PT3_4                     @ 0x2D*8+4;
extern volatile sbit PT3_5                     @ 0x2D*8+5;
extern volatile sbit PT3_6                     @ 0x2D*8+6;
extern volatile sbit PT3_7                     @ 0x2D*8+7;

//-------------------------------------------------------
//  PT3EN register bit map
//-------------------------------------------------------
extern volatile sbit PT3EN_0                   @ 0x2E*8+0;
extern volatile sbit PT3EN_1                   @ 0x2E*8+1;
extern volatile sbit PT3EN_2                   @ 0x2E*8+2;
extern volatile sbit PT3EN_3                   @ 0x2E*8+3;
extern volatile sbit PT3EN_4                   @ 0x2E*8+4;
extern volatile sbit PT3EN_5                   @ 0x2E*8+5;
extern volatile sbit PT3EN_6                   @ 0x2E*8+6;
extern volatile sbit PT3EN_7                   @ 0x2E*8+7;

//-------------------------------------------------------
//  PT3CON register bit map
//-------------------------------------------------------
extern volatile sbit PT3CON_0                  @ 0x2F*8+0;
extern volatile sbit PT3CON_1                  @ 0x2F*8+1;
extern volatile sbit PT3CON_2                  @ 0x2F*8+2;
extern volatile sbit PT3CON_3                  @ 0x2F*8+3;
extern volatile sbit PT3CON_4                  @ 0x2F*8+4;
extern volatile sbit PT3CON_5                  @ 0x2F*8+5;
extern volatile sbit PT3CON_6                  @ 0x2F*8+6;
extern volatile sbit PT3CON_7                  @ 0x2F*8+7;

//-------------------------------------------------------
//  PT3PU register bit map
//-------------------------------------------------------
extern volatile sbit PT3PU_0                   @ 0x30*8+0;
extern volatile sbit PT3PU_1                   @ 0x30*8+1;
extern volatile sbit PT3PU_2                   @ 0x30*8+2;
extern volatile sbit PT3PU_3                   @ 0x30*8+3;
extern volatile sbit PT3PU_4                   @ 0x30*8+4;
extern volatile sbit PT3PU_5                   @ 0x30*8+5;
extern volatile sbit PT3PU_6                   @ 0x30*8+6;
extern volatile sbit PT3PU_7                   @ 0x30*8+7;

//-------------------------------------------------------
//  PT4 register bit map
//-------------------------------------------------------
extern volatile sbit PT4_0                     @ 0x31*8+0;
extern volatile sbit PT4_1                     @ 0x31*8+1;
extern volatile sbit PT4_2                     @ 0x31*8+2;
extern volatile sbit PT4_3                     @ 0x31*8+3;

//-------------------------------------------------------
//  PT4EN register bit map
//-------------------------------------------------------
extern volatile sbit PT4EN_0                   @ 0x32*8+0;
extern volatile sbit PT4EN_1                   @ 0x32*8+1;
extern volatile sbit PT4EN_2                   @ 0x32*8+2;
extern volatile sbit PT4EN_3                   @ 0x32*8+3;

//-------------------------------------------------------
//  PT4CON register bit map
//-------------------------------------------------------
extern volatile sbit PT4CON_0                  @ 0x33*8+0;
extern volatile sbit PT4CON_1                  @ 0x33*8+1;
extern volatile sbit PT4CON_2                  @ 0x33*8+2;
extern volatile sbit PT4CON_3                  @ 0x33*8+3;

//-------------------------------------------------------
//  PT4PU register bit map
//-------------------------------------------------------
extern volatile sbit PT4PU_0                   @ 0x34*8+0;
extern volatile sbit PT4PU_1                   @ 0x34*8+1;
extern volatile sbit PT4PU_2                   @ 0x34*8+2;
extern volatile sbit PT4PU_3                   @ 0x34*8+3;

//-------------------------------------------------------
//  PTINT register bit map
//-------------------------------------------------------
extern volatile sbit PTW0_0                    @ 0x35*8+0;
extern volatile sbit PTW0_1                    @ 0x35*8+1;
extern volatile sbit IO_BGDRV                  @ 0x35*8+2;
extern volatile sbit PT_SMT                    @ 0x35*8+3;
extern volatile sbit PTW1_0                    @ 0x35*8+4;
extern volatile sbit PTW1_1                    @ 0x35*8+5;
extern volatile sbit PTW1_2                    @ 0x35*8+6;

//-------------------------------------------------------
//  INTF2 register bit map
//-------------------------------------------------------
extern volatile sbit URIF                      @ 0x36*8+0;
extern volatile sbit RTCIF                     @ 0x36*8+1;

//-------------------------------------------------------
//  INTE2 register bit map
//-------------------------------------------------------
extern volatile sbit RTCIE                     @ 0x37*8+1;

//-------------------------------------------------------
//  LDOS register bit map
//-------------------------------------------------------
extern volatile sbit LVDAUTO                   @ 0x38*8+0;
extern volatile sbit LDOS_0                    @ 0x38*8+6;
extern volatile sbit LDOS_1                    @ 0x38*8+7;

//-------------------------------------------------------
//  NETF register bit map
//-------------------------------------------------------
extern volatile sbit ENVB                      @ 0x39*8+0;
extern volatile sbit ENVDDA                    @ 0x39*8+5;
extern volatile sbit LVR_EN                    @ 0x39*8+6;
extern volatile sbit CHP_VPP                   @ 0x39*8+7;

//-------------------------------------------------------
//  SVD register bit map
//-------------------------------------------------------
extern volatile sbit LBOUT                     @ 0x3D*8+0;
extern volatile sbit LVD_EN                    @ 0x3D*8+1;
extern volatile sbit SILB_0                    @ 0x3D*8+2;
extern volatile sbit SILB_1                    @ 0x3D*8+3;
extern volatile sbit SILB_2                    @ 0x3D*8+4;
extern volatile sbit SILB_3                    @ 0x3D*8+5;
extern volatile sbit SILB_4                    @ 0x3D*8+6;
extern volatile sbit SILB_5                    @ 0x3D*8+7;

//-------------------------------------------------------
//  LCDCON1 register bit map
//-------------------------------------------------------
extern volatile sbit LCDREF_0                  @ 0x3E*8+0;
extern volatile sbit LCDREF_1                  @ 0x3E*8+1;
extern volatile sbit VLCDX_0                   @ 0x3E*8+3;
extern volatile sbit VLCDX_1                   @ 0x3E*8+4;
extern volatile sbit LEVEL_S                   @ 0x3E*8+5;
extern volatile sbit LCDCH                     @ 0x3E*8+6;

//-------------------------------------------------------
//  LCDENR register bit map
//-------------------------------------------------------
extern volatile sbit ENPMPL                    @ 0x3F*8+0;
extern volatile sbit LCD_DUTY_0                @ 0x3F*8+1;
extern volatile sbit LCD_DUTY_1                @ 0x3F*8+2;
extern volatile sbit LEVEL                     @ 0x3F*8+3;
extern volatile sbit LCDWS                     @ 0x3F*8+4;
extern volatile sbit LCDEN                     @ 0x3F*8+5;
extern volatile sbit LCDCKS_0                  @ 0x3F*8+6;
extern volatile sbit LCDCKS_1                  @ 0x3F*8+7;

//-------------------------------------------------------
//  LEDADR register bit map
//-------------------------------------------------------
extern volatile sbit LEDADR_0                  @ 0x40*8+0;
extern volatile sbit LEDADR_1                  @ 0x40*8+1;
extern volatile sbit LEDADR_2                  @ 0x40*8+2;

//-------------------------------------------------------
//  LEDDAT register bit map
//-------------------------------------------------------
extern volatile sbit LEDDAT_0                  @ 0x41*8+0;
extern volatile sbit LEDDAT_1                  @ 0x41*8+1;
extern volatile sbit LEDDAT_2                  @ 0x41*8+2;
extern volatile sbit LEDDAT_3                  @ 0x41*8+3;
extern volatile sbit LEDDAT_4                  @ 0x41*8+4;
extern volatile sbit LEDDAT_5                  @ 0x41*8+5;
extern volatile sbit LEDDAT_6                  @ 0x41*8+6;
extern volatile sbit LEDDAT_7                  @ 0x41*8+7;

//-------------------------------------------------------
//  LEDDUTY register bit map
//-------------------------------------------------------
extern volatile sbit LEDDUTY_0                 @ 0x42*8+0;
extern volatile sbit LEDDUTY_1                 @ 0x42*8+1;
extern volatile sbit LEDDUTY_2                 @ 0x42*8+2;
extern volatile sbit LEDDUTY_3                 @ 0x42*8+3;
extern volatile sbit LEDDUTY_4                 @ 0x42*8+4;

//-------------------------------------------------------
//  LEDCOM register bit map
//-------------------------------------------------------
extern volatile sbit LEDCOM_0                  @ 0x43*8+0;
extern volatile sbit LEDCOM_1                  @ 0x43*8+1;
extern volatile sbit LEDCOM_2                  @ 0x43*8+2;
extern volatile sbit LEDCOM_3                  @ 0x43*8+3;
extern volatile sbit LEDCOM_4                  @ 0x43*8+4;
extern volatile sbit LEDCOM_5                  @ 0x43*8+5;
extern volatile sbit LEDCOM_6                  @ 0x43*8+6;
extern volatile sbit LEDCOM_7                  @ 0x43*8+7;

//-------------------------------------------------------
//  LEDCON register bit map
//-------------------------------------------------------
extern volatile sbit LEDNUM_0                  @ 0x44*8+0;
extern volatile sbit LEDNUM_1                  @ 0x44*8+1;
extern volatile sbit LEDAUTO                   @ 0x44*8+4;
extern volatile sbit LEDCKS_0                  @ 0x44*8+5;
extern volatile sbit LEDCKS_1                  @ 0x44*8+6;
extern volatile sbit LEDEN                     @ 0x44*8+7;

//-------------------------------------------------------
//  LEDCON1 register bit map
//-------------------------------------------------------
extern volatile sbit LEDCUR_0                  @ 0x45*8+0;
extern volatile sbit LEDCUR_1                  @ 0x45*8+1;

//-------------------------------------------------------
//  WWDTCR register bit map
//-------------------------------------------------------
extern volatile sbit TR_0                      @ 0x47*8+0;
extern volatile sbit TR_1                      @ 0x47*8+1;
extern volatile sbit TR_2                      @ 0x47*8+2;
extern volatile sbit TR_3                      @ 0x47*8+3;
extern volatile sbit TR_4                      @ 0x47*8+4;
extern volatile sbit TR_5                      @ 0x47*8+5;
extern volatile sbit TR_6                      @ 0x47*8+6;
extern volatile sbit WWDTEN                    @ 0x47*8+7;

//-------------------------------------------------------
//  WWDTWR register bit map
//-------------------------------------------------------
extern volatile sbit WD_0                      @ 0x48*8+0;
extern volatile sbit WD_1                      @ 0x48*8+1;
extern volatile sbit WD_2                      @ 0x48*8+2;
extern volatile sbit WD_3                      @ 0x48*8+3;
extern volatile sbit WD_4                      @ 0x48*8+4;
extern volatile sbit WD_5                      @ 0x48*8+5;
extern volatile sbit WD_6                      @ 0x48*8+6;

//-------------------------------------------------------
//  UR_CR0 register bit map
//-------------------------------------------------------
extern volatile sbit UART_SEL_0                @ 0x4F*8+0;
extern volatile sbit UART_SEL_1                @ 0x4F*8+1;

//-------------------------------------------------------
//  UR_CR1 register bit map
//-------------------------------------------------------
extern volatile sbit UART0_EN                  @ 0x50*8+0;
extern volatile sbit TX_EN                     @ 0x50*8+2;
extern volatile sbit RX_EN                     @ 0x50*8+3;
extern volatile sbit RX9_EN                    @ 0x50*8+4;
extern volatile sbit TX9_EN                    @ 0x50*8+5;
extern volatile sbit RX9D                      @ 0x50*8+6;
extern volatile sbit TX9D                      @ 0x50*8+7;

//-------------------------------------------------------
//  UR_BRR0 register bit map
//-------------------------------------------------------
extern volatile sbit BRR0_0                    @ 0x51*8+0;
extern volatile sbit BRR0_1                    @ 0x51*8+1;
extern volatile sbit BRR0_2                    @ 0x51*8+2;
extern volatile sbit BRR0_3                    @ 0x51*8+3;
extern volatile sbit BRR0_4                    @ 0x51*8+4;
extern volatile sbit BRR0_5                    @ 0x51*8+5;
extern volatile sbit BRR0_6                    @ 0x51*8+6;
extern volatile sbit BRR0_7                    @ 0x51*8+7;

//-------------------------------------------------------
//  UR_BRR1 register bit map
//-------------------------------------------------------
extern volatile sbit BRR1_0                    @ 0x52*8+0;
extern volatile sbit BRR1_1                    @ 0x52*8+1;
extern volatile sbit BRR1_2                    @ 0x52*8+2;
extern volatile sbit BRR1_3                    @ 0x52*8+3;
extern volatile sbit UARTDIV_0                 @ 0x52*8+4;
extern volatile sbit UARTDIV_1                 @ 0x52*8+5;
extern volatile sbit UARTDIV_2                 @ 0x52*8+6;

//-------------------------------------------------------
//  UR_TX_REG register bit map
//-------------------------------------------------------
extern volatile sbit TX_REG_0                  @ 0x53*8+0;
extern volatile sbit TX_REG_1                  @ 0x53*8+1;
extern volatile sbit TX_REG_2                  @ 0x53*8+2;
extern volatile sbit TX_REG_3                  @ 0x53*8+3;
extern volatile sbit TX_REG_4                  @ 0x53*8+4;
extern volatile sbit TX_REG_5                  @ 0x53*8+5;
extern volatile sbit TX_REG_6                  @ 0x53*8+6;
extern volatile sbit TX_REG_7                  @ 0x53*8+7;

//-------------------------------------------------------
//  UR_RX_REG register bit map
//-------------------------------------------------------
extern volatile sbit RX_REG_0                  @ 0x54*8+0;
extern volatile sbit RX_REG_1                  @ 0x54*8+1;
extern volatile sbit RX_REG_2                  @ 0x54*8+2;
extern volatile sbit RX_REG_3                  @ 0x54*8+3;
extern volatile sbit RX_REG_4                  @ 0x54*8+4;
extern volatile sbit RX_REG_5                  @ 0x54*8+5;
extern volatile sbit RX_REG_6                  @ 0x54*8+6;
extern volatile sbit RX_REG_7                  @ 0x54*8+7;

//-------------------------------------------------------
//  UR_ST register bit map
//-------------------------------------------------------
extern volatile sbit STOP_ERR                  @ 0x55*8+0;
extern volatile sbit RX_OVERR                  @ 0x55*8+1;
extern volatile sbit TX_BUSY                   @ 0x55*8+2;
extern volatile sbit RX_BUSY                   @ 0x55*8+3;
extern volatile sbit TXFIFO_EMPTY                @ 0x55*8+4;
extern volatile sbit UR_RINV                   @ 0x55*8+6;
extern volatile sbit UR_TINV                   @ 0x55*8+7;

//-------------------------------------------------------
//  UR_INTF register bit map
//-------------------------------------------------------
extern volatile sbit UR_TEIF                   @ 0x56*8+0;
extern volatile sbit URWKIF                    @ 0x56*8+1;
extern volatile sbit UR_RNIF                   @ 0x56*8+2;
extern volatile sbit UR_RHIF                   @ 0x56*8+3;
extern volatile sbit URERRIF                   @ 0x56*8+4;

//-------------------------------------------------------
//  UR_INTE register bit map
//-------------------------------------------------------
extern volatile sbit UR_TEIE                   @ 0x57*8+0;
extern volatile sbit URWKIE                    @ 0x57*8+1;
extern volatile sbit UR_RNIE                   @ 0x57*8+2;
extern volatile sbit UR_RHIE                   @ 0x57*8+3;
extern volatile sbit URERRIE                   @ 0x57*8+4;

//-------------------------------------------------------
//  METCH register bit map
//-------------------------------------------------------
extern volatile sbit GTC_0                     @ 0x59*8+2;
extern volatile sbit GTC_1                     @ 0x59*8+3;
extern volatile sbit GTC_2                     @ 0x59*8+4;
extern volatile sbit GTC_3                     @ 0x59*8+5;
extern volatile sbit GTC_4                     @ 0x59*8+6;
extern volatile sbit GTC_5                     @ 0x59*8+7;

//-------------------------------------------------------
//  RTCCON register bit map
//-------------------------------------------------------
extern volatile sbit INTEGER_0                 @ 0x5B*8+0;
extern volatile sbit INTEGER_1                 @ 0x5B*8+1;
extern volatile sbit INTEGER_2                 @ 0x5B*8+2;
extern volatile sbit INTEGER_3                 @ 0x5B*8+3;
extern volatile sbit RTCEN                     @ 0x5B*8+4;
extern volatile sbit HR_24_12                 @ 0x5B*8+5;
extern volatile sbit LIR                       @ 0x5B*8+7;

//-------------------------------------------------------
//  RTCAER register bit map
//-------------------------------------------------------
extern volatile sbit AER_0                     @ 0x5C*8+0;
extern volatile sbit AER_1                     @ 0x5C*8+1;
extern volatile sbit AER_2                     @ 0x5C*8+2;
extern volatile sbit AER_3                     @ 0x5C*8+3;
extern volatile sbit AER_4                     @ 0x5C*8+4;
extern volatile sbit AER_5                     @ 0x5C*8+5;
extern volatile sbit AER_6                     @ 0x5C*8+6;
extern volatile sbit AER_7                     @ 0x5C*8+7;

//-------------------------------------------------------
//  RTCYEAR register bit map
//-------------------------------------------------------
extern volatile sbit ONE_YEAR_0                   @ 0x5D*8+0;
extern volatile sbit ONE_YEAR_1                   @ 0x5D*8+1;
extern volatile sbit ONE_YEAR_2                   @ 0x5D*8+2;
extern volatile sbit ONE_YEAR_3                   @ 0x5D*8+3;
extern volatile sbit TEN_YEAR_0                  @ 0x5D*8+4;
extern volatile sbit TEN_YEAR_1                  @ 0x5D*8+5;
extern volatile sbit TEN_YEAR_2                  @ 0x5D*8+6;
extern volatile sbit TEN_YEAR_3                  @ 0x5D*8+7;

//-------------------------------------------------------
//  RTCMON register bit map
//-------------------------------------------------------
extern volatile sbit ONE_MON_0                    @ 0x5E*8+0;
extern volatile sbit ONE_MON_1                    @ 0x5E*8+1;
extern volatile sbit ONE_MON_2                    @ 0x5E*8+2;
extern volatile sbit ONE_MON_3                    @ 0x5E*8+3;
extern volatile sbit TEN_MON                     @ 0x5E*8+4;

//-------------------------------------------------------
//  RTCDAY register bit map
//-------------------------------------------------------
extern volatile sbit ONE_DAT_0                    @ 0x5F*8+0;
extern volatile sbit ONE_DAT_1                    @ 0x5F*8+1;
extern volatile sbit ONE_DAT_2                    @ 0x5F*8+2;
extern volatile sbit ONE_DAT_3                    @ 0x5F*8+3;
extern volatile sbit TEN_DAY_0                   @ 0x5F*8+4;
extern volatile sbit TEN_DAY_1                   @ 0x5F*8+5;

//-------------------------------------------------------
//  RTCHOUR register bit map
//-------------------------------------------------------
extern volatile sbit ONE_HOUR_0                   @ 0x60*8+0;
extern volatile sbit ONE_HOUR_1                   @ 0x60*8+1;
extern volatile sbit ONE_HOUR_2                   @ 0x60*8+2;
extern volatile sbit ONE_HOUR_3                   @ 0x60*8+3;
extern volatile sbit TEN_HOUR10_0                @ 0x60*8+4;
extern volatile sbit TEN_HOUR10_1                @ 0x60*8+5;
extern volatile sbit AM_PM                     @ 0x60*8+6;

//-------------------------------------------------------
//  RTCMIN register bit map
//-------------------------------------------------------
extern volatile sbit ONE_MIN_0                    @ 0x61*8+0;
extern volatile sbit ONE_MIN_1                    @ 0x61*8+1;
extern volatile sbit ONE_MIN_2                    @ 0x61*8+2;
extern volatile sbit ONE_MIN_3                    @ 0x61*8+3;
extern volatile sbit TEN_MIN_0                   @ 0x61*8+4;
extern volatile sbit TEN_MIN_1                   @ 0x61*8+5;
extern volatile sbit TEN_MIN_2                   @ 0x61*8+6;

//-------------------------------------------------------
//  RTCSEC register bit map
//-------------------------------------------------------
extern volatile sbit ONE_SEC_0                    @ 0x62*8+0;
extern volatile sbit ONE_SEC_1                    @ 0x62*8+1;
extern volatile sbit ONE_SEC_2                    @ 0x62*8+2;
extern volatile sbit ONE_SEC_3                    @ 0x62*8+3;
extern volatile sbit TEN_SEC_0                   @ 0x62*8+4;
extern volatile sbit TEN_SEC_1                   @ 0x62*8+5;
extern volatile sbit TEN_SEC_2                   @ 0x62*8+6;

//-------------------------------------------------------
//  FRACTION register bit map
//-------------------------------------------------------
extern volatile sbit FRACTION_0                @ 0x63*8+0;
extern volatile sbit FRACTION_1                @ 0x63*8+1;
extern volatile sbit FRACTION_2                @ 0x63*8+2;
extern volatile sbit FRACTION_3                @ 0x63*8+3;
extern volatile sbit FRACTION_4                @ 0x63*8+4;
extern volatile sbit FRACTION_5                @ 0x63*8+5;

//-------------------------------------------------------
//  RTCDWR register bit map
//-------------------------------------------------------
extern volatile sbit DWR_0                     @ 0x64*8+0;
extern volatile sbit DWR_1                     @ 0x64*8+1;
extern volatile sbit DWR_2                     @ 0x64*8+2;

//-------------------------------------------------------
//  WDT_C register bit map
//-------------------------------------------------------
extern volatile sbit WDT_C_0                   @ 0x65*8+0;
extern volatile sbit WDT_C_1                   @ 0x65*8+1;
extern volatile sbit WDT_C_2                   @ 0x65*8+2;
extern volatile sbit WDT_C_3                   @ 0x65*8+3;
extern volatile sbit WDT_C_4                   @ 0x65*8+4;

//-------------------------------------------------------
//  IOSC_C register bit map
//-------------------------------------------------------
extern volatile sbit IOSC_C_0                  @ 0x66*8+0;
extern volatile sbit IOSC_C_1                  @ 0x66*8+1;
extern volatile sbit IOSC_C_2                  @ 0x66*8+2;
extern volatile sbit IOSC_C_3                  @ 0x66*8+3;
extern volatile sbit IOSC_C_4                  @ 0x66*8+4;
extern volatile sbit IOSC_C_5                  @ 0x66*8+5;
extern volatile sbit IOSC_C_6                  @ 0x66*8+6;
extern volatile sbit IOSC_C_7                  @ 0x66*8+7;

//-------------------------------------------------------
//  VS_C register bit map
//-------------------------------------------------------
extern volatile sbit VS_C_0                    @ 0x67*8+0;
extern volatile sbit VS_C_1                    @ 0x67*8+1;
extern volatile sbit VS_C_2                    @ 0x67*8+2;
extern volatile sbit VS_C_3                    @ 0x67*8+3;
extern volatile sbit VS_C_ATA                    @ 0x67*8+6;
extern volatile sbit VS_C_TRIM_EN                 @ 0x67*8+7;

//-------------------------------------------------------
//  LVD_C register bit map
//-------------------------------------------------------
extern volatile sbit LVD_C_0                   @ 0x68*8+0;
extern volatile sbit LVD_C_1                   @ 0x68*8+1;
extern volatile sbit LVD_C_2                   @ 0x68*8+2;
extern volatile sbit LVD_C_3                   @ 0x68*8+3;
extern volatile sbit LVD_C_4                   @ 0x68*8+4;
extern volatile sbit SIM1EN                    @ 0x68*8+6;
extern volatile sbit LVD_C_TRIM_EN                @ 0x68*8+7;

//-------------------------------------------------------
//  OSCTCX_C register bit map
//-------------------------------------------------------
extern volatile sbit OSCTCX_C_0                @ 0x69*8+0;
extern volatile sbit OSCTCX_C_1                @ 0x69*8+1;

//-------------------------------------------------------
//  TESTM register bit map
//-------------------------------------------------------
extern volatile sbit TESTM_0                   @ 0x6A*8+0;
extern volatile sbit TESTM_1                   @ 0x6A*8+1;
extern volatile sbit TESTM_2                   @ 0x6A*8+2;
extern volatile sbit TESTM_3                   @ 0x6A*8+3;
extern volatile sbit VHH_C                     @ 0x6A*8+7;

//-------------------------------------------------------
//  WRPRT register bit map
//-------------------------------------------------------
extern volatile sbit WRPRT_0                   @ 0x7C*8+0;
extern volatile sbit WRPRT_1                   @ 0x7C*8+1;
extern volatile sbit WRPRT_2                   @ 0x7C*8+2;
extern volatile sbit WRPRT_3                   @ 0x7C*8+3;
extern volatile sbit WRPRT_4                   @ 0x7C*8+4;
extern volatile sbit WRPRT_5                   @ 0x7C*8+5;
extern volatile sbit WRPRT_6                   @ 0x7C*8+6;
extern volatile sbit WRPRT_7                   @ 0x7C*8+7;

//-------------------------------------------------------
//  PAGECTL register bit map
//-------------------------------------------------------
extern volatile sbit PAGE2                     @ 0x7D*8+0;

//-------------------------------------------------------
//  METCH2 register bit map
//-------------------------------------------------------
extern volatile sbit METCH2_0                  @ 0x7E*8+0;
extern volatile sbit METCH2_1                  @ 0x7E*8+1;
extern volatile sbit METCH2_2                  @ 0x7E*8+2;
extern volatile sbit METCH2_3                  @ 0x7E*8+3;
extern volatile sbit METCH2_4                  @ 0x7E*8+4;
extern volatile sbit METCH2_5                  @ 0x7E*8+5;
extern volatile sbit METCH2_6                  @ 0x7E*8+6;
extern volatile sbit METCH2_7                  @ 0x7E*8+7;

//=============== PAGE1 ===========
//-------------------------------------------------------
//  CHIP_ID0L register bit map
//-------------------------------------------------------
extern volatile sbit bank2 CHIP_ID0_0                  @ 0x16*8+0;
extern volatile sbit bank2 CHIP_ID0_1                  @ 0x16*8+1;
extern volatile sbit bank2 CHIP_ID0_2                  @ 0x16*8+2;
extern volatile sbit bank2 CHIP_ID0_3                  @ 0x16*8+3;
extern volatile sbit bank2 CHIP_ID0_4                  @ 0x16*8+4;
extern volatile sbit bank2 CHIP_ID0_5                  @ 0x16*8+5;
extern volatile sbit bank2 CHIP_ID0_6                  @ 0x16*8+6;
extern volatile sbit bank2 CHIP_ID0_7                  @ 0x16*8+7;

//-------------------------------------------------------
//  CHIP_ID0H register bit map
//-------------------------------------------------------
extern volatile sbit bank2 CHIP_ID0_8                  @ 0x17*8+0;
extern volatile sbit bank2 CHIP_ID0_9                  @ 0x17*8+1;
extern volatile sbit bank2 CHIP_ID0_10                  @ 0x17*8+2;
extern volatile sbit bank2 CHIP_ID0_11                  @ 0x17*8+3;
extern volatile sbit bank2 CHIP_ID0_12                  @ 0x17*8+4;
extern volatile sbit bank2 CHIP_ID0_13                  @ 0x17*8+5;
extern volatile sbit bank2 CHIP_ID0_14                  @ 0x17*8+6;
extern volatile sbit bank2 CHIP_ID0_15                  @ 0x17*8+7;

//-------------------------------------------------------
//  CHIP_ID1L register bit map
//-------------------------------------------------------
extern volatile sbit bank2 CHIP_ID1_0                  @ 0x18*8+0;
extern volatile sbit bank2 CHIP_ID1_1                  @ 0x18*8+1;
extern volatile sbit bank2 CHIP_ID1_2                  @ 0x18*8+2;
extern volatile sbit bank2 CHIP_ID1_3                  @ 0x18*8+3;
extern volatile sbit bank2 CHIP_ID1_4                  @ 0x18*8+4;
extern volatile sbit bank2 CHIP_ID1_5                  @ 0x18*8+5;
extern volatile sbit bank2 CHIP_ID1_6                  @ 0x18*8+6;
extern volatile sbit bank2 CHIP_ID1_7                  @ 0x18*8+7;

//-------------------------------------------------------
//  CHIP_ID1H register bit map
//-------------------------------------------------------
extern volatile sbit bank2 CHIP_ID1_8                  @ 0x19*8+0;
extern volatile sbit bank2 CHIP_ID1_9                  @ 0x19*8+1;
extern volatile sbit bank2 CHIP_ID1_10                  @ 0x19*8+2;
extern volatile sbit bank2 CHIP_ID1_11                  @ 0x19*8+3;
extern volatile sbit bank2 CHIP_ID1_12                  @ 0x19*8+4;
extern volatile sbit bank2 CHIP_ID1_13                  @ 0x19*8+5;
extern volatile sbit bank2 CHIP_ID1_14                  @ 0x19*8+6;
extern volatile sbit bank2 CHIP_ID1_15                  @ 0x19*8+7;

//-------------------------------------------------------
//  SFR_WK register bit map
//-------------------------------------------------------
extern volatile sbit bank2 SFR_WK_0                  @ 0x1A*8+0;
extern volatile sbit bank2 SFR_WK_1                  @ 0x1A*8+1;
extern volatile sbit bank2 SFR_WK_2                  @ 0x1A*8+2;
extern volatile sbit bank2 SFR_WK_3                  @ 0x1A*8+3;
extern volatile sbit bank2 SFR_WK_4                  @ 0x1A*8+4;
extern volatile sbit bank2 SFR_WK_5                  @ 0x1A*8+5;
extern volatile sbit bank2 SFR_WK_6                  @ 0x1A*8+6;
extern volatile sbit bank2 SFR_WK_7                  @ 0x1A*8+7;

//-------------------------------------------------------
//  MM_WK register bit map
//-------------------------------------------------------
extern volatile sbit bank2 MM_WK_0                   @ 0x1B*8+0;
extern volatile sbit bank2 MM_WK_1                   @ 0x1B*8+1;
extern volatile sbit bank2 MM_WK_2                   @ 0x1B*8+2;
extern volatile sbit bank2 MM_WK_3                   @ 0x1B*8+3;
extern volatile sbit bank2 MM_WK_4                   @ 0x1B*8+4;
extern volatile sbit bank2 MM_WK_5                   @ 0x1B*8+5;
extern volatile sbit bank2 MM_WK_6                   @ 0x1B*8+6;
extern volatile sbit bank2 MM_WK_7                   @ 0x1B*8+7;

//-------------------------------------------------------
//  UOB_WK register bit map
//-------------------------------------------------------
extern volatile sbit bank2 UOB_WK_0                  @ 0x1C*8+0;
extern volatile sbit bank2 UOB_WK_1                  @ 0x1C*8+1;
extern volatile sbit bank2 UOB_WK_2                  @ 0x1C*8+2;
extern volatile sbit bank2 UOB_WK_3                  @ 0x1C*8+3;
extern volatile sbit bank2 UOB_WK_4                  @ 0x1C*8+4;
extern volatile sbit bank2 UOB_WK_5                  @ 0x1C*8+5;
extern volatile sbit bank2 UOB_WK_6                  @ 0x1C*8+6;
extern volatile sbit bank2 UOB_WK_7                  @ 0x1C*8+7;

//-------------------------------------------------------
//  POB_WK register bit map
//-------------------------------------------------------
extern volatile sbit bank2 POB_WK_0                  @ 0x1D*8+0;
extern volatile sbit bank2 POB_WK_1                  @ 0x1D*8+1;
extern volatile sbit bank2 POB_WK_2                  @ 0x1D*8+2;
extern volatile sbit bank2 POB_WK_3                  @ 0x1D*8+3;
extern volatile sbit bank2 POB_WK_4                  @ 0x1D*8+4;
extern volatile sbit bank2 POB_WK_5                  @ 0x1D*8+5;
extern volatile sbit bank2 POB_WK_6                  @ 0x1D*8+6;
extern volatile sbit bank2 POB_WK_7                  @ 0x1D*8+7;

//-------------------------------------------------------
//  MP_WK register bit map
//-------------------------------------------------------
extern volatile sbit bank2 MP_WK_0                   @ 0x1E*8+0;
extern volatile sbit bank2 MP_WK_1                   @ 0x1E*8+1;
extern volatile sbit bank2 MP_WK_2                   @ 0x1E*8+2;
extern volatile sbit bank2 MP_WK_3                   @ 0x1E*8+3;
extern volatile sbit bank2 MP_WK_4                   @ 0x1E*8+4;
extern volatile sbit bank2 MP_WK_5                   @ 0x1E*8+5;
extern volatile sbit bank2 MP_WK_6                   @ 0x1E*8+6;
extern volatile sbit bank2 MP_WK_7                   @ 0x1E*8+7;

//-------------------------------------------------------
//  CALSEL register bit map
//-------------------------------------------------------
extern volatile sbit bank2 OSC_0                     @ 0x1F*8+0;
extern volatile sbit bank2 OSC_1                     @ 0x1F*8+1;
extern volatile sbit bank2 OSC_2                     @ 0x1F*8+2;
extern volatile sbit bank2 OSC_3                     @ 0x1F*8+3;
extern volatile sbit bank2 TRIMAUTO                  @ 0x1F*8+6;
extern volatile sbit bank2 START                     @ 0x1F*8+7;

//-------------------------------------------------------
//  VS_TRIM register bit map
//-------------------------------------------------------
extern volatile sbit bank2 VS_TRIM_0                 @ 0x20*8+0;
extern volatile sbit bank2 VS_TRIM_1                 @ 0x20*8+1;
extern volatile sbit bank2 VS_TRIM_2                 @ 0x20*8+2;
extern volatile sbit bank2 VS_TRIM_3                 @ 0x20*8+3;
extern volatile sbit bank2 VS_TRIM_ATA                    @ 0x20*8+6;
extern volatile sbit bank2 VS_TRIM_EN                 @ 0x20*8+7;

//-------------------------------------------------------
//  TRIMWDT register bit map
//-------------------------------------------------------
extern volatile sbit bank2 TRIM_WDT_0                @ 0x21*8+0;
extern volatile sbit bank2 TRIM_WDT_1                @ 0x21*8+1;
extern volatile sbit bank2 TRIM_WDT_2                @ 0x21*8+2;
extern volatile sbit bank2 TRIM_WDT_3                @ 0x21*8+3;
extern volatile sbit bank2 TRIM_WDT_4                @ 0x21*8+4;
extern volatile sbit bank2 EN_BIASNA                 @ 0x21*8+7;

//-------------------------------------------------------
//  TRIMHIRC register bit map
//-------------------------------------------------------
extern volatile sbit bank2 TRIM_HIRC_0                @ 0x22*8+0;
extern volatile sbit bank2 TRIM_HIRC_1                @ 0x22*8+1;
extern volatile sbit bank2 TRIM_HIRC_2                @ 0x22*8+2;
extern volatile sbit bank2 TRIM_HIRC_3                @ 0x22*8+3;
extern volatile sbit bank2 TRIM_HIRC_4                @ 0x22*8+4;
extern volatile sbit bank2 TRIM_HIRC_5                @ 0x22*8+5;
extern volatile sbit bank2 TRIM_HIRC_6                @ 0x22*8+6;
extern volatile sbit bank2 TRIM_HIRC_7                @ 0x22*8+7;

//-------------------------------------------------------
//  OSC_DIV register bit map
//-------------------------------------------------------
extern volatile sbit bank2 OSC_DIV_0                 @ 0x23*8+0;
extern volatile sbit bank2 OSC_DIV_1                 @ 0x23*8+1;
extern volatile sbit bank2 OSC_DIV_2                 @ 0x23*8+2;
extern volatile sbit bank2 OSC_DIV_3                 @ 0x23*8+3;
extern volatile sbit bank2 OSC_DIV_SLEEP                     @ 0x23*8+7;

//-------------------------------------------------------
//  SR register bit map
//-------------------------------------------------------
extern volatile sbit bank2 ERR_0                     @ 0x24*8+0;
extern volatile sbit bank2 ERR_1                     @ 0x24*8+1;
extern volatile sbit bank2 BUSY                      @ 0x24*8+2;
extern volatile sbit bank2 MMWEL                     @ 0x24*8+3;
extern volatile sbit bank2 UOBWEL                    @ 0x24*8+4;
extern volatile sbit bank2 POBWEL                    @ 0x24*8+5;
extern volatile sbit bank2 MPWEL                     @ 0x24*8+6;
extern volatile sbit bank2 SFRWEL                    @ 0x24*8+7;

//-------------------------------------------------------
//  VCHECKSUM register bit map
//-------------------------------------------------------
extern volatile sbit bank2 VCHECKSUM_0                @ 0x25*8+0;
extern volatile sbit bank2 VCHECKSUM_1                @ 0x25*8+1;
extern volatile sbit bank2 VCHECKSUM_2                @ 0x25*8+2;
extern volatile sbit bank2 VCHECKSUM_3                @ 0x25*8+3;
extern volatile sbit bank2 VCHECKSUM_4                @ 0x25*8+4;
extern volatile sbit bank2 VCHECKSUM_5                @ 0x25*8+5;
extern volatile sbit bank2 VCHECKSUM_6                @ 0x25*8+6;
extern volatile sbit bank2 VCHECKSUM_7                @ 0x25*8+7;

//-------------------------------------------------------
//  ISPCFG register bit map
//-------------------------------------------------------
extern volatile sbit bank2 PTM_0                     @ 0x26*8+0;
extern volatile sbit bank2 PTM_1                     @ 0x26*8+1;
extern volatile sbit bank2 PTM_2                     @ 0x26*8+2;
extern volatile sbit bank2 Q_MGN2                    @ 0x26*8+3;
extern volatile sbit bank2 Q_MGN1                    @ 0x26*8+4;
extern volatile sbit bank2 VHHDEN                    @ 0x26*8+5;
extern volatile sbit bank2 PROG                      @ 0x26*8+6;
extern volatile sbit bank2 VPPEN                     @ 0x26*8+7;

//-------------------------------------------------------
//  LVD_TRIM register bit map
//-------------------------------------------------------
extern volatile sbit bank2 LVD_TRIM_0                @ 0x27*8+0;
extern volatile sbit bank2 LVD_TRIM_1                @ 0x27*8+1;
extern volatile sbit bank2 LVD_TRIM_2                @ 0x27*8+2;
extern volatile sbit bank2 LVD_TRIM_3                @ 0x27*8+3;
extern volatile sbit bank2 LVD_TRIM_4                @ 0x27*8+4;
extern volatile sbit bank2 LVD_TRIM_EN                @ 0x27*8+7;

//-------------------------------------------------------
//  OSCTCX_TRIM register bit map
//-------------------------------------------------------
extern volatile sbit bank2 OSCTCX_TRIM_0                @ 0x28*8+0;
extern volatile sbit bank2 OSCTCX_TRIM_1                @ 0x28*8+1;

//-------------------------------------------------------
//  SR2 register bit map
//-------------------------------------------------------
extern volatile sbit bank2 TRIM_ERR                  @ 0x2B*8+1;

//-------------------------------------------------------
//  TRIMLIMIT register bit map
//-------------------------------------------------------
extern volatile sbit bank2 TRIM_LIMIT_0                @ 0x2C*8+0;
extern volatile sbit bank2 TRIM_LIMIT_1                @ 0x2C*8+1;
extern volatile sbit bank2 TRIM_LIMIT_2                @ 0x2C*8+2;
extern volatile sbit bank2 TRIM_LIMIT_3                @ 0x2C*8+3;
extern volatile sbit bank2 TRIM_LIMIT_4                @ 0x2C*8+4;
extern volatile sbit bank2 TRIM_LIMIT_5                @ 0x2C*8+5;
extern volatile sbit bank2 TRIM_LIMIT_6                @ 0x2C*8+6;
extern volatile sbit bank2 TRIM_LIMIT_7                @ 0x2C*8+7;

//-------------------------------------------------------
//  TRAMGAP register bit map
//-------------------------------------------------------
extern volatile sbit bank2 TRIM_GAP_0                @ 0x33*8+0;
extern volatile sbit bank2 TRIM_GAP_1                @ 0x33*8+1;
extern volatile sbit bank2 TRIM_GAP_2                @ 0x33*8+2;
extern volatile sbit bank2 TRIM_GAP_3                @ 0x33*8+3;
extern volatile sbit bank2 TRIM_GAP_4                @ 0x33*8+4;
extern volatile sbit bank2 TRIM_GAP_5                @ 0x33*8+5;
extern volatile sbit bank2 TRIM_GAP_6                @ 0x33*8+6;
extern volatile sbit bank2 TRIM_GAP_7                @ 0x33*8+7;

#endif
