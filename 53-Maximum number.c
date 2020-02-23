//Programme to find maximum number among n numbers
#include<stdio.h>

void main(){
    int n, num, max;
    
    printf("Enter how many numbers you want to check\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter a number\n");
        scanf("%d", &num);

        if(i == 0)
            max = num; 
        
        else if(num >= max)
            max = num;
    }
    printf("The maximum values among all you have entered is %d", max);
}