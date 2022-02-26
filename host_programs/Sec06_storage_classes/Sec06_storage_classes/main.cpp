#include <stdio.h>

static void my_count_func(void);
void func_file_1();


static int global_var = 0;      // use static with variable so that it can not be used in other files

int main()
{
    my_count_func();

    my_count_func();

    my_count_func();

    func_file_1();

    printf("global var = %d/n", global_var);
}

static void my_count_func(void) // use static with function so that func can not be called in other files
{
    static int count = 0;       //use static here so that variable will hold in memory but can not be accessed else where

    count++;

    printf("%d\n", count);
}
