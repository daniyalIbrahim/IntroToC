################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../AufgabenKomplex5/bitByBit.c \
../AufgabenKomplex5/funcSandBox.c 

OBJS += \
./AufgabenKomplex5/bitByBit.o \
./AufgabenKomplex5/funcSandBox.o 

C_DEPS += \
./AufgabenKomplex5/bitByBit.d \
./AufgabenKomplex5/funcSandBox.d 


# Each subdirectory must supply rules for building sources it contributes
AufgabenKomplex5/%.o: ../AufgabenKomplex5/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


