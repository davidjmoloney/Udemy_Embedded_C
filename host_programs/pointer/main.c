/*
 * main.c
 *
 *  Created on: 12 Feb 2022
 *      Author: david
 */

#include <stdio.h>


int main(){


	unsigned int num = 0xffff; // initialise integer to be 2^16 - 1
	printf("number is %d\n", num);

	unsigned char* pnum;
	pnum = (unsigned char*)&num;	// create a pointer for the original int location but we have declare that it is instead an unsigned char
	printf("pointer is %p\n", pnum);

	printf("char number is %d\n", *pnum); // application prints data at pointer location - shows up as 255 as it only read 8bits (char length) of information

	*pnum = 0;	// set these 8bits of data to 0

	printf("int num is %d\n", num);	//show that data stored in the original memory location has now changed (reads as 65280 (65535 - 255))


	getchar();





}

