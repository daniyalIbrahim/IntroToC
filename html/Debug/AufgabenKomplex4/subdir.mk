################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../AufgabenKomplex4/callByRef.c \
../AufgabenKomplex4/matrix2.c \
../AufgabenKomplex4/myList.c 

OBJS += \
./AufgabenKomplex4/callByRef.o \
./AufgabenKomplex4/matrix2.o \
./AufgabenKomplex4/myList.o 

C_DEPS += \
./AufgabenKomplex4/callByRef.d \
./AufgabenKomplex4/matrix2.d \
./AufgabenKomplex4/myList.d 


# Each subdirectory must supply rules for building sources it contributes
AufgabenKomplex4/%.o: ../AufgabenKomplex4/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


