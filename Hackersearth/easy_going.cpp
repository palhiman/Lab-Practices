// Problem type : Bubble Sort
// Problem Name : Easy Going
// Date: 03-03-2020

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int T, N, M;
	int A[1000];
	int i,j;
	int max_sum=0, min_sum=0;
	for(; cin>>T; )
	{
		cin >> N >> M;

		for(i=0; i<N; i++)
		{
			cin >> A[i];
		}

		// to calculate the maximum and minimum sum using N-M elements of the array
		//
		int x = N - M;

		for(i=1; i<=N; i++)
		{
			 max_sum += A[i];
		}

		for(i=0; i<N; i++)
		{
			min_sum += A[i];
		}

		int diff = max_sum - min_sum;

		printf("%d ", diff);
	}

printf("\n");

return 0;
}

