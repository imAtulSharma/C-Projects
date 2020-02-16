//Program to compare numbers using relational operators (I)
#include<stdio.h>
#include<conio.h>
void main()
{    
    int a, b;
    
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    
    printf("(%d == %d) = %d\n", a, b, a == b);
    printf("(%d != %d) = %d\n", a, b, a != b);
    printf("(%d < %d) = %d\n", a, b, a < b);
    printf("(%d > %d) = %d\n", a, b,a > b);
    printf("(%d <= %d) = %d\n", a, b, a <= b);
    printf("(%d >= %d) = %d\n", a, b, a >= b);
}