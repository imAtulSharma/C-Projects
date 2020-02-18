//Printing number name using switch case
#include<stdio.h>

void main()
{   
    int number;
    
    printf("Enter a number from 0 to 10\n");
    scanf("%d", &number);
    
    switch(number)
    {    
        case 0: printf("It is Zero"); 	
            break;        
        case 1: printf("It is One"); 	
            break;        
        case 2: printf("It is Two"); 	
            break;
        case 3: printf("It is Three"); 
            break;
        case 4: printf("It is Four"); 	
            break;
        case 5: printf("It is Five"); 	
            break;
        case 6: printf("It is Six"); 	
            break;
        case 7: printf("It is Seven"); 
            break;
        case 8: printf("It is Eight"); 
            break;
        case 9: printf("It is Nine"); 	
            break;
        case 10: printf("It is Ten"); 	
            break;
        default: printf("It is not supported enter valid number.");
    }
}