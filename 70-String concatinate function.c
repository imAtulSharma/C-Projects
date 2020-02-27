//Use of strcat() function
#include<stdio.h>
#include<string.h>

void main()
{
    char a[20], b[20];
	
	printf("Enter a string\n");
	gets(a);
    
    printf("Enter a string\n");
	gets(b);

	printf("Your concatinated String is %s", strcat(a, b));
}