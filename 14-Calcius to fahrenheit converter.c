//Calcius to fahrenheit converter
#include <stdio.h>

void main(){
    float f, c;
    
    printf("Enter the temperature in Calcius\n");
    scanf("%f", &c);
    
    f = c*9/5+32;
    printf("The temperature is %f degree fahrenheit", f);
}
