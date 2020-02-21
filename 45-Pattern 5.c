// To print pattern
// 54321
//  4321
//   321
//    21
//     1

#include<stdio.h>

void main(){
    
    int number;

    printf("Please enter a number\n");
    scanf("%d", &number);

    for (int i = number; i >= 1; i--)
    {
        for (int j = number; j >= 1; j--)
        {
            if(j <= i)
                printf("%d", j);
            else
                    printf(" ");
        }
        printf("\n");
    }
}