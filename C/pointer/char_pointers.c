#include<stdio.h>
const int MAX=4;

int main()
{
	char *names[] = {"Google", "Amazon", "Facebook", "TCS"};
	int i=0; 

	for(i=0; i<MAX; i++)
		printf("\nValue of names[%d] = %s\n", i, names[i]);

	return 0;
}


