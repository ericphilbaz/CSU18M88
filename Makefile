###################################################
#工具链定义处
###################################################
TOOLCHAIN_DIR = E:\Program Files (x86)\chipsea\CSU-IDE\chipsea\tools\Compiler\C
ASM	   				= "$(TOOLCHAIN_DIR)\csasm.exe"
CC    				= "$(TOOLCHAIN_DIR)\cscc.exe"
LINKER 				= "$(TOOLCHAIN_DIR)\cslinker.exe"
LIBMAKER 			= "$(TOOLCHAIN_DIR)\CSLibMaker.exe"
RM	   				= del /F 1>NUL 2>NUL



###################################################
#编译选项定义处
###################################################
OUTPUT_DIR            = E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\.\Release
INTERTMP_DIR          = E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\.\Release
PROJ_PATH			  = E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0
PROJ_NAME			  = CSU18M88
BODY_NAME			  = CSU18M88
CFLAGS                = -cc1 -S -debug-info-kind=limited  -O0 -triple=cscc -fno-inline -chip=CSU18M88
ASMFLAGS              = -filetype=obj -arch=cscc -fill=0xffff -DM=__CHIPSEA__CSU18M88 -chip=CSU18M88 -mattr=c16 -BankCount=6
LINKFLAGS             = -bt 16
LIBMAKERFLAGS         = -chiptype 16 -debuginfo RemoveDebugInfo -encodeinfo Encryption
CODE_OPTION			  = %%CodeOption%%
ASM_FILES			  = "$(INTERTMP_DIR)\cs_drv_10bitadc.asm" \
"$(INTERTMP_DIR)\cs_drv_24bitadc.asm" \
"$(INTERTMP_DIR)\cs_drv_define_bit.asm" \
"$(INTERTMP_DIR)\CS_drv_delay.asm" \
"$(INTERTMP_DIR)\cs_drv_e2prom.asm" \
"$(INTERTMP_DIR)\cs_drv_lcd.asm" \
"$(INTERTMP_DIR)\cs_drv_soc_init.asm" \
"$(INTERTMP_DIR)\cs_drv_uart.asm" \
"$(INTERTMP_DIR)\main.asm" \
"$(INTERTMP_DIR)\SysRegDefine.asm" \
"E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cstartup.asm"

OBJ_FILES			  = "$(INTERTMP_DIR)\cs_drv_10bitadc.obj" \
"$(INTERTMP_DIR)\cs_drv_24bitadc.obj" \
"$(INTERTMP_DIR)\cs_drv_define_bit.obj" \
"$(INTERTMP_DIR)\CS_drv_delay.obj" \
"$(INTERTMP_DIR)\cs_drv_e2prom.obj" \
"$(INTERTMP_DIR)\cs_drv_lcd.obj" \
"$(INTERTMP_DIR)\cs_drv_soc_init.obj" \
"$(INTERTMP_DIR)\cs_drv_uart.obj" \
"$(INTERTMP_DIR)\main.obj" \
"$(INTERTMP_DIR)\SysRegDefine.obj" \
"$(INTERTMP_DIR)\cstartup.obj"

OUTPUT_FILE_TYPE	  = binfile
OUTPUT_FILE_EXTENSION = hex
OUTPUT_OTHER_FILES	  = "$(INTERTMP_DIR)\*.asm" \
						    "$(INTERTMP_DIR)\*.obj" \
                            "$(INTERTMP_DIR)\*.map"	\
							"$(INTERTMP_DIR)\*.txt"	\
						    "$(INTERTMP_DIR)\*.xml" \
							"$(INTERTMP_DIR)\*.sbms" \
							"$(INTERTMP_DIR)\*.cscc_bk"



###################################################
#.C文件到.ASM文件
###################################################
"$(INTERTMP_DIR)\cs_drv_10bitadc.asm" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_10bitadc.c" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\CSU18M88.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_10bitadc.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_define_bit.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_delay.h"
	$(CC) $(CFLAGS)  "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_10bitadc.c" -o "$(INTERTMP_DIR)\cs_drv_10bitadc.asm" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_24bitadc.asm" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_24bitadc.c" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\CSU18M88.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_24bitadc.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_delay.h"
	$(CC) $(CFLAGS)  "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_24bitadc.c" -o "$(INTERTMP_DIR)\cs_drv_24bitadc.asm" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_define_bit.asm" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_define_bit.c" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_define_bit.h"
	$(CC) $(CFLAGS)  "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_define_bit.c" -o "$(INTERTMP_DIR)\cs_drv_define_bit.asm" 
	$(ECHO)
"$(INTERTMP_DIR)\CS_drv_delay.asm" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\CS_drv_delay.c" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\CSU18M88.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_delay.h"
	$(CC) $(CFLAGS)  "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\CS_drv_delay.c" -o "$(INTERTMP_DIR)\CS_drv_delay.asm" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_e2prom.asm" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_e2prom.c" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\CSU18M88.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_e2prom.h"
	$(CC) $(CFLAGS)  "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_e2prom.c" -o "$(INTERTMP_DIR)\cs_drv_e2prom.asm" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_lcd.asm" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_lcd.c" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\CSU18M88.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_delay.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_lcd.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_define_bit.h"
	$(CC) $(CFLAGS)  "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_lcd.c" -o "$(INTERTMP_DIR)\cs_drv_lcd.asm" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_soc_init.asm" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_soc_init.c" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\CSU18M88.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_soc_init.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_define_bit.h"
	$(CC) $(CFLAGS)  "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_soc_init.c" -o "$(INTERTMP_DIR)\cs_drv_soc_init.asm" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_uart.asm" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_uart.c" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\CSU18M88.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_uart.h"
	$(CC) $(CFLAGS)  "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_uart.c" -o "$(INTERTMP_DIR)\cs_drv_uart.asm" 
	$(ECHO)
"$(INTERTMP_DIR)\main.asm" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\main.c" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\CSU18M88.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_soc_init.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_24bitadc.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_10bitadc.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_uart.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_lcd.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_delay.h" \
 "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cs_drv_define_bit.h"
	$(CC) $(CFLAGS)  "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\main.c" -o "$(INTERTMP_DIR)\main.asm" 
	$(ECHO)
"$(INTERTMP_DIR)\SysRegDefine.asm" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\SysRegDefine.c"
	$(CC) $(CFLAGS)  "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\SysRegDefine.c" -o "$(INTERTMP_DIR)\SysRegDefine.asm" 
	$(ECHO)

#main.asm :
#	$(CC) $(CFLAGS) "$(PROJ_PATH)\main.c" -o "$(PROJ_PATH)\main.asm"

###################################################
#.ASM文件到.OBJ文件
###################################################
"$(INTERTMP_DIR)\cs_drv_10bitadc.obj" : "$(INTERTMP_DIR)\cs_drv_10bitadc.asm"
	$(ASM) $(ASMFLAGS)  "$(INTERTMP_DIR)\cs_drv_10bitadc.asm" -o "$(INTERTMP_DIR)\cs_drv_10bitadc.obj" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_24bitadc.obj" : "$(INTERTMP_DIR)\cs_drv_24bitadc.asm"
	$(ASM) $(ASMFLAGS)  "$(INTERTMP_DIR)\cs_drv_24bitadc.asm" -o "$(INTERTMP_DIR)\cs_drv_24bitadc.obj" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_define_bit.obj" : "$(INTERTMP_DIR)\cs_drv_define_bit.asm"
	$(ASM) $(ASMFLAGS)  "$(INTERTMP_DIR)\cs_drv_define_bit.asm" -o "$(INTERTMP_DIR)\cs_drv_define_bit.obj" 
	$(ECHO)
"$(INTERTMP_DIR)\CS_drv_delay.obj" : "$(INTERTMP_DIR)\CS_drv_delay.asm"
	$(ASM) $(ASMFLAGS)  "$(INTERTMP_DIR)\CS_drv_delay.asm" -o "$(INTERTMP_DIR)\CS_drv_delay.obj" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_e2prom.obj" : "$(INTERTMP_DIR)\cs_drv_e2prom.asm"
	$(ASM) $(ASMFLAGS)  "$(INTERTMP_DIR)\cs_drv_e2prom.asm" -o "$(INTERTMP_DIR)\cs_drv_e2prom.obj" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_lcd.obj" : "$(INTERTMP_DIR)\cs_drv_lcd.asm"
	$(ASM) $(ASMFLAGS)  "$(INTERTMP_DIR)\cs_drv_lcd.asm" -o "$(INTERTMP_DIR)\cs_drv_lcd.obj" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_soc_init.obj" : "$(INTERTMP_DIR)\cs_drv_soc_init.asm"
	$(ASM) $(ASMFLAGS)  "$(INTERTMP_DIR)\cs_drv_soc_init.asm" -o "$(INTERTMP_DIR)\cs_drv_soc_init.obj" 
	$(ECHO)
"$(INTERTMP_DIR)\cs_drv_uart.obj" : "$(INTERTMP_DIR)\cs_drv_uart.asm"
	$(ASM) $(ASMFLAGS)  "$(INTERTMP_DIR)\cs_drv_uart.asm" -o "$(INTERTMP_DIR)\cs_drv_uart.obj" 
	$(ECHO)
"$(INTERTMP_DIR)\main.obj" : "$(INTERTMP_DIR)\main.asm"
	$(ASM) $(ASMFLAGS)  "$(INTERTMP_DIR)\main.asm" -o "$(INTERTMP_DIR)\main.obj" 
	$(ECHO)
"$(INTERTMP_DIR)\SysRegDefine.obj" : "$(INTERTMP_DIR)\SysRegDefine.asm"
	$(ASM) $(ASMFLAGS)  "$(INTERTMP_DIR)\SysRegDefine.asm" -o "$(INTERTMP_DIR)\SysRegDefine.obj" 
	$(ECHO)
"$(INTERTMP_DIR)\cstartup.obj" : "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cstartup.asm"
	$(ASM) $(ASMFLAGS) -gstab "E:\app\腾讯文件缓存\WeChat Files\wxid_5j3sdvdm1i6922\FileStorage\File\2024-07\CSU18M88_C_DEMO1.0\CSU18M88_C_Dome1.0\cstartup.asm" -o "$(INTERTMP_DIR)\cstartup.obj" 
	$(ECHO)

#main.obj :
#	$(ASM) $(ASMFLAGS) "$(PROJ_PATH)\main.asm" -o "$(PROJ_PATH)\main.obj"

###################################################
#命令定义处
###################################################
.PHONY : build
prepare : prebuild outputdir

re_prepare : prebuild outputdir clean_buildfile

build  : prebuild outputdir compiler_all_c_files compiler_all_asm_files $(OUTPUT_FILE_TYPE) postbuild

.PHONY : rebuild
rebuild: prebuild outputdir clean_buildfile build postbuild

output_file : $(OUTPUT_FILE_TYPE) postbuild

.PHONY : clean
clean :
	$(RM)  "$(INTERTMP_DIR)\dee"
	$(RM)  "$(INTERTMP_DIR)\*.lik"
	$(RM)  "$(INTERTMP_DIR)\*.lst"
	$(RM)  $(OUTPUT_OTHER_FILES)
	$(RM)  "$(OUTPUT_DIR)\$(PROJ_NAME).$(OUTPUT_FILE_EXTENSION)"
	$(RM)  "$(INTERTMP_DIR)\$(PROJ_NAME).dat"

clean_buildfile :
	$(RM)  $(OUTPUT_OTHER_FILES)
	$(RM)  "$(OUTPUT_DIR)\$(PROJ_NAME).$(OUTPUT_FILE_EXTENSION)"
    
outputdir:
	if not exist "$(OUTPUT_DIR)/$(NULL)" mkdir "$(OUTPUT_DIR)"
	if not exist "$(INTERTMP_DIR)/$(NULL)" mkdir "$(INTERTMP_DIR)"
	
binfile: 
	$(LINKER) $(LINKFLAGS) -s "$(INTERTMP_DIR)\Script.lik"
	
libfile: 
	$(LIBMAKER) $(LIBMAKERFLAGS) -o $(OBJ_FILES) -lib "$(OUTPUT_DIR)\$(PROJ_NAME).lib"
	
compiler_all_c_files : $(ASM_FILES)

compiler_all_asm_files: $(OBJ_FILES)

prebuild :
	

postbuild :
	

