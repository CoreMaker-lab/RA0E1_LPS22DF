################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ra/fsp/src/r_uarta/r_uarta.c 

C_DEPS += \
./ra/fsp/src/r_uarta/r_uarta.d 

OBJS += \
./ra/fsp/src/r_uarta/r_uarta.o 

SREC += \
RA0E1_LPS22DF_Project1.srec 

MAP += \
RA0E1_LPS22DF_Project1.map 


# Each subdirectory must supply rules for building sources it contributes
ra/fsp/src/r_uarta/%.o: ../ra/fsp/src/r_uarta/%.c
	$(file > $@.in,-mcpu=cortex-m23 -mthumb -Oz -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RA_ -D_RA_CORE=CM23 -D_RA_ORDINAL=1 -I"C:/Users/a8456/e2_studio/workspace_5.5/RA0E1_LPS22DF_Project1/src" -I"." -I"C:/Users/a8456/e2_studio/workspace_5.5/RA0E1_LPS22DF_Project1/ra/fsp/inc" -I"C:/Users/a8456/e2_studio/workspace_5.5/RA0E1_LPS22DF_Project1/ra/fsp/inc/api" -I"C:/Users/a8456/e2_studio/workspace_5.5/RA0E1_LPS22DF_Project1/ra/fsp/inc/instances" -I"C:/Users/a8456/e2_studio/workspace_5.5/RA0E1_LPS22DF_Project1/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"C:/Users/a8456/e2_studio/workspace_5.5/RA0E1_LPS22DF_Project1/ra_gen" -I"C:/Users/a8456/e2_studio/workspace_5.5/RA0E1_LPS22DF_Project1/ra_cfg/fsp_cfg/bsp" -I"C:/Users/a8456/e2_studio/workspace_5.5/RA0E1_LPS22DF_Project1/ra_cfg/fsp_cfg" -std=c99 -Wno-stringop-overflow -Wno-format-truncation --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"
