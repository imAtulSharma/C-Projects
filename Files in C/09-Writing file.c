//Programme to write in a file

#include <stdio.h>

void main(){
    
    FILE *ptr;

    char filename[] = "Sample File for Print.txt";
    ptr = fopen(filename, "w"); //need to give write permission 

    char data[] = "My name is Atul Sharma";
    fwrite(data, 2, 10, ptr); //It is used to write in the file
    
    fclose(ptr); //closing the file after use (or when no use) is consider a good pratice for security and efficiency
}