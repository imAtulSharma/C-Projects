//Programme to read the file

#include <stdio.h>

void main(){
    
    FILE *ptr;

    char filename[] = "Sample File for Scan.txt";
    ptr = fopen(filename, "r"); 

    char data[102];
    
    fread(data, 2, 10, ptr); //Read the file
    data[20] = '\0'; //To terminate the character array
    printf("%s", data);
    
    fclose(ptr); //closing the file after use (or when no use) is consider a good pratice for security and efficiency
}