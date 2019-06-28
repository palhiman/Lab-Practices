#include<iostream>
using namespace std;

int main()
{
	int N, M; // N-total rows; M-total columns
	
	cin >> N >> M; // taking 2 space separated integers

	int arr[N][M]; // 2D array of NxM.

	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << endl;

	//printing the content of the array
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	//After transposition of the matrix
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
return 0;
}

