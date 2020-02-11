//Programme to show Increment and Decrement Operators
#include<stdio.h>

void main(){
    int a = 20, b = 15;
    printf("Initially values of a and b are %d and %d\n", a, b);
    
    b = a++;
    printf("After b = a++ values of a and b are %d and %d\n", a, b);

    b = ++a;
    printf("After b = ++a values of a and b are %d and %d\n", a, b);

    b = a--;
    printf("After b = a-- values of a and b are %d and %d\n", a, b);
    
    b = --a;
    printf("After b = --a values of a and b are %d and %d\n", a, b);
}