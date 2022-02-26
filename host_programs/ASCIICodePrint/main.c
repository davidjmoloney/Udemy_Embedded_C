/*
 * main.c
 *
 *  Created on: 6 Feb 2022
 *      Author: david
 */


#include <stdint.h>
#include <stdio.h>

int main(){

	char code1, code2, code3, code4;

	printf("Enter 4 characters: ");
	fflush(stdout);
	scanf("%c %c %c %c", &code1, &code2, &code3, &code4);

	printf("\nASCII code 1 = %u", code1);
	printf("\nASCII code 2 = %u", code2);
	printf("\nASCII code   3 = %u", code3);
	printf("\nASCII code 4 = %u", code4);

	while(getchar() != "\n"){

	}
	getchar();

}
