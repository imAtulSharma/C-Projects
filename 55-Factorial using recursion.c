//Programmme to print factorial of a number using recursion
#include<stdio.h>

int factorial_of(int n){
    if(n == 0 || n == 1)
        return 1;
    else
    {
        return n*factorial_of(n-1);
    }
    
}

void main(){
    int number;

    printf("Please enter a  number\n");
    scanf("%d", &number);

    printf("The factorial of %d is %d", number, factorial_of(number));
}