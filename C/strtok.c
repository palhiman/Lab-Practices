/*
 * strtok() function is used to find the next token in a string. The token is specified by 
 * a list of possible delimiters. 
 * The following example reads a line of text from a file and determines a word using the 
 * delimiters, space, tab and new line. Each word is then displayed on a separate line.
 */

#include <stdio.h>
#include <string.h>

int main()
{
	FILE *in;
	char line[80];
	char *delimiters ="\t\n";
	char *token;

	if((in = fopen("/home/shadow03/H-drive/myProject/Lab-Practices/C/xyz.txt", "r")) == NULL)
	{
		puts("Unable to open the input file...");
		return 0;
	}

	/* Read each line one at a time*/
	while(!feof(in))
	{
		fgets(line, 80, in);
		if(!feof(in))
		{
			/* Break the line up into words*/
			token = strtok(line, delimiters);
			while(token != NULL)
			{
				puts(token);
				token = strtok(NULL, delimiters);
			}
		}
	}

	fclose(in);
return 0;
}
