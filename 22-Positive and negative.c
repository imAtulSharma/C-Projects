//Program to check  positivity or negativity of a number
#include<stdio.h>

void main()
{   
    int a;
    
    printf("Enter a number\n");
    scanf("%d", &a);

    if(a > 0)
    	printf("The number a is positive.");
    
    else if(a < 0)
    	printf("The number a is negative.");
    
    else
    	printf("The number a is zero.");
    
}
