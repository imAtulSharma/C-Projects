//Use of sizeof() operator or function
#include<stdio.h>

void main()
{   
    int x = 123;
    char y = 'A';
    float z = 123.45;
    double p = 123.4567;
    long q = 123456;
    
    printf("The size of %d is %d\n", x, sizeof(x));
    printf("The size of %c is %d\n", y, sizeof(y));
    printf("The size of %f is %d\n", z, sizeof(z));
    printf("The size of %f is %d\n", p, sizeof(p));
    printf("The size of %d is %d\n", q, sizeof(q));
}