//Use of string functions
#include<stdio.h>
#include<string.h>

void main()
{
    char a[20], b[10], c[20];

	printf("Enter a\n") , gets(a);
	printf("Enter b\n") , gets(b);

	strcpy( c, strcat(a, b) );
	printf("Your String c concatenation of a and b is %s", c);
}