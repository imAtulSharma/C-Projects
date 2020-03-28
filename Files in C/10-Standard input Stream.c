//Programme to scan through the standard input stream

#include <stdio.h>

void main(){
    
    char data[30];
    
    fscanf(stdin, "%s", data); //Scan in the stdin stream till blank space or new line character appears
    printf("The scanned data is: %s", data);
}