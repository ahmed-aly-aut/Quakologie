################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../EntenFabrik.cpp \
../EntenSimulator.cpp \
../Gans.cpp \
../GansAdapter.cpp \
../GummiEnte.cpp \
../LockPfeife.cpp \
../MoorEnte.cpp \
../QuakZaehler.cpp \
../Quakologe.cpp \
../Schar.cpp \
../SenderRing.cpp \
../StockEnte.cpp \
../ZaehlendeEntenFabrik.cpp 

OBJS += \
./EntenFabrik.o \
./EntenSimulator.o \
./Gans.o \
./GansAdapter.o \
./GummiEnte.o \
./LockPfeife.o \
./MoorEnte.o \
./QuakZaehler.o \
./Quakologe.o \
./Schar.o \
./SenderRing.o \
./StockEnte.o \
./ZaehlendeEntenFabrik.o 

CPP_DEPS += \
./EntenFabrik.d \
./EntenSimulator.d \
./Gans.d \
./GansAdapter.d \
./GummiEnte.d \
./LockPfeife.d \
./MoorEnte.d \
./QuakZaehler.d \
./Quakologe.d \
./Schar.d \
./SenderRing.d \
./StockEnte.d \
./ZaehlendeEntenFabrik.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


