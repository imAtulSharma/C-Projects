//Simple use of multiple directional array
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

    for (i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("%d ", array[i-1][j-1]);
        }
        printf("\n");
    }
}