#include<stdio.h>
#include "HelloWorld.h"

int main()
{
	iMyGlobalVar = 30;
	printf("%d\n", iMyGlobalVar);
	printHelloWorld();
	printf("%d\n", iMyGlobalVar);

	return 0;
}
