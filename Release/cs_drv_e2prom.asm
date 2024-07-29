.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\",0x64,0,0,0
.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\cs_drv_e2prom.c",0x64,0,0,0
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
.stabs "EEPROM_Data:G10",0x20,0,0,_EEPROM_Data
.include "csccCond.inc"
.include "csccCmp.inc"
.include "csccShift.inc"
	_drv_e2prom_writeByte_code_sec .section rom
	.global	_drv_e2prom_writeByte_code
_drv_e2prom_writeByte_code:
Lfunc_begin0:
.stabs "drv_e2prom_writeByte_code:f:16", 0x24,0,0,_drv_e2prom_writeByte_code
.stabn 0xc0, 0, 0, _drv_e2prom_writeByte_code
.stabn 0xe0, 0, 0, _drv_e2prom_writeByte_code
LM0:
.stabn	0x44, 0, 14, LM0-_drv_e2prom_writeByte_code
Lfunc_begin1:
	banksel 0
	movfw _drv_e2prom_writeByte_code.args.+0
	movwf _drv_e2prom_writeByte_code.temp.+2
	movfw _drv_e2prom_writeByte_code.args.+1
	movwf _drv_e2prom_writeByte_code.temp.+3
	movfw _drv_e2prom_writeByte_code.args.+2
	movwf _drv_e2prom_writeByte_code.temp.+0
	movfw _drv_e2prom_writeByte_code.args.+3
LM1:
.stabn	0x44, 0, 15, LM1-_drv_e2prom_writeByte_code
Ltmp0:
	movwf _drv_e2prom_writeByte_code.temp.+1
LBB0_1:
	goto LBB0_1
Ltmp1:
Lfunc_end0:
Lfunc_end1:
LM2:
.stabn 0xc0,0,0, LM0-_drv_e2prom_writeByte_code
.stabs "addr:2",0x80,0,0,_drv_e2prom_writeByte_code.args.+0
.stabn 0xe0,0,0, LM1-_drv_e2prom_writeByte_code
.stabn 0xc0,0,0, LM0-_drv_e2prom_writeByte_code
.stabs "dat:2",0x80,0,0,_drv_e2prom_writeByte_code.args.+2
.stabn 0xe0,0,0, LM1-_drv_e2prom_writeByte_code
.stabf LM2-_drv_e2prom_writeByte_code
	_drv_e2prom_readByte_Code_sec .section rom
	.global	_drv_e2prom_readByte_Code
_drv_e2prom_readByte_Code:
Lfunc_begin2:
.stabs "drv_e2prom_readByte_Code:f2;", 0x24,0,0,_drv_e2prom_readByte_Code
.stabn 0xc0, 0, 0, _drv_e2prom_readByte_Code
.stabn 0xe0, 0, 0, _drv_e2prom_readByte_Code
LM3:
.stabn	0x44, 0, 26, LM3-_drv_e2prom_readByte_Code
Lfunc_begin3:
	banksel 0
	movfw _drv_e2prom_readByte_Code.args.+0
	movwf _drv_e2prom_readByte_Code.temp.+2
	movfw _drv_e2prom_readByte_Code.args.+1
LM4:
.stabn	0x44, 0, 29, LM4-_drv_e2prom_readByte_Code
Ltmp2:
	movwf _drv_e2prom_readByte_Code.temp.+3
	bcf _GIE, _GIE
LM5:
.stabn	0x44, 0, 30, LM5-_drv_e2prom_readByte_Code
	movfw _drv_e2prom_readByte_Code.temp.+3
	movwf _EADRH+0
LM6:
.stabn	0x44, 0, 31, LM6-_drv_e2prom_readByte_Code
	movfw _drv_e2prom_readByte_Code.temp.+2
	movwf _EADRL+0
LM7:
.stabn	0x44, 0, 32, LM7-_drv_e2prom_readByte_Code
	movfw _drv_e2prom_readByte_Code.temp.+1
	movwf _EDAT+0
LM8:
.stabn	0x44, 0, 33, LM8-_drv_e2prom_readByte_Code
	movfw _drv_e2prom_readByte_Code.temp.+0
	movwf _EEPROM_Data+0
LM9:
.stabn	0x44, 0, 34, LM9-_drv_e2prom_readByte_Code
	;APP
	MOVP
	;NO_APP
LM10:
.stabn	0x44, 0, 35, LM10-_drv_e2prom_readByte_Code
	movwf _drv_e2prom_readByte_Code.temp.+0
	clrf _drv_e2prom_readByte_Code.temp.+1
LM11:
.stabn	0x44, 0, 36, LM11-_drv_e2prom_readByte_Code
	movfw _EDAT+0
	iorwf _drv_e2prom_readByte_Code.temp.+1, W
	movwf _drv_e2prom_readByte_Code.temp.+1
LM12:
.stabn	0x44, 0, 37, LM12-_drv_e2prom_readByte_Code
	bsf _GIE, _GIE
LM13:
.stabn	0x44, 0, 38, LM13-_drv_e2prom_readByte_Code
	movfw _drv_e2prom_readByte_Code.temp.+0
	movwf _drv_e2prom_readByte_Code.frame.+0
	movfw _drv_e2prom_readByte_Code.temp.+1
	movwf _drv_e2prom_readByte_Code.frame.+1
	return
Ltmp3:
Lfunc_end2:
Lfunc_end3:
LM14:
.stabn 0xc0,0,0, LM3-_drv_e2prom_readByte_Code
.stabs "addr:2",0x80,0,0,_drv_e2prom_readByte_Code.args.+0
.stabn 0xe0,0,0, LM13-_drv_e2prom_readByte_Code
.stabn 0xc0,0,0, LM4-_drv_e2prom_readByte_Code
.stabs "dat:2",0x80,0,0,_drv_e2prom_readByte_Code.temp.+0
.stabn 0xe0,0,0, LM13-_drv_e2prom_readByte_Code
.stabf LM14-_drv_e2prom_readByte_Code
	_drv_e2prom_writeByte_sec .section rom
	.global	_drv_e2prom_writeByte
_drv_e2prom_writeByte:
Lfunc_begin4:
.stabs "drv_e2prom_writeByte:f:16", 0x24,0,0,_drv_e2prom_writeByte
.stabn 0xc0, 0, 0, _drv_e2prom_writeByte
.stabn 0xe0, 0, 0, _drv_e2prom_writeByte
LM15:
.stabn	0x44, 0, 49, LM15-_drv_e2prom_writeByte
Lfunc_begin5:
	banksel 0
	movfw _drv_e2prom_writeByte.args.+1
LM16:
.stabn	0x44, 0, 50, LM16-_drv_e2prom_writeByte
Ltmp4:
	movwf _drv_e2prom_writeByte.temp.+0
	bcf _GIE, _GIE
	movfw _drv_e2prom_writeByte.args.+0
	movwf _drv_e2prom_writeByte.temp.+1
LM17:
.stabn	0x44, 0, 53, LM17-_drv_e2prom_writeByte
	sublw 3
	blt LBB2_2
LBB2_1:
LM18:
.stabn	0x44, 0, 55, LM18-_drv_e2prom_writeByte
Ltmp5:
	bsf _GIE, _GIE
LM19:
.stabn	0x44, 0, 56, LM19-_drv_e2prom_writeByte
	goto LBB2_7
Ltmp6:
LBB2_2:
LM20:
.stabn	0x44, 0, 58, LM20-_drv_e2prom_writeByte
	movlw 0x80
	xorwf _drv_e2prom_writeByte.temp.+1, W
	sublw 127
	blt LBB2_4
LBB2_3:
LM21:
.stabn	0x44, 0, 60, LM21-_drv_e2prom_writeByte
Ltmp7:
	bsf _GIE, _GIE
LM22:
.stabn	0x44, 0, 61, LM22-_drv_e2prom_writeByte
	goto LBB2_7
Ltmp8:
LBB2_4:
LM23:
.stabn	0x44, 0, 64, LM23-_drv_e2prom_writeByte
	movlw 32
	movwf _EADRH+0
LM24:
.stabn	0x44, 0, 67, LM24-_drv_e2prom_writeByte
	movfw _drv_e2prom_writeByte.temp.+0
	movwf _EEPROM_Data+0
LM25:
.stabn	0x44, 0, 65, LM25-_drv_e2prom_writeByte
	movfw _drv_e2prom_writeByte.temp.+1
	movwf _EADRL+0
LM26:
.stabn	0x44, 0, 69, LM26-_drv_e2prom_writeByte
	sublw 3
	blt LBB2_6
LBB2_5:
LM27:
.stabn	0x44, 0, 71, LM27-_drv_e2prom_writeByte
Ltmp9:
	bsf _GIE, _GIE
LM28:
.stabn	0x44, 0, 72, LM28-_drv_e2prom_writeByte
	goto LBB2_7
Ltmp10:
LBB2_6:
LM29:
.stabn	0x44, 0, 74, LM29-_drv_e2prom_writeByte
	movlw 0x96
	movwf _EOPEN+0
LM30:
.stabn	0x44, 0, 75, LM30-_drv_e2prom_writeByte
	movlw 105
	movwf _EOPEN+0
LM31:
.stabn	0x44, 0, 76, LM31-_drv_e2prom_writeByte
	movlw 90
	movwf _EOPEN+0
LM32:
.stabn	0x44, 0, 78, LM32-_drv_e2prom_writeByte
	movfw _EEPROM_Data+0
LM33:
.stabn	0x44, 0, 79, LM33-_drv_e2prom_writeByte
	;APP
	TBLP 100
	;NO_APP
LM34:
.stabn	0x44, 0, 81, LM34-_drv_e2prom_writeByte
	movlw 32
	movwf _EADRH+0
LM35:
.stabn	0x44, 0, 82, LM35-_drv_e2prom_writeByte
	movlw 112
	movwf _EADRL+0
LM36:
.stabn	0x44, 0, 83, LM36-_drv_e2prom_writeByte
	bsf _GIE, _GIE
LBB2_7:
LM37:
.stabn	0x44, 0, 84, LM37-_drv_e2prom_writeByte
	return
Ltmp11:
Lfunc_end4:
Lfunc_end5:
LM38:
.stabn 0xc0,0,0, LM15-_drv_e2prom_writeByte
.stabs "addr:10",0x80,0,0,_drv_e2prom_writeByte.args.+0
.stabn 0xe0,0,0, LM37-_drv_e2prom_writeByte
.stabn 0xc0,0,0, LM15-_drv_e2prom_writeByte
.stabs "dat:10",0x80,0,0,_drv_e2prom_writeByte.args.+1
.stabn 0xe0,0,0, LM37-_drv_e2prom_writeByte
.stabf LM38-_drv_e2prom_writeByte
	_drv_e2prom_readByte_sec .section rom
	.global	_drv_e2prom_readByte
_drv_e2prom_readByte:
Lfunc_begin6:
.stabs "drv_e2prom_readByte:f10;", 0x24,0,0,_drv_e2prom_readByte
.stabn 0xc0, 0, 0, _drv_e2prom_readByte
.stabn 0xe0, 0, 0, _drv_e2prom_readByte
LM39:
.stabn	0x44, 0, 94, LM39-_drv_e2prom_readByte
Lfunc_begin7:
	banksel 0
	movfw _drv_e2prom_readByte.args.+0
LM40:
.stabn	0x44, 0, 96, LM40-_drv_e2prom_readByte
Ltmp12:
	movwf _drv_e2prom_readByte.temp.+1
	bcf _GIE, _GIE
LM41:
.stabn	0x44, 0, 98, LM41-_drv_e2prom_readByte
	movlw 32
	movwf _EADRH+0
LM42:
.stabn	0x44, 0, 99, LM42-_drv_e2prom_readByte
	movfw _drv_e2prom_readByte.temp.+1
	movwf _EADRL+0
LM43:
.stabn	0x44, 0, 101, LM43-_drv_e2prom_readByte
	;APP
	MOVP
	;NO_APP
LM44:
.stabn	0x44, 0, 102, LM44-_drv_e2prom_readByte
	movwf _drv_e2prom_readByte.temp.+0
LM45:
.stabn	0x44, 0, 103, LM45-_drv_e2prom_readByte
	bsf _GIE, _GIE
LM46:
.stabn	0x44, 0, 104, LM46-_drv_e2prom_readByte
	movfw _drv_e2prom_readByte.temp.+0
	movwf _drv_e2prom_readByte.frame.+0
	return
Ltmp13:
Lfunc_end6:
Lfunc_end7:
LM47:
.stabn 0xc0,0,0, LM39-_drv_e2prom_readByte
.stabs "addr:10",0x80,0,0,_drv_e2prom_readByte.args.+0
.stabn 0xe0,0,0, LM46-_drv_e2prom_readByte
.stabn 0xc0,0,0, LM40-_drv_e2prom_readByte
.stabs "dat:10",0x80,0,0,_drv_e2prom_readByte.temp.+0
.stabn 0xe0,0,0, LM46-_drv_e2prom_readByte
.stabf LM47-_drv_e2prom_readByte
	_EEPROM_Data_cs_drv_e2prom.c .section bank0,addr=130
	_EEPROM_Data .ds 1
	.ends
	.@_drv_e2prom_writeByte_code_sec@_drv_e2prom_writeByte_code.args. .section bank1,uninit
	_drv_e2prom_writeByte_code.args. .ds 4
	.ends
	.@_drv_e2prom_writeByte_code_sec@_drv_e2prom_writeByte_code.temp. .section bank1,uninit
	_drv_e2prom_writeByte_code.temp. .ds 4
	.ends
	.@_drv_e2prom_readByte_Code_sec@_drv_e2prom_readByte_Code.args. .section bank1,uninit
	_drv_e2prom_readByte_Code.args. .ds 2
	.ends
	.@_drv_e2prom_readByte_Code_sec@_drv_e2prom_readByte_Code.frame. .section bank1,uninit
	_drv_e2prom_readByte_Code.frame. .ds 2
	.ends
	.@_drv_e2prom_readByte_Code_sec@_drv_e2prom_readByte_Code.temp. .section bank1,uninit
	_drv_e2prom_readByte_Code.temp. .ds 4
	.ends
	.@_drv_e2prom_writeByte_sec@_drv_e2prom_writeByte.args. .section bank1,uninit
	_drv_e2prom_writeByte.args. .ds 2
	.ends
	.@_drv_e2prom_writeByte_sec@_drv_e2prom_writeByte.temp. .section bank1,uninit
	_drv_e2prom_writeByte.temp. .ds 2
	.ends
	.@_drv_e2prom_readByte_sec@_drv_e2prom_readByte.args. .section bank1,uninit
	_drv_e2prom_readByte.args. .ds 1
	.ends
	.@_drv_e2prom_readByte_sec@_drv_e2prom_readByte.frame. .section bank1,uninit
	_drv_e2prom_readByte.frame. .ds 1
	.ends
	.@_drv_e2prom_readByte_sec@_drv_e2prom_readByte.temp. .section bank1,uninit
	_drv_e2prom_readByte.temp. .ds 2
	.ends
	.global	_EEPROM_Data
