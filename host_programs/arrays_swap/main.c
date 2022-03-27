

/*
 * Code designed to take two arrays of integers from user and swap contents between the arrays
 */



#include<stdio.h>
#include<stdint.h>


//Prototyps for functions defined at the end of the program code
void wait_for_user_input(void);
void array_input(int32_t *pArray, uint32_t nitem);
void display_array(int32_t *pArray,uint32_t nitem);
void swap_arrays(int32_t *array1, int32_t *array2, uint32_t nitem1, uint32_t nitem2);

int main(void)
{
    int32_t nItem1, nItem2;		//length of each array
    printf("Array swapping program\n");
    printf("Enter no of elements of Array-1 and Array-2:");
    scanf("%d %d",&nItem1,&nItem2);

    if((nItem1 < 0) || (nItem2 < 0))
    {
    	printf("Number of elements cannot be negative\n");
    	wait_for_user_input();
    	return 0;		//Finish code if one of the two arrays has been given a negative size
    }


    //Define the arrays
    int32_t array1[nItem1];
    int32_t array2[nItem2];


    //Take input from user
    array_input(array1, nItem1);

    array_input(array2, nItem2);


    //Display arrays
	printf("Contents of arrays before swap \n");

	display_array(array1,nItem1);

	printf("\n");

	display_array(array2,nItem2);

	printf("\n");


	//Swap Contents
	swap_arrays(array1,array2,nItem1,nItem2);


	//Display again
	printf("Contents of arrays after swap\n");

	display_array(array1,nItem1);

	printf("\n");

	display_array(array2,nItem2);

	printf("\n");

	//Finish
	wait_for_user_input();

	return 0;


}

//We pass array to the function by using the pointer to its first element
void array_input(int32_t *pArray, uint32_t nitem){
	 for(uint32_t i = 0; i < nitem ; i++ ){
		 	 printf("Enter %d element of array1:",i);
		 	 scanf("%d",&pArray[i]);	//here we are effectively dereferencing pointer using the '[]' syntax.
		 	 	 	 	 	 	 	 	//We are then writing  to the address of this variable with '&'.
		 	 //scanf("%d",pArray + i);  <-- This line will give the exact same result - here we just use pointer
	 }

}

void display_array(int32_t *pArray,uint32_t nitem){

	for(uint32_t i = 0 ; i < nitem ; i++)
	{
		printf("%4d  ",pArray[i]);
	}
}


void swap_arrays(int32_t *array1, int32_t *array2, uint32_t nitem1, uint32_t nitem2){

   uint32_t len = nitem1 < nitem2 ? nitem1 : nitem2;

   for(uint32_t i = 0 ; i < len ; i++)
   {
	   int32_t temp = array1[i];
	   array1[i] = array2[i];
	   array2[i] = temp;
   }

}


void wait_for_user_input(void){

	printf("Press enter key to exit this application");

    while(getchar() != '\n')
    {
    	//just read the input buffer and do nothing
    }
    getchar();

}
