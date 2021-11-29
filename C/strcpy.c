/* Strcpy(s,t) : copies string t to the string s.
 * without using stdlibrary
 */

#include<stdio.h>

//strcpy: array subscript version
void astrcpy(char *s, char *t)
{
    int i=0;
    while((s[i] = t[i]) != '\0')
        i++;
}

// strcpy: pointer version
void pstrcpy(char *s, char *t)
{
    while((*s = *t) != '\0')
    {
        s++;
        t++;
    }
}

// strcpy : abbreviated pointer version 1
void pstrcpy1(char *s, char *t){
    while((*s++ = *t++) != '\0')
        ;
}

// strcpy : abbreviated pointer version 2
void pstrcpy2(char *s, char *t)
{
    while(*s++ = *t++)
        ;
}

int main()
{
    char x[] = "himanshu";
    char y[] = "shekhar";
    char z[] = "pal";
    char a[] = "shadow03";
    char b[] = "fyyqg8";

    astrcpy(x,y); // using array version of strcpy
    printf("%s\n",x);

    pstrcpy(x,z); // using pointer version of strcpy
    printf("%s\n",x);
    
    pstrcpy1(x,a);
    printf("%s\n", x);

    pstrcpy2(x,b);
    printf("%s\n", x);
    

    return 0;
}
