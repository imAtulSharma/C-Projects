//Simple application of Logical operators
#include<stdio.h>

void main()
{   
    int age;
    
    printf("Enter your age\n");
    scanf("%d", &age);
    
    if(age <= 0)
	    printf("You are not born yet.");
    
    else if(age <= 1)
	    printf("Person with age %d is an infant" ,age);
    
    else if(age <= 10)
	    printf("Person with age %d is a child", age);
    
    else if(age <= 17)
	    printf("Person with age %d is in puberty", age);
    
    else if(age <= 25)
	    printf("Person with age %d is an adult", age);
    
    else if(age <= 65)
	    printf("Person with age %d is in working class", age);
    
    else if(age <= 100)
	    printf("Person with age %d is old person", age);
    
    else
	    printf("Long live! You have outstanding age");
}