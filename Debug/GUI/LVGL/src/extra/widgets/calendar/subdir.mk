################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/extra/widgets/calendar/lv_calendar.c \
../GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_arrow.c \
../GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_dropdown.c 

OBJS += \
./GUI/LVGL/src/extra/widgets/calendar/lv_calendar.o \
./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_arrow.o \
./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_dropdown.o 

C_DEPS += \
./GUI/LVGL/src/extra/widgets/calendar/lv_calendar.d \
./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_arrow.d \
./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_dropdown.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/extra/widgets/calendar/%.o GUI/LVGL/src/extra/widgets/calendar/%.su GUI/LVGL/src/extra/widgets/calendar/%.cyclo: ../GUI/LVGL/src/extra/widgets/calendar/%.c GUI/LVGL/src/extra/widgets/calendar/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-calendar

clean-GUI-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-calendar:
	-$(RM) ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar.cyclo ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar.d ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar.o ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar.su ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_arrow.cyclo ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_arrow.d ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_arrow.o ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_arrow.su ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_dropdown.cyclo ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_dropdown.d ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_dropdown.o ./GUI/LVGL/src/extra/widgets/calendar/lv_calendar_header_dropdown.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-calendar

