//Programme to show a simple use of array
#include<stdio.h>

void main(){
    int array[5];

    for(int i = 0; i < 5; i++){
        printf("Enter the %d element of array\n", i+1);
        scanf("%d", &array[i]);
    }

    printf("Your array is...\n");

    for (int i = 0; i < 5; i++)
    {
        printf("The %d element of array is %d\n", i+1, array[i]);
    }
}