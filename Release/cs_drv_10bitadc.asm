.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\",0x64,0,0,0
.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\cs_drv_10bitadc.c",0x64,0,0,0
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
.include "csccCond.inc"
.include "csccCmp.inc"
.include "csccShift.inc"
	_drv_10BitADC_init_sec .section rom
	.global	_drv_10BitADC_init
_drv_10BitADC_init:
Lfunc_begin0:
.stabs "drv_10BitADC_init:f:16", 0x24,0,0,_drv_10BitADC_init
.stabn 0xc0, 0, 0, _drv_10BitADC_init
.stabn 0xe0, 0, 0, _drv_10BitADC_init
LM0:
.stabn	0x44, 0, 13, LM0-_drv_10BitADC_init
Lfunc_begin1:
	banksel 0
	movfw _drv_10BitADC_init.args.+0
	movwf _drv_10BitADC_init.temp.+2
	movwf _drv_10BitADC_init.temp.+0
	movfw _drv_10BitADC_init.args.+1
	movwf _drv_10BitADC_init.temp.+3
LM1:
.stabn	0x44, 0, 14, LM1-_drv_10BitADC_init
Ltmp0:
	movwf _drv_10BitADC_init.temp.+1
iorwf _drv_10BitADC_init.temp.+2,W
beq LBB0_1
LBB0_11:
	movfw _drv_10BitADC_init.temp.+2
	xorlw 1
	movwf _drv_10BitADC_init.temp.+4
iorwf _drv_10BitADC_init.temp.+3,W
beq LBB0_2
LBB0_12:
	movfw _drv_10BitADC_init.temp.+2
	xorlw 2
	movwf _drv_10BitADC_init.temp.+4
iorwf _drv_10BitADC_init.temp.+3,W
beq LBB0_3
LBB0_13:
	movfw _drv_10BitADC_init.temp.+2
	xorlw 3
	movwf _drv_10BitADC_init.temp.+4
iorwf _drv_10BitADC_init.temp.+3,W
beq LBB0_4
LBB0_14:
	movfw _drv_10BitADC_init.temp.+2
	xorlw 4
	movwf _drv_10BitADC_init.temp.+4
iorwf _drv_10BitADC_init.temp.+3,W
beq LBB0_5
LBB0_15:
	movfw _drv_10BitADC_init.temp.+2
	xorlw 5
	movwf _drv_10BitADC_init.temp.+4
iorwf _drv_10BitADC_init.temp.+3,W
beq LBB0_6
LBB0_16:
	movfw _drv_10BitADC_init.temp.+2
	xorlw 6
	movwf _drv_10BitADC_init.temp.+4
iorwf _drv_10BitADC_init.temp.+3,W
beq LBB0_7
LBB0_17:
	movfw _drv_10BitADC_init.temp.+2
	xorlw 7
	movwf _drv_10BitADC_init.temp.+2
iorwf _drv_10BitADC_init.temp.+3,W
beq LBB0_8
	goto LBB0_9
LBB0_1:
LM2:
.stabn	0x44, 0, 17, LM2-_drv_10BitADC_init
Ltmp1:
	bcf _PT2PU_7, _PT2PU_7
LM3:
.stabn	0x44, 0, 18, LM3-_drv_10BitADC_init
	bcf _PT2EN_7, _PT2EN_7
LM4:
.stabn	0x44, 0, 19, LM4-_drv_10BitADC_init
	movlw 0xfe
	movwf _AIENB+0
LM5:
.stabn	0x44, 0, 20, LM5-_drv_10BitADC_init
	bcf _AD2_REF, _AD2_REF
LM6:
.stabn	0x44, 0, 21, LM6-_drv_10BitADC_init
	movlw 0x80
	movwf _AD2OH+0
LM7:
.stabn	0x44, 0, 22, LM7-_drv_10BitADC_init
	goto LBB0_10
LBB0_2:
LM8:
.stabn	0x44, 0, 24, LM8-_drv_10BitADC_init
	bcf _PT2PU_6, _PT2PU_6
LM9:
.stabn	0x44, 0, 25, LM9-_drv_10BitADC_init
	bcf _PT2EN_6, _PT2EN_6
LM10:
.stabn	0x44, 0, 26, LM10-_drv_10BitADC_init
	movlw 0xfd
	movwf _AIENB+0
LM11:
.stabn	0x44, 0, 27, LM11-_drv_10BitADC_init
	bcf _AD2_REF, _AD2_REF
LM12:
.stabn	0x44, 0, 28, LM12-_drv_10BitADC_init
	movlw 0x84
	movwf _AD2OH+0
LM13:
.stabn	0x44, 0, 29, LM13-_drv_10BitADC_init
	goto LBB0_10
LBB0_3:
LM14:
.stabn	0x44, 0, 31, LM14-_drv_10BitADC_init
	bcf _PT2PU_3, _PT2PU_3
LM15:
.stabn	0x44, 0, 32, LM15-_drv_10BitADC_init
	bcf _PT2EN_3, _PT2EN_3
LM16:
.stabn	0x44, 0, 33, LM16-_drv_10BitADC_init
	movlw 0xfb
	movwf _AIENB+0
LM17:
.stabn	0x44, 0, 34, LM17-_drv_10BitADC_init
	bcf _AD2_REF, _AD2_REF
LM18:
.stabn	0x44, 0, 35, LM18-_drv_10BitADC_init
	movlw 0x88
	movwf _AD2OH+0
LM19:
.stabn	0x44, 0, 36, LM19-_drv_10BitADC_init
	goto LBB0_10
LBB0_4:
LM20:
.stabn	0x44, 0, 38, LM20-_drv_10BitADC_init
	bcf _PT2PU_2, _PT2PU_2
LM21:
.stabn	0x44, 0, 39, LM21-_drv_10BitADC_init
	bcf _PT2EN_2, _PT2EN_2
LM22:
.stabn	0x44, 0, 40, LM22-_drv_10BitADC_init
	movlw 0xf7
	movwf _AIENB+0
LM23:
.stabn	0x44, 0, 41, LM23-_drv_10BitADC_init
	bcf _AD2_REF, _AD2_REF
LM24:
.stabn	0x44, 0, 42, LM24-_drv_10BitADC_init
	movlw 0x8c
	movwf _AD2OH+0
LM25:
.stabn	0x44, 0, 43, LM25-_drv_10BitADC_init
	goto LBB0_10
LBB0_5:
LM26:
.stabn	0x44, 0, 45, LM26-_drv_10BitADC_init
	bcf _PT2PU_1, _PT2PU_1
LM27:
.stabn	0x44, 0, 46, LM27-_drv_10BitADC_init
	bcf _PT2EN_1, _PT2EN_1
LM28:
.stabn	0x44, 0, 47, LM28-_drv_10BitADC_init
	movlw 0xef
	movwf _AIENB+0
LM29:
.stabn	0x44, 0, 48, LM29-_drv_10BitADC_init
	movlw 0x90
	movwf _AD2OH+0
LM30:
.stabn	0x44, 0, 49, LM30-_drv_10BitADC_init
	goto LBB0_10
LBB0_6:
LM31:
.stabn	0x44, 0, 51, LM31-_drv_10BitADC_init
	bcf _PT2_0, _PT2_0
LM32:
.stabn	0x44, 0, 52, LM32-_drv_10BitADC_init
	bcf _PT2PU_0, _PT2PU_0
LM33:
.stabn	0x44, 0, 53, LM33-_drv_10BitADC_init
	bcf _PT2EN_0, _PT2EN_0
LM34:
.stabn	0x44, 0, 54, LM34-_drv_10BitADC_init
	movlw 0xdf
	movwf _AIENB+0
LM35:
.stabn	0x44, 0, 55, LM35-_drv_10BitADC_init
	bcf _AD2_REF, _AD2_REF
LM36:
.stabn	0x44, 0, 56, LM36-_drv_10BitADC_init
	movlw 0x94
	movwf _AD2OH+0
LM37:
.stabn	0x44, 0, 57, LM37-_drv_10BitADC_init
	goto LBB0_10
LBB0_7:
LM38:
.stabn	0x44, 0, 59, LM38-_drv_10BitADC_init
	bcf _PT1PU_1, _PT1PU_1
LM39:
.stabn	0x44, 0, 60, LM39-_drv_10BitADC_init
	bcf _PT1EN_1, _PT1EN_1
LM40:
.stabn	0x44, 0, 61, LM40-_drv_10BitADC_init
	bsf _AIENB3, _AIENB3
LM41:
.stabn	0x44, 0, 62, LM41-_drv_10BitADC_init
	movlw 0xbf
	movwf _AIENB+0
LM42:
.stabn	0x44, 0, 63, LM42-_drv_10BitADC_init
	bcf _AD2_REF, _AD2_REF
LM43:
.stabn	0x44, 0, 64, LM43-_drv_10BitADC_init
	movlw 0x98
	movwf _AD2OH+0
LM44:
.stabn	0x44, 0, 65, LM44-_drv_10BitADC_init
	goto LBB0_10
LBB0_8:
LM45:
.stabn	0x44, 0, 67, LM45-_drv_10BitADC_init
	bcf _PT1PU_0, _PT1PU_0
LM46:
.stabn	0x44, 0, 68, LM46-_drv_10BitADC_init
	bcf _PT1EN_0, _PT1EN_0
LM47:
.stabn	0x44, 0, 69, LM47-_drv_10BitADC_init
	bsf _AIENB3, _AIENB3
LM48:
.stabn	0x44, 0, 70, LM48-_drv_10BitADC_init
	movlw 127
	movwf _AIENB+0
LM49:
.stabn	0x44, 0, 71, LM49-_drv_10BitADC_init
	bcf _AD2_REF, _AD2_REF
LM50:
.stabn	0x44, 0, 72, LM50-_drv_10BitADC_init
	movlw 0x9c
	movwf _AD2OH+0
Ltmp2:
LBB0_9:
LBB0_10:
LM51:
.stabn	0x44, 0, 77, LM51-_drv_10BitADC_init
	movlw 10
	movwf _delay.args.+0
	clrf _delay.args.+1
	call _delay
LM52:
.stabn	0x44, 0, 78, LM52-_drv_10BitADC_init
	return
Ltmp3:
Lfunc_end0:
Lfunc_end1:
LM53:
.stabn 0xc0,0,0, LM0-_drv_10BitADC_init
.stabs "ADCAisle:1",0x80,0,0,_drv_10BitADC_init.args.+0
.stabn 0xe0,0,0, LM52-_drv_10BitADC_init
.stabf LM53-_drv_10BitADC_init
	_drv_read_10BitADC_value_sec .section rom
	.global	_drv_read_10BitADC_value
_drv_read_10BitADC_value:
Lfunc_begin2:
.stabs "drv_read_10BitADC_value:f4;", 0x24,0,0,_drv_read_10BitADC_value
.stabn 0xc0, 0, 0, _drv_read_10BitADC_value
.stabn 0xe0, 0, 0, _drv_read_10BitADC_value
LM54:
.stabn	0x44, 0, 87, LM54-_drv_read_10BitADC_value
Lfunc_begin3:
LM55:
.stabn	0x44, 0, 88, LM55-_drv_read_10BitADC_value
	banksel 0
	clrf _drv_read_10BitADC_value.temp.+0
	clrf _drv_read_10BitADC_value.temp.+1
	clrf _drv_read_10BitADC_value.temp.+2
	clrf _drv_read_10BitADC_value.temp.+3
LM56:
.stabn	0x44, 0, 89, LM56-_drv_read_10BitADC_value
	bsf _AD2START, _AD2START
LBB1_1:
LM57:
.stabn	0x44, 0, 90, LM57-_drv_read_10BitADC_value
btfss _AD2START, _AD2START
goto LBB1_3
LBB1_2:
	goto LBB1_1
LBB1_3:
LM58:
.stabn	0x44, 0, 93, LM58-_drv_read_10BitADC_value
	movlw 3
	andwf _AD2OH+0, W
	movwf _drv_read_10BitADC_value.frame.+1
	clrf _drv_read_10BitADC_value.temp.+2
	clrf _drv_read_10BitADC_value.temp.+3
LM59:
.stabn	0x44, 0, 94, LM59-_drv_read_10BitADC_value
	movfw _drv_read_10BitADC_value.frame.+1
	clrf _drv_read_10BitADC_value.temp.+2
	clrf _drv_read_10BitADC_value.temp.+3
LM60:
.stabn	0x44, 0, 95, LM60-_drv_read_10BitADC_value
	movfw _AD2OL+0
	movwf _drv_read_10BitADC_value.temp.+0
LM61:
.stabn	0x44, 0, 94, LM61-_drv_read_10BitADC_value
	movfw _drv_read_10BitADC_value.frame.+1
LM62:
.stabn	0x44, 0, 95, LM62-_drv_read_10BitADC_value
	movwf _drv_read_10BitADC_value.temp.+1
	clrf _drv_read_10BitADC_value.temp.+2
	clrf _drv_read_10BitADC_value.temp.+3
	movfw _AD2OL+0
LM63:
.stabn	0x44, 0, 96, LM63-_drv_read_10BitADC_value
	movwf _drv_read_10BitADC_value.frame.+0
	clrf _drv_read_10BitADC_value.frame.+2
	clrf _drv_read_10BitADC_value.frame.+3
	return
Ltmp4:
Lfunc_end2:
Lfunc_end3:
LM64:
.stabn 0xc0,0,0, LM55-_drv_read_10BitADC_value
.stabs "TenBit_ADC_Value:4",0x80,0,0,_drv_read_10BitADC_value.temp.+0
.stabn 0xe0,0,0, LM63-_drv_read_10BitADC_value
.stabf LM64-_drv_read_10BitADC_value
	.@_drv_10BitADC_init_sec@_drv_10BitADC_init.args. .section bank1,uninit
	_drv_10BitADC_init.args. .ds 2
	.ends
	.@_drv_10BitADC_init_sec@_drv_10BitADC_init.temp. .section bank1,uninit
	_drv_10BitADC_init.temp. .ds 5
	.ends
	.@_drv_read_10BitADC_value_sec@_drv_read_10BitADC_value.frame. .section bank1,uninit
	_drv_read_10BitADC_value.frame. .ds 4
	.ends
	.@_drv_read_10BitADC_value_sec@_drv_read_10BitADC_value.temp. .section bank1,uninit
	_drv_read_10BitADC_value.temp. .ds 4
	.ends
