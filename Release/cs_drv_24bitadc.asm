.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\",0x64,0,0,0
.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\cs_drv_24bitadc.c",0x64,0,0,0
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
	_drv_24BitADC_init_sec .section rom
	.global	_drv_24BitADC_init
_drv_24BitADC_init:
Lfunc_begin0:
.stabs "drv_24BitADC_init:f:16", 0x24,0,0,_drv_24BitADC_init
.stabn 0xc0, 0, 0, _drv_24BitADC_init
.stabn 0xe0, 0, 0, _drv_24BitADC_init
LM0:
.stabn	0x44, 0, 12, LM0-_drv_24BitADC_init
Lfunc_begin1:
LM1:
.stabn	0x44, 0, 19, LM1-_drv_24BitADC_init
	banksel 0
	movlw 0xf0
	movwf _ANACFG+0
LM2:
.stabn	0x44, 0, 50, LM2-_drv_24BitADC_init
	bcf _AD2EN, _AD2EN
LM3:
.stabn	0x44, 0, 51, LM3-_drv_24BitADC_init
	bsf _AD3_SL_1, _AD3_SL_1
LM4:
.stabn	0x44, 0, 52, LM4-_drv_24BitADC_init
	bsf _AD3_SL_0, _AD3_SL_0
LM5:
.stabn	0x44, 0, 53, LM5-_drv_24BitADC_init
	bcf _AD2O_9, _AD2O_9
LM6:
.stabn	0x44, 0, 54, LM6-_drv_24BitADC_init
	bsf _AD2O_8, _AD2O_8
LM7:
.stabn	0x44, 0, 57, LM7-_drv_24BitADC_init
	movlw 14
	iorwf _ADCON+0, F
LM8:
.stabn	0x44, 0, 58, LM8-_drv_24BitADC_init
	bcf _ADCON+0, 0
LM9:
.stabn	0x44, 0, 60, LM9-_drv_24BitADC_init
	clrf _ADCFG+0
LM10:
.stabn	0x44, 0, 119, LM10-_drv_24BitADC_init
	movlw 96
	movwf _TEMPC+0
LM11:
.stabn	0x44, 0, 121, LM11-_drv_24BitADC_init
	movlw 5
	movwf _delay.args.+0
	clrf _delay.args.+1
	call _delay
LM12:
.stabn	0x44, 0, 122, LM12-_drv_24BitADC_init
	bsf _ADIE, _ADIE
LM13:
.stabn	0x44, 0, 123, LM13-_drv_24BitADC_init
	bsf _ADEN, _ADEN
LM14:
.stabn	0x44, 0, 124, LM14-_drv_24BitADC_init
	return
Ltmp0:
Lfunc_end0:
Lfunc_end1:
LM15:
.stabf LM15-_drv_24BitADC_init
	_read_24BitAD_value_sec .section rom
	.global	_read_24BitAD_value
_read_24BitAD_value:
Lfunc_begin2:
.stabs "read_24BitAD_value:f4;", 0x24,0,0,_read_24BitAD_value
.stabn 0xc0, 0, 0, _read_24BitAD_value
.stabn 0xe0, 0, 0, _read_24BitAD_value
LM16:
.stabn	0x44, 0, 133, LM16-_read_24BitAD_value
Lfunc_begin3:
LM17:
.stabn	0x44, 0, 134, LM17-_read_24BitAD_value
	banksel 0
	clrf _read_24BitAD_value.temp.+2
	clrf _read_24BitAD_value.temp.+3
LM18:
.stabn	0x44, 0, 135, LM18-_read_24BitAD_value
	movfw _ADOH+0
	clrf _read_24BitAD_value.temp.+2
	clrf _read_24BitAD_value.temp.+3
LM19:
.stabn	0x44, 0, 136, LM19-_read_24BitAD_value
	clrf _read_24BitAD_value.temp.+3
LM20:
.stabn	0x44, 0, 137, LM20-_read_24BitAD_value
	clrf _read_24BitAD_value.temp.+3
LM21:
.stabn	0x44, 0, 138, LM21-_read_24BitAD_value
	clrf _read_24BitAD_value.temp.+3
LM22:
.stabn	0x44, 0, 139, LM22-_read_24BitAD_value
	movfw _ADOLL+0
	movwf _read_24BitAD_value.temp.+0
LM23:
.stabn	0x44, 0, 137, LM23-_read_24BitAD_value
	movfw _ADOL+0
LM24:
.stabn	0x44, 0, 139, LM24-_read_24BitAD_value
	movwf _read_24BitAD_value.temp.+1
LM25:
.stabn	0x44, 0, 135, LM25-_read_24BitAD_value
	movfw _ADOH+0
LM26:
.stabn	0x44, 0, 139, LM26-_read_24BitAD_value
	movwf _read_24BitAD_value.temp.+2
	clrf _read_24BitAD_value.temp.+3
	movfw _ADOLL+0
LM27:
.stabn	0x44, 0, 140, LM27-_read_24BitAD_value
	movwf _read_24BitAD_value.frame.+0
LM28:
.stabn	0x44, 0, 137, LM28-_read_24BitAD_value
	movfw _ADOL+0
LM29:
.stabn	0x44, 0, 140, LM29-_read_24BitAD_value
	movwf _read_24BitAD_value.frame.+1
LM30:
.stabn	0x44, 0, 135, LM30-_read_24BitAD_value
	movfw _ADOH+0
LM31:
.stabn	0x44, 0, 140, LM31-_read_24BitAD_value
	movwf _read_24BitAD_value.frame.+2
	clrf _read_24BitAD_value.frame.+3
	return
Ltmp1:
Lfunc_end2:
Lfunc_end3:
LM32:
.stabn 0xc0,0,0, LM17-_read_24BitAD_value
.stabs "R_AD0:4",0x80,0,0,_read_24BitAD_value.temp.+0
.stabn 0xe0,0,0, LM27-_read_24BitAD_value
.stabf LM32-_read_24BitAD_value
	.@_read_24BitAD_value_sec@_read_24BitAD_value.frame. .section bank1,uninit
	_read_24BitAD_value.frame. .ds 4
	.ends
	.@_read_24BitAD_value_sec@_read_24BitAD_value.temp. .section bank1,uninit
	_read_24BitAD_value.temp. .ds 4
	.ends