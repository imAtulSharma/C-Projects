//Programme to scan in a file till the word like scanf() does

#include <stdio.h>

void main(){
    
    FILE *ptr;

    char filename[] = "Sample File for Scan.txt";
    ptr = fopen(filename, "r"); //Need to give read permission

    char data[30];
    
    fscanf(ptr, "%s", data); //Scan in the file till blank space or new line character appears
    printf("%s", data);

    fclose(ptr); //closing the file after use (or when no use) is consider a good pratice for security and efficiency
}