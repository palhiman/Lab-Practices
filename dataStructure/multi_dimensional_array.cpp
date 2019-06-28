#include<iostream>
using namespace std;

int main()
{
	//Array declaration and initialization
	int arr[3][5][3];
	//take input from the user
	for(int i=0; i<3; ++i)
	{
		for(int j=0; j<5; ++j)
		{
			for(int k=0; k<3; ++k)
			{
				cin >> arr[i][j][k];
			}
		}
	}

	//iterate through the 3-D array
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<5; ++j)
		{
			for(int k=0; k<3; ++k)
			{
				cout << arr[i][j][k] << " " ;
			}
			cout << endl;
		}
		cout << endl;
	}

return 0;
}
