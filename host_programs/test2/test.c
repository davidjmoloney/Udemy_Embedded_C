/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

#include <stdio.h>

/* global variables */
int g_data1 = 4000;
int g_data2 = 200;


int main(void)
{
	int result = 0;

	result = 65535;

	printf("Result = %d\n",result);
	fflush(stdout);
	scanf("%u",&result);
	printf("Result = %u\n",result);

	//for(;;);
}
