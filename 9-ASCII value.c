//To print ASCII value
#include<stdio.h>

void main(){
    char character;
    
    printf("Print a character\n");
    scanf("%c", &character);
    
    printf("The ASCII value of %c is %d", character, character);
}