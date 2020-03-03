//Printing transpose of multiple directional matrix
#include<stdio.h>

void main(){
    int array[2][3], i, j;

    for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("Enter the a%d%d element of array\n", i, j);
            scanf("%d", &array[i-1][j-1]);
        }
    }

    printf("Your array is...\n");

    for(j = 1; j <= 3; j++)
    {
        for (i = 1; i <= 2; i++)
        {
            printf("%d ", array[i-1][j-1]);
        }
        printf("\n");
    }
}