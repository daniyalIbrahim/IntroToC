################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../AufgabenKomplex1/convert2Dual.c \
../AufgabenKomplex1/fahr2Celcius.c \
../AufgabenKomplex1/helloWorld.c \
../AufgabenKomplex1/just4Fun.c 

OBJS += \
./AufgabenKomplex1/convert2Dual.o \
./AufgabenKomplex1/fahr2Celcius.o \
./AufgabenKomplex1/helloWorld.o \
./AufgabenKomplex1/just4Fun.o 

C_DEPS += \
./AufgabenKomplex1/convert2Dual.d \
./AufgabenKomplex1/fahr2Celcius.d \
./AufgabenKomplex1/helloWorld.d \
./AufgabenKomplex1/just4Fun.d 


# Each subdirectory must supply rules for building sources it contributes
AufgabenKomplex1/%.o: ../AufgabenKomplex1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


