//To calculate Simple Interest
#include<stdio.h>

void main(){
    float p, t, r;
    
    printf("Enter the principle amount and time(in years) and also rate of interst\n");
    scanf("%f %f %f", &p, &t, &r);
    
    printf("The simple interest is %f", p*t*r/100);
}