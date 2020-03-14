//Programme to print square upto a number number
#include<stdio.h>

void main(){
    int number, i = 1;

    printf("Please enter a number\n");
    scanf("%d", &number);

    printf("The square table is following...\n");

    for(int i = 1; i <= number; i++)
    {
        printf("%d * %d = %d\n", i, i, i*i);
    }
} 
