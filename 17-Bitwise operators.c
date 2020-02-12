//Use of Bitwise Operators
#include<stdio.h>

void main()
{    
    int x, y;
     
    printf("Enter two values to do binary bitwise operations\n");
    scanf("%d %d", &x, &y);
    
    printf("x = %d and y = %d\n", x, y);
    printf("OR: x | y = %d | %d = %d\n", x, y, x | y);
    printf("XOR: x ^ y = %d ^ %d = %d\n", x, y, x ^ y);
    printf("AND: x & y = %d & %d = %d\n", x, y, x & y);
    printf("NOT: !x = !%d = %d\n", x, !x); //I have also a doubt on this and on this(~) operator also
    printf("Left-Shift: x << 1 = %d << 1 = %d\n", x, x << 1);
    printf("Right-Shift: x >> 1 = %d >> 1 = %d\n", x, x >> 1);
}