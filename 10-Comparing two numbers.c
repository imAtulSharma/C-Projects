//Compairing two numbers using conditional operators
#include<stdio.h>

void main(){
    int number1, number2;
    
    printf("Enter two numbers\n");
    scanf("%d %d", &number1, &number2);
    
    number1 == number2 ? printf("Here both are equal") : (number1 > number2 ? printf("Here %d is greater", number1) : printf("Here %d is greater", number2));
}