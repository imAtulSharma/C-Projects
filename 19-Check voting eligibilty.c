//Program to check eligiblity to vote
#include<stdio.h>

void main()
{   
    int age;
    
    printf("Enter your age years\n");
    scanf("%d", &age);

    if(age >= 18)	
        printf("Yes you are eligible to vote.\n");

    else if(age < 0)
        printf("You are not born yet.\n");
        
    else
        printf("No you are not eligible to vote.");
}