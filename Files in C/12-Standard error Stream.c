//Programme to print error through the standard error stream

#include <stdio.h>

void main(){
    
    char data[] = "ERROR: This is the error printed here.";
    
    fprintf(stderr, "%s", data); //Print in the stderr stream
}