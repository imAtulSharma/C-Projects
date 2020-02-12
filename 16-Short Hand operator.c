//Program to show use of Shorthand operators
#include<stdio.h>

void main()
{    
    int a = 10, b = 10;
    
    printf("Initially value of a is %d and b is %d\n", a, b);
    
    b += a;
    printf("Value of b after b += a is %d\n", b);
    
    b -= a;
    printf("value of b after b -= a is %d\n", b);
    
    b *= a;
    printf("Value of b after b *= a is %d\n", b);
    
    b /= a;
    printf("Value of b after b /= a is %d\n", b);
    
    b %= a;
    printf("Value of b after b %%= a is %d\n", b);
}