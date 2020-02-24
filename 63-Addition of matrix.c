//Programme to add the two given matrices
#include<stdio.h>

void main(){
    int array1[2][3], array2[2][3], i, j;

    printf("Enter the matrix 1st...\n");
    for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("Enter the a%d%d element of array\n", i, j);
            scanf("%d", &array1[i-1][j-1]);
        }
    }

    printf("Enter the matrix 2nd...\n");
    for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("Enter the a%d%d element of array\n", i, j);
            scanf("%d", &array2[i-1][j-1]);
        }
    }

    printf("The addition of the array is...\n");

    for (i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("%d ", array1[i-1][j-1]+array2[i-1][j-1]);
        }
        printf("\n");
    }
}