//To print square using function
#include<stdio.h>

int square_of(int);
void main()
{    
    int number;
    
    printf("Enter a number\n");
    scanf("%d",&number);
    
    printf("The square of %d is %d", number, square_of(number));
}

int square_of(int n)
{
    return n*n;
}