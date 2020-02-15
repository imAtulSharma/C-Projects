//Programme to show all the arithmetic operations
#include<stdio.h>

void main(){
    int a, b;
    
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    printf("The sum of numbers is %d\n", a+b);
    printf("The difference of numbers is %d\n", a-b);
    printf("The multiplication of numbers is %d\n", a*b);
    printf("The division of numbers is %d\n", a/b);
    printf("The remainder of first number when divided by second number is %d", a%b);
}