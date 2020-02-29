//Printing reverse and checking the palindrome of the number
#include<stdio.h>

void main(){
    int number, reverse = 0, remainder;

    printf("Enter a number\n");
    scanf("%d", &number);

    int temp = number;

    while(temp > 0){
        remainder = temp % 10;
        reverse = reverse*10 + remainder;
        temp /= 10;
    }

    printf("The reverse of the number is %d\n", reverse);

    (reverse == number) ? printf("The number is palindrome") : printf("The number is not palindrome"); 

}