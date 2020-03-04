#include<stdio.h>
const int MAX=5;

int main()
{
	int var[]={110,120,130,140,150};
	int i, *ptr;

	ptr = var; /* storing address of the first element 
		      of the array in pointer variable */

	for(i=0; i<MAX; i++)
	{
		printf("\nAddress of var[%d] = %p", i, ptr);
		printf("\nValue of var[%d] = %d", i, *ptr);
	
		ptr++; // move to the next location
	}

	return 0;
}
