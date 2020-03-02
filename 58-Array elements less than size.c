//Programme to show array elements less than its size
#include<stdio.h>

void main(){
    int array[5];

    for(int i = 0; i < 3; i++){
        printf("Enter the %d element of array\n", i+1);
        scanf("%d", &array[i]);
    }

    printf("Your array is...\n");

    for (int i = 0; i < 5; i++)
    {
        printf("The %d element of array is %d\n", i+1, array[i]);
    }

    printf("NOTE: Here the extra undefined elemnets of array are initialized with any garbage value.");
}