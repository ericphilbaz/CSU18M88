.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\",0x64,0,0,0
.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\main.c",0x64,0,0,0
.stabs "int:t1=r1;-32768;32767;",0x80,0,0,0
.stabs "unsigned int:t2=r2;0;65535;",0x80,0,0,0
.stabs "long int:t3=r3;-2147483648;2147483647;",0x80,0,0,0
.stabs "unsigned long int:t4=r4;0;4294967295;",0x80,0,0,0
.stabs "long long unsigned int:t6=r6;0;4294967295;",0x80,0,0,0
.stabs "short int:t7=r7;-32768;32767;",0x80,0,0,0
.stabs "short unsigned int:t8=r8;0;65535;",0x80,0,0,0
.stabs "char:t9=r9;-128;127;",0x80,0,0,0
.stabs "unsigned char:t10=r10;0;255;",0x80,0,0,0
.stabs "_Bool:t11=r11;0;1;",0x80,0,0,0
.stabs "sbit:t12=r12;0;1;",0x80,0,0,0
.stabs "float:t13=r13;4;0;",0x80,0,0,0
.stabs "double:t14=r14;4;0;",0x80,0,0,0
.stabs "long double:t15=r15;4;0;",0x80,0,0,0
.stabs "void:t16=r10;0;255;",0x80,0,0,0
.stabs "ADC_Ready:G12",0x20,0,0,_ADC_Ready
.stabs "temp0:G4",0x20,0,0,_temp0
.stabs "temp1:G4",0x20,0,0,_temp1
.include "csccCond.inc"
.include "csccCmp.inc"
.include "csccShift.inc"
	_INT_FUNCTION_sec .section rom,interrupt
	.global	_INT_FUNCTION
_INT_FUNCTION:
Lfunc_begin0:
.stabs "INT_FUNCTION:f:16", 0x24,0,0,_INT_FUNCTION
.stabn 0xc0, 0, 0, _INT_FUNCTION
.stabn 0xe0, 0, 0, _INT_FUNCTION
LM0:
.stabn	0x44, 0, 21, LM0-_INT_FUNCTION
Lfunc_begin1:
	push
LM1:
.stabn	0x44, 0, 22, LM1-_INT_FUNCTION
Ltmp0:
	banksel 0
btfss _UR1_RNIF, _UR1_RNIF
goto LBB0_2
LBB0_1:
LM2:
.stabn	0x44, 0, 24, LM2-_INT_FUNCTION
Ltmp2:
	movfw _UR1_RX_REG+0
	movwf _temp0+0
	clrf _temp0+1
	clrf _temp0+2
	clrf _temp0+3
Ltmp3:
LBB0_2:
LM3:
.stabn	0x44, 0, 26, LM3-_INT_FUNCTION
btfss _ADIF, _ADIF
goto LBB0_4
LBB0_3:
LM4:
.stabn	0x44, 0, 28, LM4-_INT_FUNCTION
Ltmp5:
	bcf _ADIF, _ADIF
LM5:
.stabn	0x44, 0, 29, LM5-_INT_FUNCTION
	bsf _ADC_Ready, _ADC_Ready
LBB0_4:
LM6:
.stabn	0x44, 0, 30, LM6-_INT_FUNCTION
	pop
Ltmp6:
LM7:
.stabn	0x44, 0, 32, LM7-_INT_FUNCTION
	retfie
Ltmp7:
Lfunc_end0:
Lfunc_end1:
LM8:
.stabf LM8-_INT_FUNCTION
	_main_sec .section rom
	.global	_main
_main:
Lfunc_begin2:
.stabs "main:f:16", 0x24,0,0,_main
.stabn 0xc0, 0, 0, _main
.stabn 0xe0, 0, 0, _main
LM9:
.stabn	0x44, 0, 38, LM9-_main
Lfunc_begin3:
LM10:
.stabn	0x44, 0, 41, LM10-_main
	banksel 0
	call _drv_soc_init
LM11:
.stabn	0x44, 0, 42, LM11-_main
	call _drv_Uart1_Init
LM12:
.stabn	0x44, 0, 43, LM12-_main
	call _drv_24BitADC_init
LM13:
.stabn	0x44, 0, 44, LM13-_main
	bsf _GIE, _GIE
LM14:
.stabn	0x44, 0, 45, LM14-_main
	movlw 7
	movwf _drv_10BitADC_init.args.+0
	clrf _drv_10BitADC_init.args.+1
	call _drv_10BitADC_init
LM15:
.stabn	0x44, 0, 46, LM15-_main
	call _drv_lcd_init
LBB1_1:
LM16:
.stabn	0x44, 0, 49, LM16-_main
Ltmp8:
	movlw 4
	banksel _main.temp.
LM17:
.stabn	0x44, 0, 50, LM17-_main
movwf	_main.temp.+5
clrf	_main.temp.+6
	movwf _main.temp.+1
LM18:
.stabn	0x44, 0, 52, LM18-_main
Ltmp9:
	clrf _main.temp.+5
	clrf _main.temp.+6
LBB1_2:
	movlw 1
	movwf _main.temp.+7
Ltmp10:
	movfw _main.temp.+5
Ltmp11:
	sublw 15
	blt LBB1_7
LBB1_6:
	movlw 0
	movwf _main.temp.+7
LBB1_7:
	movlw 1
	movwf _main.temp.+8
Ltmp12:
	movfw _main.temp.+6
Ltmp13:
	movwf _main.temp.+9
	xorlw 0x80
	sublw 0x80
	blt LBB1_9
LBB1_8:
	movlw 0
	movwf _main.temp.+8
LBB1_9:
	movfw _main.temp.+7
	movwf _main.temp.+10
	movfw _main.temp.+9
	sublw 0
	beq LBB1_11
LBB1_10:
	movfw _main.temp.+8
	movwf _main.temp.+10
LBB1_11:
	movfw _main.temp.+10
andlw 1
bne LBB1_5
LBB1_3:
LM19:
.stabn	0x44, 0, 54, LM19-_main
Ltmp14:
	movfw _main.temp.+5
	movwf _R_APP_BUFFER8+0
LM20:
.stabn	0x44, 0, 55, LM20-_main
	movwf _R_APP_BUFFER1+0
LM21:
.stabn	0x44, 0, 56, LM21-_main
	movwf _R_APP_BUFFER2+0
LM22:
.stabn	0x44, 0, 57, LM22-_main
	movwf _R_APP_BUFFER3+0
LM23:
.stabn	0x44, 0, 58, LM23-_main
	movwf _R_APP_BUFFER4+0
LM24:
.stabn	0x44, 0, 59, LM24-_main
	movwf _R_APP_BUFFER5+0
LM25:
.stabn	0x44, 0, 60, LM25-_main
	movwf _R_APP_BUFFER6+0
LM26:
.stabn	0x44, 0, 61, LM26-_main
	movwf _R_APP_BUFFER7+0
LM27:
.stabn	0x44, 0, 62, LM27-_main
	movwf _R_APP_BUFFER8+0
LM28:
.stabn	0x44, 0, 63, LM28-_main
	movwf _R_APP_BUFFER9+0
LM29:
.stabn	0x44, 0, 64, LM29-_main
	bsf _R_APP_BUFFER10_BIT2, _R_APP_BUFFER10_BIT2
LM30:
.stabn	0x44, 0, 65, LM30-_main
	bsf _R_APP_BUFFER10_BIT6, _R_APP_BUFFER10_BIT6
LM31:
.stabn	0x44, 0, 66, LM31-_main
	call _drv_lcd_refresh
LM32:
.stabn	0x44, 0, 67, LM32-_main
	movlw 44
	movwf _delay.args.+0
	movlw 1
	movwf _delay.args.+1
	call _delay
Ltmp15:
LM33:
.stabn	0x44, 0, 52, LM33-_main
	movlw 1
	addwf _main.temp.+5, F
	movlw 0
	addwfc _main.temp.+6, W
	movwf _main.temp.+6
	goto LBB1_2
Ltmp16:
LBB1_5:
LM34:
.stabn	0x44, 0, 47, LM34-_main
	goto LBB1_1
Ltmp17:
Lfunc_end2:
Lfunc_end3:
LM35:
.stabn 0xc0,0,0, LM10-_main
.stabs "a:17=ar10;0;4;10",0x80,0,0,_main.temp.+0
.stabn 0xe0,0,0, LM16-_main
.stabn 0xc0,0,0, LM10-_main
.stabs "i:1",0x80,0,0,_main.temp.+5
.stabn 0xe0,0,0, LM16-_main
.stabf LM35-_main
	_temp0_main.c .section bank0,uninit
	_temp0 .ds 4
	.ends
	_ADC_Ready_main.c .section bank0,bitfield=0xFF,uninit
	_ADC_Ready .ds 1
	.ends
	_temp1_main.c .section bank0,uninit
	_temp1 .ds 4
	.ends
	.@_main_sec@_main.temp. .section bank1,uninit
	_main.temp. .ds 11
	.ends
	.global	_temp0
	.global	_ADC_Ready
	.global	_temp1
