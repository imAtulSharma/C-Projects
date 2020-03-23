//Programme to Print line in a file like puts() does

#include <stdio.h>

void main(){
    
    FILE *ptr;

    char filename[] = "Sample File for Print.txt";
    ptr = fopen(filename, "w"); //need to give write permission 

    char data[] = "My name is Atul Sharma";
    fputs(data, ptr); //It is used to print lines in the file
    
    fclose(ptr); //closing the file after use (or when no use) is consider a good pratice for security and efficiency
}