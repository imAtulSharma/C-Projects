//Calculate area of triangle by Heron's Formula
#include<stdio.h>
#include<math.h>

void main(){
    float a, b, c, s;
    
    printf("Enter the value of 3 sides of the triangle :\n");
    scanf("%f %f %f", &a ,&b ,&c);
    
    s = (a+b+c)/2;
    printf("The value of the area of triangle is %f", sqrt( s*(s-a)*(s-b)*(s-c) ));
}