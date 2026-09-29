#include "app.h"
#include "main.h"

uint32_t adc_val[1];

void App_Init(void)
{
	HAL_ADC_Start_DMA(&hadc1, adc_val, 1);
}

void App_Run(void)
{

}
