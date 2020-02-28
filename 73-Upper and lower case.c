//use of upper and lower case of strings
#include<stdio.h>
#include<string.h>

void main()
{     
    char string[10];
	
	printf("Enter a string\n"), gets(string);
	printf("String in Lowercase is %s\n", strlwr(string));
	printf("String in Uppercase is %s", strupr(string));
}