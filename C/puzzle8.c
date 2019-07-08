/*
 * Here is a small piece of program(again just 14 lines of program) which counts the number of bits set in a number.
Input	Output
0	0(0000000)
5	2(0000101)
7	3(0000111)
*/

#include <stdio.h>

int CountBits(unsigned int x)
{
	static unsigned int mask[] = {
		0x55555555,
		0x33333333,
		0x0F0F0F0F,
		0X00FF00FF,
		0X0000FFFF,
	};

	int i;
	int shift;	// number of positions to shift to right.
	for(i=0, shift=1; i<5; i++, shift *= 2)
	{
		x = (x & mask[i]) + (( x >> shift) & mask[i]);
	}

return x;
}

int main()
{
	unsigned int a;
	int count;
	printf("Enter number of positions to shift to right:");
	scanf("%d", &a);

	count = CountBits(a);
	printf("%d\n", count);

return 0;
}
