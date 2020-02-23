//Swapping two numbers using functions(Pass by reference)
#include<stdio.h>

void swap(int *x, int *y)
{	
    printf("Before swapping the value of x and y is %d and %d\n", *x, *y);
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    printf("After swapping in function the value of x and y is %d and %d\n", *x, *y);
}

void main()
{    
    int x, y;
    
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    
    swap(&x, &y);
    
    printf("After returning from function the value of xand y is %d and %d", x, y);
}