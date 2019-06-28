#include<iostream>
using namespace std;

int main()
{
	//Array declaration and initialization
	int arr[3]5[5] = {{5,12,17,9,3},{13,4,8,14,1},{9,6,3,7,15}};

	//iterate over the array
	for(int i=0; i<3; ++i)
	{
		for(int j=0; j<5; ++j)
		{
			cout << arr[i][j] ;
		}
		cout << endl;
	}

return 0;
}
