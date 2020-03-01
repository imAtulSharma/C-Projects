//Programme to check armstrong number
#include<stdio.h>

void main(){
    int number, temp, remainder, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &number);

    temp = number;

    while(temp > 0){
        remainder = temp%10;
        sum += remainder*remainder*remainder;
        temp /= 10;
    }
    (sum == number) ? printf("The number is Armstrong number") : printf("The number is not Armstrong number");
}