//7String reverse and palindrome using string functions
#include<stdio.h>
#include<string.h>

void main()
{   
    char a[10], b[10];
    int res;
	
    printf("Enter a string\n"),gets(a);
	
    strcpy(b,a);
    strrev(a);
    
    if(strcmpi(a,b)==0)
        printf("string is a Palindrom");
    else
        printf("string is NOT a Palindrom");
}