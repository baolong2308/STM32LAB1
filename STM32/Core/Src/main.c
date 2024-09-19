/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
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
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  void display7SEG_1(int num){
    	switch (num){
    	case 0:
    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, RESET);


    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, SET);

    		break;

    	case 1:

    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

    		break;

    	case 2:

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

    		break;

    	case 3:

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

    		break;

    	case 4:

    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

    		break;

    	case 5:

    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

    		break;

    	case 6:

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, SET);

    		break;

    	case 7:

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

    		break;

    	case 8:

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

    		break;

    	case 9:

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

    		break;

    	default:

    		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, SET);

    		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, SET);

    		break;
    	}

    }
  void display7SEG_2(int num){
    	switch (num){

    	case 0:

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, SET);

    		break;

    	case 1:

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

    		break;

    	case 2:

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

    		break;

    	case 3:

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

    		break;

    	case 4:

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

    		break;

    	case 5:

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

    		break;

    	case 6:

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, SET);

    		break;

    	case 7:

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

    		break;

    	case 8:

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

    		break;

    	case 9:

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

    		break;

    	default:

    		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);

    		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, SET);

    		break;
    	}

    }

  int state = 0;// trạng thái
  int count = 0;// đếm thời gian
  int state_led = 0;// tín hiệu đổi đèn
  int RED_TIME = 5;
  int GREEN_TIME = 3;
  int YELLOW_TIME = 2;

  while (1)
  {

    /* USER CODE END WHILE */
	  switch(state)

	  {
	  case 0:
		  // Hướng 1 và 3 xanh, hướng 2 và 4 đỏ
	  	  if (state_led == 0 && count >= GREEN_TIME){

	  	        state_led = 1;
	  	        count = 0;

	  	  }else if (state_led == 1 && count >= YELLOW_TIME){
	  	      state_led = 2;
	  	       count = 0;
	  	  }else if (state_led == 2 && count >= RED_TIME){
	  		  state_led = 0;
	  		  count = 0;
	  	  }
	  	  if(state_led == 0 && count < GREEN_TIME){
	  	      //hướng 1-3
	  		  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET);   //đèn xanh bật
	  	      HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_SET);
	  	      HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET); //đèn đỏ tắt
	  	      HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_RESET);
	  	      //hướng 2-4
	  	      HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_SET);   //đèn đỏ bật
	  	      HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_SET);
	  	      display7SEG_1(GREEN_TIME-count-1);	//thời gian đèn xanh
	  	      display7SEG_2(RED_TIME-count-1); // thời gian đèn đỏ
	  	      }
	  	  else if (state_led == 1 && count < YELLOW_TIME)
	  	  {
	  		  //hướng 1-3
	  	      HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET);   //đèn vàng bật
	  	      HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_SET);
	  	      HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET); //đèn xanh tắt
	  	      HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_RESET);
	  	      display7SEG_1(YELLOW_TIME-count-1);	//thời gian đèn vàng
	  	      display7SEG_2(RED_TIME-GREEN_TIME-count-1); //thời gian đèn đỏ
	  	      }
	  	  else if (state_led == 2 && count < RED_TIME)
	  	  {
	  		  //hướng 1-3
	  	      HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET); //đèn vàng tắt
	  	      HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_RESET);
	  	      HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);   //đèn đỏ bật
	  	      HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_SET);
	  	      //hướng 2-4
	  	      HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_SET);   // Đèn xanh  bật
	  	      HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_SET);
	  	      HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET);   //đèn đỏ tắt
	  	      HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_RESET);
	  	      display7SEG_1(RED_TIME-count-1);//	thời gian đèn đỏ
	  	      display7SEG_2(GREEN_TIME-count-1);	//thời gian đèn xanh
	  	      //đổi case
	  	      state = 1;
	  	      count = 0;
	  	      state_led = 0;
	  	  }
	  	  break;
	  	  case 1: // Hướng 2 và 4 xanh, hướng 1 và 3 đỏ
	  		  if (state_led == 0 && count >= GREEN_TIME){
	  			  state_led = 1;
	  			  count = 0;
	  		  }else if (state_led == 1 && count >= YELLOW_TIME){
	  			  state_led = 2;
	  			  count = 0;
	  		  }else if (state_led == 2 && count >= RED_TIME){
	  			  state_led = 0;
	  			  count = 0;
	  		  }
	  		  // Đèn đỏ tắt và đèn xanh bật cho hướng 2 và 4
	  		  if(state_led == 0 && count < GREEN_TIME){
	  			  //hướng 2-4
	  			  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET); // Đèn đỏ tắt
	  			  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_SET);   // Đèn xanh bật
	  			  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_SET);
	  			  //hướng 1-3
	  			  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);   // Đèn đỏ bật
	  			  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_SET);
	  			  display7SEG_1(RED_TIME-count-1);	// thời gian đèn đỏ
	  			  display7SEG_2(GREEN_TIME-count-1);	//thời gian đèn xanh
	  			  }
	  		  else if (state_led == 1 && count < YELLOW_TIME){

	  			  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET); // Đèn xanh tắt

	  			  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_SET);   // Đèn vàng bật
	  			  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_SET);
	  			  display7SEG_2(YELLOW_TIME-count-1);	//thời gian đèn vàng
	  			  display7SEG_1(RED_TIME-GREEN_TIME-count-1);	// thời gian đèn đỏ

	  		  }
	  		  else if (state_led == 2 && count < RED_TIME) //đổi case
	  		  {
	  			  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET); // Đèn vàng tắt
	  			  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_SET); // Đèn đỏ bật
	  			  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_SET);
	  			  //hướng 1-3
	  			  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET);   //đèn xanh bật
	  			  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_SET);
	  			  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);   //đèn đỏ tắt
	  			  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_RESET);
	  			  display7SEG_1(GREEN_TIME-count-1);
	  			  display7SEG_2(RED_TIME-count-1);
	  			  //đổi case
	  			  state = 0;
	  			  count = 0;
	  			  state_led = 0;
	  		  }
	  		  break;
	  }
	  count++;
	  HAL_Delay(1000);
    /* USER CODE BEGIN 3 */
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

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
                          |LED_5_Pin|LED_6_Pin|LED_7_Pin|LED_8_Pin
                          |LED_9_Pin|LED_10_Pin|LED_11_Pin|LED_12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, SEG0_1_Pin|SEG0_2_Pin|SEG0_3_Pin|SEG1_4_Pin
                          |SEG1_5_Pin|SEG1_6_Pin|SEG1_7_Pin|SEG0_4_Pin
                          |SEG0_5_Pin|SEG0_6_Pin|SEG0_7_Pin|SEG1_1_Pin
                          |SEG1_2_Pin|SEG1_3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_1_Pin LED_2_Pin LED_3_Pin LED_4_Pin
                           LED_5_Pin LED_6_Pin LED_7_Pin LED_8_Pin
                           LED_9_Pin LED_10_Pin LED_11_Pin LED_12_Pin */
  GPIO_InitStruct.Pin = LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
                          |LED_5_Pin|LED_6_Pin|LED_7_Pin|LED_8_Pin
                          |LED_9_Pin|LED_10_Pin|LED_11_Pin|LED_12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : SEG0_1_Pin SEG0_2_Pin SEG0_3_Pin SEG1_4_Pin
                           SEG1_5_Pin SEG1_6_Pin SEG1_7_Pin SEG0_4_Pin
                           SEG0_5_Pin SEG0_6_Pin SEG0_7_Pin SEG1_1_Pin
                           SEG1_2_Pin SEG1_3_Pin */
  GPIO_InitStruct.Pin = SEG0_1_Pin|SEG0_2_Pin|SEG0_3_Pin|SEG1_4_Pin
                          |SEG1_5_Pin|SEG1_6_Pin|SEG1_7_Pin|SEG0_4_Pin
                          |SEG0_5_Pin|SEG0_6_Pin|SEG0_7_Pin|SEG1_1_Pin
                          |SEG1_2_Pin|SEG1_3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

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
  while (1)
  {
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

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
