//Programme to multiply the two given matrices
#include<stdio.h>

void main(){
    int array1[2][3], array2[3][2], i, j, answer[2][2];

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
    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            printf("Enter the a%d%d element of array\n", i, j);
            scanf("%d", &array2[i-1][j-1]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            answer[i][j] = 0;
			for(int k=0 ; k<3 ; k++)
            {
				answer[i][j] += array1[i][k]*array2[k][j];
            }
        }
    }
    

    printf("The multiplies array is...\n");
    for (i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            printf("%d ", answer[i-1][j-1]);
        }
        printf("\n");
    }
}