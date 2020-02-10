//Comparing three numbers using conditional operators
#include<stdio.h>

void main(){
    int number1, number2, number3;
    
    printf("Enter three numbers\n");
    scanf("%d %d %d", &number1, &number2, &number3);

    number1 == number2 ==number3 ? printf("All the number entered are equal") : (number1 > number2 ? (number1 > number3 ? printf("%d is greatest", number1) : printf("%d is greatest", number3)) : (number2 < number3 ? printf("%d is greatest", number3) : printf("%d is greatest", number2)));                                                         
}