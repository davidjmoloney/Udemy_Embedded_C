

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


/* global variables */
int g_data1 = -4000;
int g_data2 = 200;
int result = 0;

int main(void)
{
	result = g_data1 + g_data2;

	printf("Result = %d\n",result);

	for(;;);
}
