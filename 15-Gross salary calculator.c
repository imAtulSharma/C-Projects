//Program to calculate gross salary
#include<stdio.h>

void main()
{   
    int basic; 
    float gross, d, t;
    
    printf("Enter your salary\n");
    scanf("%d", &basic);

    // t = 10/100*basic; These are wrong I don't know why ???
    // d = 12/100*basic;

    t = 0.1*basic;
    d = 0.12*basic;
    gross = basic + t + d;
    
    printf("The Gross salary is %f", gross);
}