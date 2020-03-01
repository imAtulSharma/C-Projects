//Programme to check Leap Year
#include<stdio.h>
#include<math.h>

void main()
{   
    int year;
    
    printf("Enter a year\n");
    scanf("%d", &year);
    
    ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) ? printf("The year is a leap year") : printf("The year is not a leap year");
}