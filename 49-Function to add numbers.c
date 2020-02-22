//Function to add two numbers
#include<stdio.h>

int add(int x, int y);

void main()
{
    int x, y;

    printf("Please enter two numbers\n");
    scanf("%d %d", &x, &y);
    
    printf("The addition of %d and %d is %d", x, y, add(x, y));
}

int add(int x, int y)
{
    return x+y;
}