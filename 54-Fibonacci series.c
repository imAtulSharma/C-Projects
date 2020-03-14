//Programmme to print fibonacci series upto given number of times
#include<stdio.h>

void main(){
    int number, first = 0, second = 0, sum = 0, i = 1;

    printf("Please enter a number of elements in series\n");
    scanf("%d", &number);

    printf("The fibonacci series is as follows...\n");

    while(i <= number){
        if (i == 2)
            first = 1;
        
        sum = first + second;
        printf("%d ", sum);
        second = first;
        first = sum;
        i++;
    }
}