//Programmme to print factorial of a number
#include<stdio.h>

void main(){
    int number, temp = 1;

    printf("Enter a number to check for prime number\n");
    scanf("%d", &number);
    
    if(number == 1){
        printf("1 is neither prime nor composite");
    }
    
    else if (number > 2){
        for (int i = 2; i <= number/2; i++){
            if(number % i == 0){
                temp = 0;
                break;
            }
        }
        (temp == 0) ? printf("The number is not Prime") : printf("The number is Prime");
    }
    
    else {
        printf("Please enter natural number only");
    }
}