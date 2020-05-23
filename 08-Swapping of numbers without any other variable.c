//Swap two numbers without using third varible
#include<stdio.h>

void main(){
    int number1, number2;
    
    printf("Enter the values of two variables\n");
    scanf("%d %d", &number1, &number2);
    
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    
    printf("The swapped numbers are %d and %d.", number1, number2);  
}