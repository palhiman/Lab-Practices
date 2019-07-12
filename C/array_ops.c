/*
 * Program to perform all basic operations on an array.
 */

#include <stdio.h>

//function declarations

void insert();
void delete();
void traversal();
void merge();

// global variables

int arr[13], i = -1;

// main function

void main()
{
	int choice;
	do
	{
		printf("\n*** MENU ***\n");
		printf("\n1.Insert\n2.Delete\n3.Traverse\n4.Merge\n5.Exit\n");
		printf("*************\n");
		printf("\nEnter you choice(1-5):");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				traversal();
				break;
			case 4:
				merge();
				break;
			default:
				printf("\n Your chose wrong. Try again...\n");
		}
	}
	while(choice != 5);
}

// function definitions

void insert()
{
	if(i <= 11)
	{
		printf("Enter the elements:\n");
		while(i <= 11)
		{
			i++;
			scanf("%d", &arr[i]);
		}
	}
	else
	{
		printf("\nArray is full...");
	}
}

void delete()
{
	int item, j, flag=0, pos;
	printf("\nEnter the element to be deleted:");
	scanf("%d", &item);
	for(j=0; j<=i; j++)
	{
		if(arr[j] == item)
		{
			flag = 1;
			pos = j;
		}
	}
	if(flag)
	{
		for(j=pos; j<=i; j++)
		{
			arr[j] = arr[j+1];
		}
		i--;
	}
	else
	{
		printf("The element is not in the array...\n");
	}
}

void traversal()
{
	int j;
	for(j=0; j<=i; j++)
	{//space separated
		printf("%d - ", arr[j]);
	}
}

void merge()
{
	int p,q,m,n,c;

	int arr1[100], arr2[100], arr3[200];
	puts("Enter the number of element of the first ordered sorted array:");
	scanf("%d", &p);
	puts("Enter the element of the first sorted array:");
	for(m=0; m<=p; m++)
		scanf("%d", &arr1[m]);

	puts("Enter hte number of element of second sorted array:");
	scanf("%d", &q);

	puts("Enter the element of the second sorted array:");
	for(n=0; n<=q; n++)
		scanf("%d", &arr2[n]);

	c = 0; m = 0; n = 0;

	while((m<p) && (n<q))
	{
		if(arr1[m] <= arr2[n])
			arr3[c] = arr1[m++];
		else
			arr3[c] = arr2[n++];
		c++;
	}

	while(m < p)
	{
		arr3[c] = arr1[m];
		c++;
		m++;
	}
	while(n < q)
	{
		arr3[c] = arr2[n];
		c++;
		n++;
	}

	puts("Merged array is ascending order is as follows:");
	for(m=0; m<=c; m++)
		printf("%d _ ", arr3[m]);

}


	


