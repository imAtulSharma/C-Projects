// Swapping of two numbers with the help of third variable
#include<stdio.h>

void main(){
    int a, b;
    
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    
    printf("Before swaping we get a = %d and b = %d\n", a, b);
    
    int temp = a;
    a = b;
    b = temp;
    
    printf("After swaping we get a = %d and b = %d", a, b);
}