#include <stdio.h>

int main()
{
	char my_var;
	char my_var_next;


	// To use address of variable we use "&"
	// in following line we store variable address in its own address
	// we must use type casting to change address type (pointer: char*) to unsign long
	unsigned long long my_var_address = (unsigned long long)&my_var;
	

	printf("address is %p\n", &my_var);
	printf("stored address is %llx\n", my_var_address);

	//use llx in print to show in hex format - same as pointer
}
