//Programmme to print factorial of a number
#include<stdio.h>

void main(){
    int number, factorial = 1;

    printf("Please enter a  number\n");
    scanf("%d", &number);
    
    if(number == 0){
        factorial = 1;
    }
    
    else {
        for(int i = 1; i <= number; i++)
        {
            factorial *= i;
        }
    }

    printf("The factorial of %d is %d", number, factorial);
}