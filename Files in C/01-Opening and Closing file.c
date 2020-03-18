//Programme to open and  close a file

#include <stdio.h>

void main(){
    
    FILE *ptr; //define the pointer to the file (stream)

    ptr = fopen("sample file for scan.txt", "r");  //set the pointer or stream to the BoF
    
    fclose(ptr); //closing the file pointer or stream
}