/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "adc.h"
#include "dma.h"
#include "spi.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "ILI9341_STM32_Driver.h"
#include "ILI9341_demo.h"
#include "usart.h"
#include "lvgl.h"
#include "button.h"
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "gui_guider.h"           // Gui Guider 生成的界面和控件的声�????????
#include "events_init.h"          // Gui Guider 生成的初始化事件、回调函�????????
#include "custom.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
lv_ui guider_ui; // 声明 界面对象
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_SPI1_Init();
  MX_SPI2_Init();
  MX_SPI3_Init();
  MX_USART1_UART_Init();
  MX_ADC1_Init();
  MX_TIM10_Init();
  MX_TIM1_Init();
  /* USER CODE BEGIN 2 */
	ILI9341_Init(); //initial driver setup to drive ili9341
	ILI9341_Set_Rotation(SCREEN_HORIZONTAL_1);
	HAL_Delay(1000);
	HAL_GPIO_WritePin(LCD_BLK_GPIO_Port, LCD_BLK_Pin, GPIO_PIN_SET);

	lv_init();
	lv_port_disp_init();
	lv_port_indev_init();

	__HAL_TIM_CLEAR_IT(&htim10, TIM_IT_UPDATE);
	HAL_TIM_Base_Start_IT(&htim10); //使能LVGL心跳时钟

	setup_ui(&guider_ui);           // 初始�???????? UI
	events_init(&guider_ui);       // 初始�???????? 事件

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	while (1) {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
		HAL_Delay(1 - 1);
		static uint16_t led_time = 0;
		if (led_time++ >= 1000) {
			HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
			led_time = 0;
		}
//		static uint16_t lcd_time = 0;
//		if (lcd_time++ > 1000) {
//			PERFORMANCE_TEST();
//			lcd_time = 0;
//		}
//		HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
//		HAL_Delay(1000);
//		PERFORMANCE_TEST();
//		COUNTING_MULTIPLE_SEGMENTS();
//		COLOUR_EXAMPLE();
//		ILI9341_Fill_Screen(RED);
//		HAL_GPIO_TogglePin(LCD_CS_GPIO_Port, LCD_CS_PIN);
//		HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_PIN, GPIO_PIN_SET);
//		HAL_Delay(1000);
//		USART1_Printf("%d : LCD ID:%d\r\n", ILI9341_RedeID());
//		HAL_Delay(1000);
//		static uint16_t gui_time = 0;
//		if (gui_time++ > 10) {
//			lv_timer_handler(); /* LVGL计时�???????? */
//			gui_time = 0;
//		}
//		lv_timer_handler();
	}
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 4;
  RCC_OscInitStruct.PLL.PLLN = 100;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
//	static uint16_t led_time = 0; //心跳�????????
	if (htim->Instance == TIM10) {
		lv_tick_inc(1);
//		if (led_time++ >= 1000) {
//			HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
//			led_time = 0;
//		}
	}
}

void Button_Event_Callback(lv_event_t *event) {
	lv_obj_t *btn = lv_event_get_target(event);          // 获得调用这个回调函数的对�????????
//	if (event->code == LV_EVENT_CLICKED) {
//		static uint8_t cnt = 0;
//		cnt++;
//		lv_obj_t *label = lv_obj_get_child(btn, NULL); // 获取�????????1个子对象(我们在设计时，已安排了它的第1个子对象是一个label对象)
//		lv_label_set_text_fmt(label, "Button: %d", cnt);   // 设置标签的文本，写法类似printf
//	}
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */
	__disable_irq();
	while (1) {
	}
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
