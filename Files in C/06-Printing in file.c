//Programme to Print text in a file like printf() does

#include <stdio.h>

void main(){
    
    FILE *ptr;

    char filename[] = "Sample File for Print.txt";
    ptr = fopen(filename, "w"); //need to give write permission 

    char data[] = "My name is Atul Sharma";
    fprintf(ptr, "%s", data); //It prints the text 
    
    fclose(ptr); //closing the file after use (or when no use) is consider a good pratice for security and efficiency
}