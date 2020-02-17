//Simple use of Logical operators II
#include<stdio.h>

void main()
{   
    int a,b;
     
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    
    printf("%d && %d = %d\n", a, b, a && b);
    printf("%d || %d = %d\n", a, b, a || b);
    printf("!%d = %d\n", a, !a);
    printf("!%d = %d\n", b, !b);
}