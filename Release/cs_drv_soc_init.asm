.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\",0x64,0,0,0
.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\cs_drv_soc_init.c",0x64,0,0,0
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
	_drv_soc_init_sec .section rom
	.global	_drv_soc_init
_drv_soc_init:
Lfunc_begin0:
.stabs "drv_soc_init:f:16", 0x24,0,0,_drv_soc_init
.stabn 0xc0, 0, 0, _drv_soc_init
.stabn 0xe0, 0, 0, _drv_soc_init
LM0:
.stabn	0x44, 0, 12, LM0-_drv_soc_init
Lfunc_begin1:
LM1:
.stabn	0x44, 0, 19, LM1-_drv_soc_init
	banksel 0
	clrf _INTE+0
LM2:
.stabn	0x44, 0, 20, LM2-_drv_soc_init
	clrf _INTE2+0
LM3:
.stabn	0x44, 0, 21, LM3-_drv_soc_init
	clrf _INTE3+0
LM4:
.stabn	0x44, 0, 22, LM4-_drv_soc_init
	clrf _INTF+0
LM5:
.stabn	0x44, 0, 23, LM5-_drv_soc_init
	clrf _INTF2+0
LM6:
.stabn	0x44, 0, 24, LM6-_drv_soc_init
	clrf _INTF3+0
LM7:
.stabn	0x44, 0, 25, LM7-_drv_soc_init
	clrf _BSR+0
LM8:
.stabn	0x44, 0, 29, LM8-_drv_soc_init
	movlw 50
	movwf _MCK+0
LM9:
.stabn	0x44, 0, 59, LM9-_drv_soc_init
	return
Ltmp0:
Lfunc_end0:
Lfunc_end1:
LM10:
.stabf LM10-_drv_soc_init
	_drv_back_light_init_sec .section rom
	.global	_drv_back_light_init
_drv_back_light_init:
Lfunc_begin2:
.stabs "drv_back_light_init:f:16", 0x24,0,0,_drv_back_light_init
.stabn 0xc0, 0, 0, _drv_back_light_init
.stabn 0xe0, 0, 0, _drv_back_light_init
LM11:
.stabn	0x44, 0, 68, LM11-_drv_back_light_init
Lfunc_begin3:
LM12:
.stabn	0x44, 0, 69, LM12-_drv_back_light_init
	banksel 0
	bcf _PT1PU_4, _PT1PU_4
LM13:
.stabn	0x44, 0, 70, LM13-_drv_back_light_init
	bsf _PT1EN_4, _PT1EN_4
LM14:
.stabn	0x44, 0, 71, LM14-_drv_back_light_init
	return
Ltmp1:
Lfunc_end2:
Lfunc_end3:
LM15:
.stabf LM15-_drv_back_light_init
	_drv_key_init_sec .section rom
	.global	_drv_key_init
_drv_key_init:
Lfunc_begin4:
.stabs "drv_key_init:f:16", 0x24,0,0,_drv_key_init
.stabn 0xc0, 0, 0, _drv_key_init
.stabn 0xe0, 0, 0, _drv_key_init
LM16:
.stabn	0x44, 0, 81, LM16-_drv_key_init
Lfunc_begin5:
LM17:
.stabn	0x44, 0, 82, LM17-_drv_key_init
	banksel 0
	bsf _PT1PU_3, _PT1PU_3
LM18:
.stabn	0x44, 0, 83, LM18-_drv_key_init
	bcf _PT1EN_3, _PT1EN_3
LM19:
.stabn	0x44, 0, 84, LM19-_drv_key_init
	return
Ltmp2:
Lfunc_end4:
Lfunc_end5:
LM20:
.stabf LM20-_drv_key_init
	_drv_bell_init_sec .section rom
	.global	_drv_bell_init
_drv_bell_init:
Lfunc_begin6:
.stabs "drv_bell_init:f:16", 0x24,0,0,_drv_bell_init
.stabn 0xc0, 0, 0, _drv_bell_init
.stabn 0xe0, 0, 0, _drv_bell_init
LM21:
.stabn	0x44, 0, 94, LM21-_drv_bell_init
Lfunc_begin7:
LM22:
.stabn	0x44, 0, 95, LM22-_drv_bell_init
	banksel 0
	bsf _PT1PU_5, _PT1PU_5
LM23:
.stabn	0x44, 0, 96, LM23-_drv_bell_init
	bcf _PT1EN_5, _PT1EN_5
LM24:
.stabn	0x44, 0, 97, LM24-_drv_bell_init
	return
Ltmp3:
Lfunc_end6:
Lfunc_end7:
LM25:
.stabf LM25-_drv_bell_init
