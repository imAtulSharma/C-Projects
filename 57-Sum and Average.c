//Programme to show a sum and averagef of array
#include<stdio.h>

void main(){
    int array[5], sum =0, average;

    for(int i = 0; i < 5; i++){
        printf("Enter the %d element of array\n", i+1);
        scanf("%d", &array[i]);
    }

    printf("Your array is...\n");

    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }

    average = sum/5;
    printf("The sum is %d and the average is %d", sum, average);
}