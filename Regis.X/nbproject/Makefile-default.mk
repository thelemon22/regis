#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Regis.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Regis.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/src/main.o ${OBJECTDIR}/src/r_adc.o ${OBJECTDIR}/src/r_fft.o ${OBJECTDIR}/src/r_usb.o ${OBJECTDIR}/src/traps.o ${OBJECTDIR}/src/twiddleFactors.o ${OBJECTDIR}/_ext/945375074/usb_function_cdc.o ${OBJECTDIR}/_ext/1003463517/usb_device.o ${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o ${OBJECTDIR}/_ext/1958098247/usb_descriptors.o ${OBJECTDIR}/fft.o
POSSIBLE_DEPFILES=${OBJECTDIR}/src/main.o.d ${OBJECTDIR}/src/r_adc.o.d ${OBJECTDIR}/src/r_fft.o.d ${OBJECTDIR}/src/r_usb.o.d ${OBJECTDIR}/src/traps.o.d ${OBJECTDIR}/src/twiddleFactors.o.d ${OBJECTDIR}/_ext/945375074/usb_function_cdc.o.d ${OBJECTDIR}/_ext/1003463517/usb_device.o.d ${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o.d ${OBJECTDIR}/_ext/1958098247/usb_descriptors.o.d ${OBJECTDIR}/fft.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/src/main.o ${OBJECTDIR}/src/r_adc.o ${OBJECTDIR}/src/r_fft.o ${OBJECTDIR}/src/r_usb.o ${OBJECTDIR}/src/traps.o ${OBJECTDIR}/src/twiddleFactors.o ${OBJECTDIR}/_ext/945375074/usb_function_cdc.o ${OBJECTDIR}/_ext/1003463517/usb_device.o ${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o ${OBJECTDIR}/_ext/1958098247/usb_descriptors.o ${OBJECTDIR}/fft.o


CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
	${MAKE} ${MAKE_OPTIONS} -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/Regis.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=33EP512MU810
MP_LINKER_FILE_OPTION=,--script=p33EP512MU810.gld
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/src/main.o: src/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/main.c  -o ${OBJECTDIR}/src/main.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/main.o.d"        -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/main.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/src/r_adc.o: src/r_adc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/r_adc.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/r_adc.c  -o ${OBJECTDIR}/src/r_adc.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/r_adc.o.d"        -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/r_adc.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/src/r_fft.o: src/r_fft.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/r_fft.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/r_fft.c  -o ${OBJECTDIR}/src/r_fft.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/r_fft.o.d"        -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/r_fft.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/src/r_usb.o: src/r_usb.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/r_usb.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/r_usb.c  -o ${OBJECTDIR}/src/r_usb.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/r_usb.o.d"        -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/r_usb.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/src/traps.o: src/traps.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/traps.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/traps.c  -o ${OBJECTDIR}/src/traps.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/traps.o.d"        -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/traps.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/src/twiddleFactors.o: src/twiddleFactors.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/twiddleFactors.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/twiddleFactors.c  -o ${OBJECTDIR}/src/twiddleFactors.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/twiddleFactors.o.d"        -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/twiddleFactors.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/945375074/usb_function_cdc.o: C:/git/hw/regis/Microchip/USB/CDC\ Device\ Driver/usb_function_cdc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/945375074 
	@${RM} ${OBJECTDIR}/_ext/945375074/usb_function_cdc.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "C:/git/hw/regis/Microchip/USB/CDC Device Driver/usb_function_cdc.c"  -o ${OBJECTDIR}/_ext/945375074/usb_function_cdc.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/945375074/usb_function_cdc.o.d"        -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/945375074/usb_function_cdc.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1003463517/usb_device.o: C:/git/hw/regis/Microchip/USB/usb_device.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1003463517 
	@${RM} ${OBJECTDIR}/_ext/1003463517/usb_device.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  C:/git/hw/regis/Microchip/USB/usb_device.c  -o ${OBJECTDIR}/_ext/1003463517/usb_device.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1003463517/usb_device.o.d"        -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1003463517/usb_device.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o: C:/git/hw/regis/Microchip/USB/usb_hal_dspic33e.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1003463517 
	@${RM} ${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  C:/git/hw/regis/Microchip/USB/usb_hal_dspic33e.c  -o ${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o.d"        -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1958098247/usb_descriptors.o: ../demo_projects/usb_descriptors.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1958098247 
	@${RM} ${OBJECTDIR}/_ext/1958098247/usb_descriptors.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../demo_projects/usb_descriptors.c  -o ${OBJECTDIR}/_ext/1958098247/usb_descriptors.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1958098247/usb_descriptors.o.d"        -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1958098247/usb_descriptors.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
else
${OBJECTDIR}/src/main.o: src/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/main.c  -o ${OBJECTDIR}/src/main.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/main.o.d"        -g -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/main.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/src/r_adc.o: src/r_adc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/r_adc.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/r_adc.c  -o ${OBJECTDIR}/src/r_adc.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/r_adc.o.d"        -g -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/r_adc.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/src/r_fft.o: src/r_fft.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/r_fft.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/r_fft.c  -o ${OBJECTDIR}/src/r_fft.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/r_fft.o.d"        -g -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/r_fft.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/src/r_usb.o: src/r_usb.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/r_usb.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/r_usb.c  -o ${OBJECTDIR}/src/r_usb.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/r_usb.o.d"        -g -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/r_usb.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/src/traps.o: src/traps.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/traps.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/traps.c  -o ${OBJECTDIR}/src/traps.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/traps.o.d"        -g -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/traps.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/src/twiddleFactors.o: src/twiddleFactors.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/src 
	@${RM} ${OBJECTDIR}/src/twiddleFactors.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  src/twiddleFactors.c  -o ${OBJECTDIR}/src/twiddleFactors.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/src/twiddleFactors.o.d"        -g -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/src/twiddleFactors.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/945375074/usb_function_cdc.o: C:/git/hw/regis/Microchip/USB/CDC\ Device\ Driver/usb_function_cdc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/945375074 
	@${RM} ${OBJECTDIR}/_ext/945375074/usb_function_cdc.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "C:/git/hw/regis/Microchip/USB/CDC Device Driver/usb_function_cdc.c"  -o ${OBJECTDIR}/_ext/945375074/usb_function_cdc.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/945375074/usb_function_cdc.o.d"        -g -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/945375074/usb_function_cdc.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1003463517/usb_device.o: C:/git/hw/regis/Microchip/USB/usb_device.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1003463517 
	@${RM} ${OBJECTDIR}/_ext/1003463517/usb_device.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  C:/git/hw/regis/Microchip/USB/usb_device.c  -o ${OBJECTDIR}/_ext/1003463517/usb_device.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1003463517/usb_device.o.d"        -g -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1003463517/usb_device.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o: C:/git/hw/regis/Microchip/USB/usb_hal_dspic33e.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1003463517 
	@${RM} ${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  C:/git/hw/regis/Microchip/USB/usb_hal_dspic33e.c  -o ${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o.d"        -g -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1003463517/usb_hal_dspic33e.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1958098247/usb_descriptors.o: ../demo_projects/usb_descriptors.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1958098247 
	@${RM} ${OBJECTDIR}/_ext/1958098247/usb_descriptors.o.d 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../demo_projects/usb_descriptors.c  -o ${OBJECTDIR}/_ext/1958098247/usb_descriptors.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1958098247/usb_descriptors.o.d"        -g -omf=elf -mlarge-data -O0 -I"./include" -I"../MicroChip/Include" -I"../MicroChip/USB" -msmart-io=1 -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1958098247/usb_descriptors.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/fft.o: fft.s  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/fft.o.d 
	${MP_CC} $(MP_EXTRA_AS_PRE)  fft.s  -o ${OBJECTDIR}/fft.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -I"C:/git/hw/regis/Microchip/libdsp/inc" -Wa,-MD,"${OBJECTDIR}/fft.o.d",--defsym=__MPLAB_BUILD=1,--defsym=__ICD2RAM=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_PK3=1,-g,--no-relax$(MP_EXTRA_AS_POST)
	@${FIXDEPS} "${OBJECTDIR}/fft.o.d"  $(SILENT)  -rsi ${MP_CC_DIR}../  
	
else
${OBJECTDIR}/fft.o: fft.s  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/fft.o.d 
	${MP_CC} $(MP_EXTRA_AS_PRE)  fft.s  -o ${OBJECTDIR}/fft.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -omf=elf -I"C:/git/hw/regis/Microchip/libdsp/inc" -Wa,-MD,"${OBJECTDIR}/fft.o.d",--defsym=__MPLAB_BUILD=1,-g,--no-relax$(MP_EXTRA_AS_POST)
	@${FIXDEPS} "${OBJECTDIR}/fft.o.d"  $(SILENT)  -rsi ${MP_CC_DIR}../  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemblePreproc
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/Regis.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk  ../Microchip/libdsp/lib/libdsp-elf.a  
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -o dist/${CND_CONF}/${IMAGE_TYPE}/Regis.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}    ..\Microchip\libdsp\lib\libdsp-elf.a  -mcpu=$(MP_PROCESSOR_OPTION)        -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -Wl,--defsym=__MPLAB_BUILD=1,--defsym=__ICD2RAM=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_PK3=1,$(MP_LINKER_FILE_OPTION),--check-sections,--data-init,--pack-data,--handles,--isr,--no-gc-sections,--fill-upper=0,--stackguard=16,--library-path="./lib",--library-path="C:/Program Files (x86)/Microchip/xc16/v1.11/lib/dsPIC33E",--no-force-link,--smart-io$(MP_EXTRA_LD_POST) 
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/Regis.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk  ../Microchip/libdsp/lib/libdsp-elf.a 
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -o dist/${CND_CONF}/${IMAGE_TYPE}/Regis.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}    ..\Microchip\libdsp\lib\libdsp-elf.a  -mcpu=$(MP_PROCESSOR_OPTION)        -omf=elf -Wl,--defsym=__MPLAB_BUILD=1,$(MP_LINKER_FILE_OPTION),--check-sections,--data-init,--pack-data,--handles,--isr,--no-gc-sections,--fill-upper=0,--stackguard=16,--library-path="./lib",--library-path="C:/Program Files (x86)/Microchip/xc16/v1.11/lib/dsPIC33E",--no-force-link,--smart-io$(MP_EXTRA_LD_POST) 
	${MP_CC_DIR}\\xc16-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/Regis.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} -a  -omf=elf 
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
