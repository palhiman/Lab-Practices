#include<iostream>
#include<cmath>

using namespace std;

#define X 1000000

int main()
{
	long N, Q;  // N-number of array elements & Q-number of queries
	long L,R;   // L & R are left and right indices of subarray

	long sum, mean;  // storing sum and mean values

	cin >> N >> Q;  

	long arr[X];
	// take input from the user
	for(int i=0; i<N; i++)
		cin >> arr[i];


	for(int i=0; i<Q; i++)
	{
		cin >> L >> R;
		sum = 0;	//initial sum is zero
		for(int j=L; j<R; j++)
		{
			if(R <= N-1)
				sum += arr[j];
			else
			{
				R = N-1;
				sum += arr[j];
			}
		}
		//mean
		mean = floor(sum/(R-L));
		cout << mean << endl;
	}

return 0;
			
}


