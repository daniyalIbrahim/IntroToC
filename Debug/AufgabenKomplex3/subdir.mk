################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../AufgabenKomplex3/scalarDataTypesSandbox.c 

OBJS += \
./AufgabenKomplex3/scalarDataTypesSandbox.o 

C_DEPS += \
./AufgabenKomplex3/scalarDataTypesSandbox.d 


# Each subdirectory must supply rules for building sources it contributes
AufgabenKomplex3/%.o: ../AufgabenKomplex3/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


