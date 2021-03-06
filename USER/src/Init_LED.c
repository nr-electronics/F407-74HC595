#include "init_LED.h"

/* ========================================================================== */
void InitLED(void){
	/* Enable GPIO */
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
		
	/* Configure GPIOD12 as output, meduim speed, no pull-up, pull-down */
	LED_PORT->MODER 		&= 	~GPIO_MODER_MODER12_1;
	LED_PORT->MODER 		|= 	 GPIO_MODER_MODER12_0;
	LED_PORT->OTYPER		&= 	~GPIO_OTYPER_OT_12;
	LED_PORT->PUPDR 		&= 	~GPIO_PUPDR_PUPDR12;
	LED_PORT->OSPEEDR 	|= 	 GPIO_OSPEEDER_OSPEEDR12_0;
	LED_PORT->OSPEEDR 	&= 	~GPIO_OSPEEDER_OSPEEDR12_1;

	/* Configure GPIOD13 as output, meduim speed, no pull-up, pull-down */
	GPIOD->MODER 		&= 	~GPIO_MODER_MODER13_1;
	GPIOD->MODER 		|= 	 GPIO_MODER_MODER13_0;
	GPIOD->OTYPER		&= 	~GPIO_OTYPER_OT_13;
	GPIOD->PUPDR 		&= 	~GPIO_PUPDR_PUPDR13;
	GPIOD->OSPEEDR 	|= 	 GPIO_OSPEEDER_OSPEEDR13_0;
	GPIOD->OSPEEDR 	&= 	~GPIO_OSPEEDER_OSPEEDR13_1;	

	/* Configure GPIOD14 as output, meduim speed, no pull-up, pull-down */
	GPIOD->MODER 		&= 	~GPIO_MODER_MODER14_1;
	GPIOD->MODER 		|= 	 GPIO_MODER_MODER14_0;
	GPIOD->OTYPER		&= 	~GPIO_OTYPER_OT_14;
	GPIOD->PUPDR 		&= 	~GPIO_PUPDR_PUPDR14;
	GPIOD->OSPEEDR 	|= 	 GPIO_OSPEEDER_OSPEEDR14_0;
	GPIOD->OSPEEDR 	&= 	~GPIO_OSPEEDER_OSPEEDR14_1;	
	
	/* Configure GPIOD15 as output, meduim speed, no pull-up, pull-down */
	GPIOD->MODER 		&= 	~GPIO_MODER_MODER15_1;
	GPIOD->MODER 		|= 	 GPIO_MODER_MODER15_0;
	GPIOD->OTYPER		&= 	~GPIO_OTYPER_OT_15;
	GPIOD->PUPDR 		&= 	~GPIO_PUPDR_PUPDR15;
	GPIOD->OSPEEDR 	|= 	 GPIO_OSPEEDER_OSPEEDR15_0;
	GPIOD->OSPEEDR 	&= 	~GPIO_OSPEEDER_OSPEEDR15_1;		
	
		/* Configure GPIOD5 (USB) as output, meduim speed, no pull-up, pull-down */
	GPIOD->MODER 		&= 	~GPIO_MODER_MODER5_1;
	GPIOD->MODER 		|= 	 GPIO_MODER_MODER5_0;
	GPIOD->OTYPER		&= 	~GPIO_OTYPER_OT_5;
	GPIOD->PUPDR 		&= 	~GPIO_PUPDR_PUPDR5;
	GPIOD->OSPEEDR 	|= 	 GPIO_OSPEEDER_OSPEEDR5_0;
	GPIOD->OSPEEDR 	&= 	~GPIO_OSPEEDER_OSPEEDR5_1;		
	
	GPIOPinSet(LED_PORT, LED_USB_PIN);  //Switch off red led on USB
}
