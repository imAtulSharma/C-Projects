//Use of strlen() function
#include<stdio.h>
#include<string.h>

void main()
{       
    char string[20];
	int i = 0;
	
	printf("Enter a string\n");
	gets(string);
	
    printf("Your String is %s", string);
	printf("Length of the string is %d characters", strlen(string));
}
