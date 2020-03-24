//Programme to Print charactr in a file like putc() does

#include <stdio.h>

void main(){
    
    FILE *ptr;

    char filename[] = "Sample File for Print.txt";
    ptr = fopen(filename, "w"); //need to give write permission 

    fputc('z', ptr); //It is used to print character in the file
    
    fclose(ptr); //closing the file after use (or when no use) is consider a good pratice for security and efficiency
}