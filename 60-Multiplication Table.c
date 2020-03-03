//Programme to print multiplication table of any number
#include<stdio.h>

void main(){
    int number;

    printf("Please enter a number\n");
    scanf("%d", &number);

    printf("The multiplication table is following...\n");

    for(int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", number, i, number*i);
    }
} 
