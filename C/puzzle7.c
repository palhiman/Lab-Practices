/*
 *
 * The following C program segfaults of IA-64, but works fine on IA-32.
  int main()
  {
      int* p;
      p = (int*)malloc(sizeof(int));
      *p = 10;
      return 0;
  }
Why does it happen so?
 *
 */




#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* p;
	p = (int*)malloc(sizeof(int));
	*p = 10;

return 0;
}
