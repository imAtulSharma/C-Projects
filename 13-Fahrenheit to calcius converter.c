//Fahrenheit to calcius converter
#include <stdio.h>

void main(){
    float f, c;
    
    printf("Enter the temperature in Fahrenheit\n");
    scanf("%f", &f);
    
    c = (f-32)*5/9;
    printf("The temperature is %f degree calcius", c);
}
