/*Program: Binary Search
 *By: Himanshu Shekhar
 *
 * */

#include<stdio.h>
/* arr = array
 * N = Number of elements in the array
 * key = key to search in the array
 */

int BinarySearch(int *arr, int N, int key)
{
	int low = 0, high = N - 1, mid; // mid for middle element of the array
	while(low <= high)
	{
		mid = (low + high)/2;
		if(arr[mid] < key)
		{
			low = mid + 1;
		}
		else if(arr[mid] == key)
		{
			return mid;
		}
		else if(arr[mid] > key)
		{
			high = mid - 1;
		}
	}

	return -1;
}

int main()
{
	int N; // number of elements
	printf("\nEnter the number of elements in the array:");
	scanf("%d", &N);
	int array[N];
	int i; // for iteration
		
	/* Input has to be sorted in non-decreasing order */
	for (i=0; i < N; i++)
	{
		scanf("%d", &array[i]);
	}
	/*Check if the input array is sorted */
	for(i = 1; i<N; i++)
	{
		if(array[i] < array[i - 1])
		{
			printf("Given input is not sorted\n");
			return 0;
		}
	}

	int key;
	printf("\nEnter the key to be searched in the array:");
	scanf("%d", &key);
	/* Calling this functions searched for the key and returns its index. It return -1 if key is not found. */
	int index;
	index = BinarySearch(array, N, key);
	if(index == -1)
	{
		printf("Element not found\n");
	}

	else
	{
		printf("Element is at index : %d\n", index+1);
	}

return 0;
}

