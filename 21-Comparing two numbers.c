//Program to compare two numbers by help of if-else if-else
#include<stdio.h>

void main()
{   
    int a, b;
    
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    
    if(a > b)
    	printf("a is greater than b.");

    else if(a == b)
        printf("a and b are both equal.");

    else
    	printf("b is greater than a.");
}