################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Hardware/ILI9341/ILI9341_GFX.c \
../Hardware/ILI9341/ILI9341_STM32_Driver.c \
../Hardware/ILI9341/ILI9341_Touchscreen.c \
../Hardware/ILI9341/ILI9341_demo.c 

OBJS += \
./Hardware/ILI9341/ILI9341_GFX.o \
./Hardware/ILI9341/ILI9341_STM32_Driver.o \
./Hardware/ILI9341/ILI9341_Touchscreen.o \
./Hardware/ILI9341/ILI9341_demo.o 

C_DEPS += \
./Hardware/ILI9341/ILI9341_GFX.d \
./Hardware/ILI9341/ILI9341_STM32_Driver.d \
./Hardware/ILI9341/ILI9341_Touchscreen.d \
./Hardware/ILI9341/ILI9341_demo.d 


# Each subdirectory must supply rules for building sources it contributes
Hardware/ILI9341/%.o Hardware/ILI9341/%.su Hardware/ILI9341/%.cyclo: ../Hardware/ILI9341/%.c Hardware/ILI9341/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Hardware-2f-ILI9341

clean-Hardware-2f-ILI9341:
	-$(RM) ./Hardware/ILI9341/ILI9341_GFX.cyclo ./Hardware/ILI9341/ILI9341_GFX.d ./Hardware/ILI9341/ILI9341_GFX.o ./Hardware/ILI9341/ILI9341_GFX.su ./Hardware/ILI9341/ILI9341_STM32_Driver.cyclo ./Hardware/ILI9341/ILI9341_STM32_Driver.d ./Hardware/ILI9341/ILI9341_STM32_Driver.o ./Hardware/ILI9341/ILI9341_STM32_Driver.su ./Hardware/ILI9341/ILI9341_Touchscreen.cyclo ./Hardware/ILI9341/ILI9341_Touchscreen.d ./Hardware/ILI9341/ILI9341_Touchscreen.o ./Hardware/ILI9341/ILI9341_Touchscreen.su ./Hardware/ILI9341/ILI9341_demo.cyclo ./Hardware/ILI9341/ILI9341_demo.d ./Hardware/ILI9341/ILI9341_demo.o ./Hardware/ILI9341/ILI9341_demo.su

.PHONY: clean-Hardware-2f-ILI9341

