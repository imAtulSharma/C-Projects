//Use of strcpy() function
#include<stdio.h>
#include<string.h>

void main()
{ 
    char a[20], b[20];
	
	printf("Enter a string\n");
	gets(a);
	
    strcpy(b, a);
	printf("Your String a is copied into b i.e. %s", b);
}