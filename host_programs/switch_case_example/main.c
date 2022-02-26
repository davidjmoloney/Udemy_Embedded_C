/*
 * main.c
 *
 *  Created on: 19 Feb 2022
 *      Author: david
 */

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

int main (void){

	uint8_t shape;
	bool a = false;
	uint32_t h, l;
	double area;

	while(!a){

		printf("What would you like to calculate\n");
		shape = getchar();
		while(getchar() != '\n'){
			//take input until it reads /n
		}

		if((shape == 'r') || (shape == 'c') || (shape == 't')){
		a = true;
		}
		else{
			printf("Incorrect input please try again\n");
		}
	}

	switch (shape){
	case 'r':
		printf("what is lenght and width?\n");
		scanf("%u %u", &l, &h);
		area = h * l;
		printf("Area = %f", area);
		break;
	case 'c':
		printf("what is radius?\n");
		scanf("%u", &h);
		area = (22.0/7)*h*h;
		printf("Area = %f", area);
		break;
	default:
		printf("Fuck Triangles\n");

	}

	getchar();

	while(getchar() != '\n'){
		//take input until it reads /n
	}

}



