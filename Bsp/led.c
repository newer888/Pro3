#include "headfile.h"
#include "led.h"

void LED(uint8_t num)
{
	HAL_GPIO_WritePin(GPIOD , GPIO_PIN_2 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOC , 1<<(7 + num) , GPIO_PIN_RESET );
	if(num == 0)
	{
		HAL_GPIO_WritePin(GPIOD , GPIO_PIN_2 , GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOC , GPIO_PIN_All , GPIO_PIN_SET );
	}
}

void Delay_ms(int num)
{
	num*=1000;
	while (num--)
	{
		
	}
	num =0;
		
		
}

