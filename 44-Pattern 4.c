// To print patter
//     1
//    12
//   123
//  1234
// 12345

#include<stdio.h>

void main(){
    
    int number;

    printf("Please enter a number\n");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        for (int j1 = number; j1 > i; j1--)
        {
             printf(" ");
        }
        for (int j2 = 1; j2 <= i; j2++){
            printf("%d", j2);
        }
        printf("\n");
    }
}