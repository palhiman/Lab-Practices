/*
 * Program to calculate the sum of two arrays having same order
 */
#include <stdio.h>
#define M 100


int main()
{
	int m; // order of the array
	/* sum of arrays can only be performed on those arrays
	 * whose orders are same i.e. m=n.
	 */
	int i,j,k;
	int A[M][M], B[M][M], C[M][M];

	printf("\nEnter the order of the arras A and B i.e. m  :");
	scanf("%d", &m);

	printf("\nEnter the values of the array A:");
	for(i=0; i<m; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n---------------------------\n");
	printf("\nDisplaying the array A:-\n");
	for(i=0; i<m; i++)
	{
		printf("\n");
		for(j=0; j<m; j++)
		{
			printf("   %d", A[i][j]);
		}
	}
	printf("\n---------------------------\n");

	printf("\nEnter the values of the array B:");
	for(i=0; i<m; i++)
		for(j=0; j<m; j++)
			scanf("%d", &B[i][j]);

	printf("\n---------------------------\n");
	printf("\nDisplaying the array B:-\n");
	for(i=0; i<m; i++)
	{
		printf("\n");
		for(j=0; j<m; j++)
		{
			printf("   %d", B[i][j]);
		}
	}
	printf("\n---------------------------\n");

	// adding the elements of the two arrays A and B.
	for(i=0; i<m; i++)
	{
		for(j=0; j<m; j++)
			C[i][j] = A[i][j] + B[i][j];
	}
	printf("\n----------------------------\n");
	printf("\nAddition of the two arrays C=A+B:-\n");
	for(i=0; i<m; i++)
	{
		printf("\n");
		for(j=0; j<m; j++)
		{
			printf("   %d", C[i][j]);
		}
	}
	printf("\n-----------------------------\n");

return 0;
}
