.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\",0x64,0,0,0
.stabs "E:\\app\\腾讯文件缓存\\WeChat Files\\wxid_5j3sdvdm1i6922\\FileStorage\\File\\2024-07\\CSU18M88_C_DEMO1.0\\CSU18M88_C_Dome1.0\\CS_drv_delay.c",0x64,0,0,0
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
	_delay_sec .section rom
	.global	_delay
_delay:
Lfunc_begin0:
.stabs "delay:f:16", 0x24,0,0,_delay
.stabn 0xc0, 0, 0, _delay
.stabn 0xe0, 0, 0, _delay
LM0:
.stabn	0x44, 0, 6, LM0-_delay
Lfunc_begin1:
	banksel 0
	movfw _delay.args.+0
	movwf _delay.temp.+2
	movfw _delay.args.+1
LM1:
.stabn	0x44, 0, 8, LM1-_delay
Ltmp0:
	movwf _delay.temp.+3
	clrf _delay.temp.+0
	clrf _delay.temp.+1
LBB0_1:
	movlw 1
	movwf _delay.temp.+4
	movfw _delay.temp.+2
	subwf _delay.temp.+0, W
	bgt LBB0_10
LBB0_9:
	movlw 0
	movwf _delay.temp.+4
LBB0_10:
Ltmp1:
	movfw _delay.temp.+1
Ltmp2:
	movwf _delay.temp.+5
	movlw 1
	movwf _delay.temp.+6
	movfw _delay.temp.+3
	movwf _delay.temp.+9
	subwf _delay.temp.+5, W
	bgt LBB0_12
LBB0_11:
	movlw 0
	movwf _delay.temp.+6
LBB0_12:
	movfw _delay.temp.+4
	movwf _delay.temp.+10
	movfw _delay.temp.+9
	subwf _delay.temp.+5, W
	beq LBB0_14
LBB0_13:
	movfw _delay.temp.+6
	movwf _delay.temp.+10
LBB0_14:
	movfw _delay.temp.+10
andlw 1
bne LBB0_8
LBB0_2:
LM2:
.stabn	0x44, 0, 10, LM2-_delay
Ltmp3:
	clrf _delay.temp.+7
	clrf _delay.temp.+8
LBB0_3:
	movlw 1
	movwf _delay.temp.+5
Ltmp4:
	movfw _delay.temp.+7
Ltmp5:
	sublw 50
	blt LBB0_16
LBB0_15:
	movlw 0
	movwf _delay.temp.+5
LBB0_16:
	movlw 1
	movwf _delay.temp.+6
Ltmp6:
	movfw _delay.temp.+8
Ltmp7:
	movwf _delay.temp.+9
	sublw 0
	bne LBB0_18
LBB0_17:
	movlw 0
	movwf _delay.temp.+6
LBB0_18:
	movfw _delay.temp.+5
	movwf _delay.temp.+10
	movfw _delay.temp.+9
	sublw 0
	beq LBB0_20
LBB0_19:
	movfw _delay.temp.+6
	movwf _delay.temp.+10
LBB0_20:
	movfw _delay.temp.+10
andlw 1
bne LBB0_6
LBB0_4:
LM3:
.stabn	0x44, 0, 12, LM3-_delay
Ltmp8:
	;APP
	nop
	;NO_APP
Ltmp9:
LM4:
.stabn	0x44, 0, 10, LM4-_delay
	movlw 1
	addwf _delay.temp.+7, F
	movlw 0
	addwfc _delay.temp.+8, W
	movwf _delay.temp.+8
	goto LBB0_3
Ltmp10:
LBB0_6:
LM5:
.stabn	0x44, 0, 8, LM5-_delay
	movlw 1
	addwf _delay.temp.+0, F
	movlw 0
	addwfc _delay.temp.+1, W
	movwf _delay.temp.+1
	goto LBB0_1
Ltmp11:
LBB0_8:
LM6:
.stabn	0x44, 0, 16, LM6-_delay
	return
Ltmp12:
Lfunc_end0:
Lfunc_end1:
LM7:
.stabn 0xc0,0,0, LM0-_delay
.stabs "ms:2",0x80,0,0,_delay.args.+0
.stabn 0xe0,0,0, LM6-_delay
.stabn 0xc0,0,0, LM1-_delay
.stabs "i:2",0x80,0,0,_delay.temp.+7
.stabn 0xe0,0,0, LM6-_delay
.stabn 0xc0,0,0, LM1-_delay
.stabs "j:2",0x80,0,0,_delay.temp.+0
.stabn 0xe0,0,0, LM6-_delay
.stabf LM7-_delay
	_delay_10us_sec .section rom
	.global	_delay_10us
_delay_10us:
Lfunc_begin2:
.stabs "delay_10us:f:16", 0x24,0,0,_delay_10us
.stabn 0xc0, 0, 0, _delay_10us
.stabn 0xe0, 0, 0, _delay_10us
LM8:
.stabn	0x44, 0, 19, LM8-_delay_10us
Lfunc_begin3:
LM9:
.stabn	0x44, 0, 20, LM9-_delay_10us
	banksel 0
	;APP
	nop
	;NO_APP
LM10:
.stabn	0x44, 0, 21, LM10-_delay_10us
	;APP
	nop
	;NO_APP
LM11:
.stabn	0x44, 0, 22, LM11-_delay_10us
	;APP
	nop
	;NO_APP
LM12:
.stabn	0x44, 0, 23, LM12-_delay_10us
	;APP
	nop
	;NO_APP
LM13:
.stabn	0x44, 0, 24, LM13-_delay_10us
	;APP
	nop
	;NO_APP
LM14:
.stabn	0x44, 0, 25, LM14-_delay_10us
	;APP
	nop
	;NO_APP
LM15:
.stabn	0x44, 0, 26, LM15-_delay_10us
	;APP
	nop
	;NO_APP
LM16:
.stabn	0x44, 0, 27, LM16-_delay_10us
	;APP
	nop
	;NO_APP
LM17:
.stabn	0x44, 0, 28, LM17-_delay_10us
	;APP
	nop
	;NO_APP
LM18:
.stabn	0x44, 0, 29, LM18-_delay_10us
	;APP
	nop
	;NO_APP
LM19:
.stabn	0x44, 0, 30, LM19-_delay_10us
	;APP
	nop
	;NO_APP
LM20:
.stabn	0x44, 0, 31, LM20-_delay_10us
	return
Ltmp13:
Lfunc_end2:
Lfunc_end3:
LM21:
.stabf LM21-_delay_10us
	.@_delay_sec@_delay.args. .section bank1,uninit
	_delay.args. .ds 2
	.ends
	.@_delay_sec@_delay.temp. .section bank1,uninit
	_delay.temp. .ds 11
	.ends
