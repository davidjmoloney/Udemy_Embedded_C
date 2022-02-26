

//This code will only work when the static keyword is removed from function definition and varibale definition


extern void my_count_func(void);

extern int global_var;

void func_file_1()
{
	my_count_func();

	global_var = 200;
}