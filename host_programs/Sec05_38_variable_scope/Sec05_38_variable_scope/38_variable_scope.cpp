#include <stdio.h>

int num = 205;
int nothing; // unnitialized global variable is 0 
			 // These variables are seen in any file under the project


int main()
{
	{
		int num = 34;   // initialising variable here means it is seen as a local variable
						// -- Does not exist outside of parenthesis 
	}

	int gibberish; //unitialised local variabl is unpredictable

	

	printf("number is equal to %d\n", num);
	printf("gibberish number is %d\n", gibberish); //running with this will not work as variable has no value - no initialise
	printf("nothing is equal to %d\n", nothing); //running with this will work and value will be 0
}

