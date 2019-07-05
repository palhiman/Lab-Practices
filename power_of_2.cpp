/*
 * Problem: Check if a given number is a power of 2?
 * Solved: Himanshu Shekhar
 */

#include <iostream>
using namespace std;


bool isPowerOfTwo(int x)
{
	if(x == 0)
		return false;
	else
	{
		while(x % 2 == 0)
			x /= 2;
		return (x==1);
	}
}

int main()
{
	int N;
	bool x;
	cout << "Enter a number:";
	cin >> N;

	x = isPowerOfTwo(N);
	if (x == 1)
		printf("\n%d is power of 2\n",N);
	else
		printf("\n%d is not power of 2\n", N);


return 0;
}

