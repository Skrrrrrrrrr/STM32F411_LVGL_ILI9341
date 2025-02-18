/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    usart.c
  * @brief   This file provides code for the configuration
  *          of the USART instances.
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
#include "usart.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

UART_HandleTypeDef huart1;
DMA_HandleTypeDef hdma_usart1_tx;

/* USART1 init function */

void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

void HAL_UART_MspInit(UART_HandleTypeDef* uartHandle)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(uartHandle->Instance==USART1)
  {
  /* USER CODE BEGIN USART1_MspInit 0 */

  /* USER CODE END USART1_MspInit 0 */
    /* USART1 clock enable */
    __HAL_RCC_USART1_CLK_ENABLE();

    __HAL_RCC_GPIOA_CLK_ENABLE();
    /**USART1 GPIO Configuration
    PA9     ------> USART1_TX
    PA10     ------> USART1_RX
    */
    GPIO_InitStruct.Pin = GPIO_PIN_9|GPIO_PIN_10;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF7_USART1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    /* USART1 DMA Init */
    /* USART1_TX Init */
    hdma_usart1_tx.Instance = DMA2_Stream7;
    hdma_usart1_tx.Init.Channel = DMA_CHANNEL_4;
    hdma_usart1_tx.Init.Direction = DMA_MEMORY_TO_PERIPH;
    hdma_usart1_tx.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_usart1_tx.Init.MemInc = DMA_MINC_ENABLE;
    hdma_usart1_tx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
    hdma_usart1_tx.Init.MemDataAlignment = DMA_MDATAALIGN_BYTE;
    hdma_usart1_tx.Init.Mode = DMA_NORMAL;
    hdma_usart1_tx.Init.Priority = DMA_PRIORITY_LOW;
    hdma_usart1_tx.Init.FIFOMode = DMA_FIFOMODE_DISABLE;
    if (HAL_DMA_Init(&hdma_usart1_tx) != HAL_OK)
    {
      Error_Handler();
    }

    __HAL_LINKDMA(uartHandle,hdmatx,hdma_usart1_tx);

    /* USART1 interrupt Init */
    HAL_NVIC_SetPriority(USART1_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(USART1_IRQn);
  /* USER CODE BEGIN USART1_MspInit 1 */

  /* USER CODE END USART1_MspInit 1 */
  }
}

void HAL_UART_MspDeInit(UART_HandleTypeDef* uartHandle)
{

  if(uartHandle->Instance==USART1)
  {
  /* USER CODE BEGIN USART1_MspDeInit 0 */

  /* USER CODE END USART1_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_USART1_CLK_DISABLE();

    /**USART1 GPIO Configuration
    PA9     ------> USART1_TX
    PA10     ------> USART1_RX
    */
    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_9|GPIO_PIN_10);

    /* USART1 DMA DeInit */
    HAL_DMA_DeInit(uartHandle->hdmatx);

    /* USART1 interrupt Deinit */
    HAL_NVIC_DisableIRQ(USART1_IRQn);
  /* USER CODE BEGIN USART1_MspDeInit 1 */

  /* USER CODE END USART1_MspDeInit 1 */
  }
}

/* USER CODE BEGIN 1 */
volatile uint8_t usart_dma_tx_over = 1; // 串口DMA发�?�完成标�?

/**
 * @brief 计算字符串长�?,
 * 该函数用于计算给定字符串的长度�?�在计算长度时，考虑到转义字符的情况。如果遇到转义字符，
 * 会根据转义字符后的情况�?�当地增加长度�?�特别地，如果转义字符后是换行符或空字符，只计算�?个字节，
 * 否则，转义字符及其后的字符均计算在长度内�?
 * @param str 指向要计算长度的字符串的指针�?
 * @return 返回字符串的长度�?
 */
uint16_t calculateStringLength(const uint8_t *str)
{
  int length = 0;
  while (*str)
  {
    if (*str == '\\')
    {
      // 遇到转义字符时的特殊处理
      if (*(str + 1) != '\0')
      {
        // 如果转义字符后还有字符，则转义字符占�?2个字�?
        length += 2;
        str++; // 跳过转义字符
      }
      else
      {
        // 如果转义字符后是字符串结束，只计算一个字�?
        length++;
      }
    }
    else
    {
      // 对于普�?�字符，直接增加长度
      length++;
    }
    str++; // 移动到下�?个字�?
  }
  return length;
}

/**
 * @brief USART1 使用DMA发�?�字符串
 *
 * 通过USART1接口使用DMA方式发�?�字符串到指定的缓冲区�??
 *
 * @param pBuf 字符串指�?
 */
void USART1_TX_DMA_String(uint8_t *pBuf)
{
  // 等待前一次DMA发�?�完�?
  //while (!usart_dma_tx_over);
  for (volatile uint16_t i = 0; i < 5000 && (!usart_dma_tx_over); i++);  // 等待前一次DMA发�?�完�?

  // �?0全局标志，发送完成后重新�?1
  usart_dma_tx_over = 0;

  // 使用HAL库函数启动DMA发�??
  HAL_UART_Transmit_DMA(&huart1, pBuf, calculateStringLength(pBuf));
}

/**
 * @brief USART1_Printf 函数
 *
 * 使用 USART1 串口进行打印输出�?
 *
 * @param format 格式化字符串
 * @param ... 可变参数列表
 *
 * @return 成功打印的字符数
 */
int USART1_Printf(const char *format, ...)
{
  va_list arg;
  static char SendBuff[200] = {0};
  int rv;
  while (!usart_dma_tx_over); // 等待前一次DMA发�?�完�?
  //for (volatile uint16_t i = 0; i < 5000 && (!usart_dma_tx_over); i++);  // 等待前一次DMA发�?�完�?

  // 使用可变参数列表进行格式化输�?
  va_start(arg, format);
  rv = vsnprintf((char *)SendBuff, sizeof(SendBuff), (char *)format, arg);
  va_end(arg);

  usart_dma_tx_over = 0;                                   // �?0全局标志，发送完成后重新�?1
  HAL_UART_Transmit_DMA(&huart1, (uint8_t *)SendBuff, rv); // 使用DMA发�?�数�?

  return rv;
}

/**
 * @brief UART传输完成回调函数
 *
 * 当UART外设完成数据传输时，该函数将被调用�??
 *
 * @param huart UART句柄指针
 */
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
  // �?查是否是当前的UART外设
  if (huart->Instance == USART1)
  {
    usart_dma_tx_over = 1;
  }
}
/* USER CODE END 1 */
