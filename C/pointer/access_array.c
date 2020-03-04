#include<stdio.h>

const int MAX = 10; /* global declaration. value of a const 
		      variable cannot be changed
		      throughout the execution of program. */

int main()
{
	int var[] = {11,22,33,44,55,66,77,88,99,110};
	int i=0;

	int *ptr[MAX]; /* stores the address of each 
			  array elements and ptr is an 
			  array of int pointers. */


	for(i=0; i<MAX; i++)
		ptr[i] = &var[i]; /* Assign the address of 
				     each of the array elments
				     to the ptr array */
/* ptr[i] stores the address of the element var[i]
 * Hence *ptr[i] returns the value of the element
 *  stored at location ptr[i].
 */

	for(i=0; i<MAX; i++)
		printf("\nValue of var[%d]= %i\n\n", i, *(ptr[i]));


return 0;
}
