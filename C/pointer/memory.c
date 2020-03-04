//memory management in C

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, *ptr, sum=0;

	printf("\nEnter the number of elements:");
	scanf("%d", &n);

	//dynamic memory allocation using malloc()
	ptr = (int *) malloc(n*sizeof(int));

	if(ptr == NULL)
	{
		printf("\nError!! Memory not allocated\n");
		return 0;
	}
	
	printf("\nEnter the elements of the array:\n");
	for(i=0; i<n;i++)
	{
		scanf("%d", ptr+i);
		sum += *(ptr +i);
	}

	printf("\n The elements of the arrays are:");
	for(i=0; i<n;i++)
	{
		printf(" %d ", ptr[i]); // ptr[i] is same as *(ptr+1)
	}
	printf("\nSum of the array elements: %d ", sum);
	printf("\n");
	free(ptr);
	return 0;
}

