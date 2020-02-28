//Using functions to compare strings
#include<stdio.h>
#include<string.h>

void main()
{   
    char a[10], b[10];
	int dif;

	printf("Enter a string\n");
    gets(a);
	printf("Enter another string\n");
    gets(b);


	dif = strcmp(a, b);
        printf("Considering Case...\n");
	
    if(dif == 0)
		printf("a and b are equal according to the ASCII Table.");
	else if(dif > 0)
		printf("a is greater than b according to the ASCII Table.");
	else
		printf("b is greater than a according to the ASCII Table.");
    
    dif = strcmpi(a, b);
    printf("\nIgnoring Case...\n");
	
    if(dif == 0)
		printf("a and b are equal according to the ASCII Table.");
	else if(dif > 0)
		printf("a is greater b according to the ASCII Table.");
	else
		printf("b is greater a according to the ASCII Table.");
}
