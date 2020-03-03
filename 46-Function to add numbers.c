//Function to add two numbers
#include<stdio.h>

void add(int x, int y){
    int s = x+y;
    printf("The addition of %d and %d is %d", x, y, s);
}

void main()
{
    int x, y;

    printf("Please enter two numbers\n");
    scanf("%d %d", &x, &y);
    
    add(x, y);
}