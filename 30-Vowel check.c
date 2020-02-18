//Check vowels using Switch Case
#include<stdio.h>

void main()
{    
    char character;
     
    printf("Enter a character to check it\n");
    scanf("%c", &character);
     
    switch(character)
    {
        case 'a':
        
        case 'e': 
        
        case 'i': 
        
        case 'o': 
        
        case 'u': 
        
        case 'A': 
        
        case 'E': 
        
        case 'I': 
        
        case 'O': 
        
        case 'U': printf("It is a vowel");
            break;
        
        default: printf("It is a consonant");
    }
}