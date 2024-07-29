﻿;=====================================================================
; File Name   : cstartup.asm
; Description : Startup routine for CSU18M88
;               This file contains the CSCC startup routine           
;               and must usually be tailored to suit customer's hardware
; Body Name   : CSU18M88
; Toolchain   : cscc V1.0.x
; Date        : 03/04/2017
;=====================================================================


;=====================================================================
; Register define eare
;=====================================================================
ind0					.equ		0x0
fsr0					.equ		0x2
status					.equ		0x4	
bsr						.equ		0x8	
eadrh					.equ		0xA
eadrl					.equ		0xB
edat					.equ		0xC


;=====================================================================
; Basic Settings for User
;=====================================================================
LOOP_AT_END				.equ 		1		; Endless waiting after main()
CPU_HALT				.equ 		0		; Exception of invalid instruction
RSP						.equ		0x1FF	; Pseudo stack point top(only at bank1)

BANK0_SRAM_START_ADDR	.equ		0x80
BANK0_SRAM_END_ADDR		.equ		0xff
BANK1_SRAM_START_ADDR	.equ		0x00
BANK1_SRAM_END_ADDR		.equ		0xff
BANK2_SRAM_START_ADDR	.equ		0x80
BANK2_SRAM_END_ADDR		.equ		0xff
BANK3_SRAM_START_ADDR	.equ		0x00
BANK3_SRAM_END_ADDR		.equ		0xff
BANK4_SRAM_START_ADDR	.equ		0x80
BANK4_SRAM_END_ADDR		.equ		0xff
BANK5_SRAM_START_ADDR	.equ		0x00
BANK5_SRAM_END_ADDR		.equ		0xff
BANKCOUNT 				.equ		6


;========================macro define begin================================
;循环清除ind0直到fsr0溢出
clear_ind0_until_fsr0full  .macro startaddr
	movlw	startaddr             
	movwf	fsr0
	clrf	ind0
    incfsz	fsr0,1
	goto	$-2
.endm
;循环清除ind0直到fsr0 = endaddr
clear_ind0_until_endaddr  .macro startaddr,endaddr
	movlw	startaddr             
	movwf	fsr0
	clrf	ind0
	incf 	fsr0,1
	movlw 	endaddr
	SUBWF 	fsr0,0
	BTFSS   4,0
	goto 	$-5
	clrf 	ind0
.endm
;=======================macro define end=================================

;=======================bank clr funtion begin=============================
init_bankx_sram_to_00_sec .section rom
init_bankx_sram_to_00:
.if BANKCOUNT == 1									;init bank0
	bcf 	bsr,0
	bcf 	bsr,7
	clear_ind0_until_endaddr	BANK0_SRAM_START_ADDR,BANK0_SRAM_END_ADDR
	return
	
.elseif BANKCOUNT == 2								;init bank0-1
	bcf		bsr,0									;set bank0
	bcf		bsr,7
	clear_ind0_until_fsr0full	BANK0_SRAM_START_ADDR
	bsf		bsr,7									;set bank1
	clear_ind0_until_endaddr	BANK1_SRAM_START_ADDR,BANK1_SRAM_END_ADDR
	
	bcf		bsr,7									;set bank0
	return
	
.elseif BANKCOUNT == 3								;init bank0-2
	bcf		bsr,0									;set bank0
	bcf		bsr,7
	clear_ind0_until_fsr0full	BANK0_SRAM_START_ADDR
	bsf		bsr,7									;set bank1
	clear_ind0_until_fsr0full	BANK1_SRAM_START_ADDR
	bsf		bsr,0									;set bank2
	bcf		bsr,7
	clear_ind0_until_endaddr	BANK2_SRAM_START_ADDR,BANK2_SRAM_END_ADDR
	
	bcf		bsr,0									;set bank0									
	return
	
.elseif BANKCOUNT == 4								;init bank0-3
	bcf		bsr,0									;set bank0
	bcf		bsr,7
	clear_ind0_until_fsr0full	BANK0_SRAM_START_ADDR
	bsf		bsr,7									;set bank1
	clear_ind0_until_fsr0full	BANK1_SRAM_START_ADDR
	bsf		bsr,0									;set bank2
	bcf		bsr,7
	clear_ind0_until_fsr0full	BANK2_SRAM_START_ADDR
	
	bsf		bsr,7									;set bank3
	clear_ind0_until_endaddr	BANK3_SRAM_START_ADDR,BANK3_SRAM_END_ADDR
	
	bcf		bsr,0									;set bank0
	bcf		bsr,7
	return
	
.elseif BANKCOUNT == 5								;init bank0-4
	bcf		bsr,0									;set bank0
	bcf		bsr,7
	clear_ind0_until_fsr0full	BANK0_SRAM_START_ADDR
	
	bsf		bsr,7									;set bank1
	clear_ind0_until_fsr0full	BANK1_SRAM_START_ADDR
	
	bsf		bsr,0									;set bank2
	bcf		bsr,7
	clear_ind0_until_fsr0full	BANK2_SRAM_START_ADDR
	
	bsf		bsr,7									;set bank3
	clear_ind0_until_fsr0full	BANK3_SRAM_START_ADDR
	
	bsf		bsr,1									;set bank4
	bcf		bsr,0
	bcf		bsr,7
	clear_ind0_until_endaddr	BANK4_SRAM_START_ADDR,BANK4_SRAM_END_ADDR
	
	bcf		bsr,1									;set bank0			
	return
	
.elseif BANKCOUNT == 6								;init bank0-5
	bcf		bsr,0									;set bank0
	bcf		bsr,7
	clear_ind0_until_fsr0full	BANK0_SRAM_START_ADDR
	
	bsf		bsr,7									;set bank1
	clear_ind0_until_fsr0full	BANK1_SRAM_START_ADDR
	
	bsf		bsr,0									;set bank2
	bcf		bsr,7
	clear_ind0_until_fsr0full	BANK2_SRAM_START_ADDR
	
	bsf		bsr,7									;set bank3
	clear_ind0_until_fsr0full	BANK3_SRAM_START_ADDR
	
	bsf		bsr,1									;set bank4
	bcf		bsr,0
	bcf		bsr,7
	clear_ind0_until_fsr0full	BANK4_SRAM_START_ADDR
	
	bsf		bsr,7									;set bank5
	clear_ind0_until_endaddr	BANK5_SRAM_START_ADDR,BANK5_SRAM_END_ADDR
	
	bcf		bsr,1									;set bank0
	bcf		bsr,7
	return
.endif
.ends	
;=======================bank clr funtion end=============================	



;=====================================================================
; GLOBAL area
;=====================================================================
.global ind0							
.global fsr0
.global status
.global bsr
.global eadrh
.global eadrl
.global edat


;=====================================================================
; EXTERN area
;=====================================================================
.extern _main							; where to begin execution
.extern CSCC_BANK0_INIT_TAB_START		; address of bank0 init table
.extern CSCC_BANK0_INIT_TAB_SIZE		; size of bank0 init table(word as a unit)
.extern CSCC_INTERRUPT_FUNCTION_ADDR	; interrupt function address





;=====================================================================
; Starting setup/reset code 
; CSCC_INIT_CODE - where the execution actually begins
;=====================================================================
CSCC_INIT_CODE 		.section rom,addr=0x00
V_RESET:
	goto __init_sram_to_zero
.ends



;=====================================================================
; Interrupt vector section 
;=====================================================================
CSCC_INTERRUPT_VECTOR	.section rom,addr=0x04
	goto CSCC_INTERRUPT_FUNCTION_ADDR
.ends



;======================================================================
; Init all sram to zero 
;======================================================================
CSCC_INIT_SRAM_TO_ZERO		.section rom
__init_sram_to_zero:

.ifdef	WDT_RESET_NOT_REINIT_SRAM
	btfsc status, 3
	goto __program_startup
.endif
	
	call init_bankx_sram_to_00
	
	;goto init global var
	goto __init_global_var
.ends 	



;======================================================================
; Init all global variables 
;======================================================================
CSCC_INIT_GLOBAL_VAR		.section rom
__init_global_var:

	;set page0 valid
	bcf bsr,0
	bcf bsr,1
	
	;init bank0 global var
	movlw .low(CSCC_BANK0_INIT_TAB_START)	;获取初始化表的低8位地址
	movwf eadrl								;给低字节地址赋值
	movlw .high(CSCC_BANK0_INIT_TAB_START)	;获取初始化表的高8位地址
	movwf eadrh								;给高字节地址赋值
	movlw CSCC_BANK0_INIT_TAB_SIZE			;bank0变量中初始化个数(<=0xFF)
	movwf RSP								;保存bank0初始化表的大小(word为单位)
	
	sublw 0									;判断初始化表的大小是否大于0
	btfsc status,0							;Z标志等于0代表结果为非0
	goto  __sp_init
	
bank0_init_var:
	bcf bsr,7								;IRP0=0,间接寻址IND0时，访问bank0地址
	movp									;low to w(value), high to edath(address)
	movfw edat								;edath store var address
	movwf fsr0								;var address to fsr0
	movp
    movwf ind0								;init var
	incf eadrl,1							;address++ (low++)
	movlw 0									;set w to 0
	addwfc eadrh,1							;address high
	decfsz RSP,1							;--size
	goto bank0_init_var
	
__sp_init:									;sp reg init	
	goto __program_startup					
.ends


;=====================================================================	
; Now when we are init all global variables, then goto main function
;=====================================================================
.text
__program_startup:
	goto _main								; execute main()
	
__program_end:
;.if	LOOP_AT_END
;	goto	$								; 1. Endless Loop
;.endif
;.if CPU_HALT
;	halt									; 2. CPU Stop
;.endif
.ends




