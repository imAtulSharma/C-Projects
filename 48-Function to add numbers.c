//Function to add two numbers
#include<stdio.h>

int add(int x, int y){
    int s = x+y;
    return s;
}

void main()
{
    int x, y, sum;

    printf("Please enter two numbers\n");
    scanf("%d %d", &x, &y);
    
    sum = add(x, y);
    printf("The addition of %d and %d is %d", x, y, sum);
}