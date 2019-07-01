/*
 * This program illustrates the use of some of string functions such as strlen(), strcmp(), strcat(), strcpy(), etc.
 */

#include <stdio.h>
#include <string.h>  // this header must be include when using these functions.

int main()
{
	char str1[] = "Himanshu";
	char str2[] = "Chhavi";
	char str3[50];
	char *cpt;
	int len1, len2, rc;

	
	// Find the length of the strings
	len1 = strlen(str1);
	len2 = strlen(str2);
	printf("%s : %d\n", str1, len1);
	printf("%s : %d\n", str2, len2);
	

	// Copy st1 to st1 to st3 and print both
	printf("\n Copying st2 to str3..\n");
	if((cpt = strcpy(str3, str2)) == NULL)
	{
		printf("Error on strcpy");
		return 1;
	}
	printf("String 2 :%s\n", str2);
	printf("Copied string i.e. String 3 : %s\n", str3);

	// Clear str3 
	memset(str3, '\0', 20);
	printf("\n String 3 is cleared.--- %s", str3);


	/* copy first 3 characters of str1 to str3 */
	printf("Copying the first two characters of str1 and to str3....\n");
	strncpy(str3, str1, 3);
	printf("String3 : %s\n", str3);
	printf("String1 : %s\n", str1);

	/* compare all characters of str and str3*/
	printf("\nComparing all characters of str1 and str3...\n");
	rc = strcmp(str1, str3);
	if(rc==0)
		printf("Str1 equals str3\n");
	else if(rc>0)
		printf("Str1 is greater\n");
	else
		printf("Str3 is smaller\n");

	/* Compare the first 3 characters of str1 and str3*/
	printf("\nComparing the first three characters of str1 and str3..\n");
	if((rc = strncmp(str1, str3, 2)) == 0)
		printf("First three characters of str1 and str3 are matched..\n");
	else
		printf("are not matched\n");


return 0;
}

