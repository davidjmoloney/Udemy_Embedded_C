/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{

	//Initialise clock control register for AHB - Need to write values to bit 21 at this address
    uint32_t *pClkCtrlReg = (uint32_t*)0x40021014;

    //Initialise mode register and output data register for GPIO E
    uint32_t *pPEModeReg = (uint32_t*)0x48001000;
    uint32_t *pPEOutDataReg = (uint32_t*)0x48001014;
    uint32_t *pPDModeReg = (uint32_t*)0x48000C00;
    uint32_t *pPDInDataReg = (uint32_t*)0x48000C10;



    // We must enable GPIOE clock by writing 1 to bit 21
    *pClkCtrlReg =  *pClkCtrlReg | (3 << 20);

    // Set port 15 to be output by setting 01 at mode register bits 31and30
    *pPEModeReg = *pPEModeReg & !(1 << 31);
    *pPEModeReg = *pPEModeReg | (1 << 30);


    //Set pin 14 on port D to read input
    *pPDModeReg = *pPDModeReg & !(3 << 28);







    while(1){

    	if(*pPDInDataReg & (1 << 14)){
    		*pPEOutDataReg = *pPEOutDataReg | (1 << 15);	//If pin D:14 is high, then LED (E:15) turns on
    	}
    	else{
    		*pPEOutDataReg = *pPEOutDataReg & !(1 << 15);
    	}

    }

}
