//bubble sort

#include<stdio.h>

void bubbleSort(int arr[], int n)
{
	int i, j, temp;
	int flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			
			if(arr[j] > arr[j+1])
			{
				temp =  arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				flag = 1;
			}
		}
	
	if(!flag)
		break;

	}

	printf("Sorted array:");
	for(i=0; i<n;i++)
		printf("%d ", arr[i]);

}

int main()
{
	int arr[100], i, n ,step, temp;
	printf("\nEnter the number of elements to be sorted:");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		printf("Enter the element no. %d:", i+1);
		scanf("%d", &arr[i]);
	}
	
	bubbleSort(arr, n);

	printf("\n");
	return 0;
}

