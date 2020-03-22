//Programme to scan in a file till the character completes same as getc() does

#include <stdio.h>

void main(){
    
    FILE *ptr;

    char filename[] = "Sample File for Scan.txt";
    ptr = fopen(filename, "r"); 

    char ch;
    
    ch = fgetc(ptr); //Scan in the file till new character appears
    printf("%c", ch);
    
    fclose(ptr); //closing the file after use (or when no use) is consider a good pratice for security and efficiency
}