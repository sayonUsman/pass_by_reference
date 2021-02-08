#include<stdio.h>

void swap_value(int *, int *);

int main(int argc, char *argv[])
{
	int number = 10;
	
	int number2 = 20;
	
	printf("number = %d\nnumber2 = %d\n\n", number, number2);
	
	swap_value(&number, &number2);
	
	printf("After swapping\n\nnumber = %d\nnumber2 = %d\n", number, number2);
	
	return 0;
}


void swap_value(int *pointer, int *pointer2)
{
	int temporary;
	
	temporary = *pointer;
	
	*pointer = *pointer2;
	
	*pointer2 = temporary;
}