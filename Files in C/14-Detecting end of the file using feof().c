//Programme to detect he end of the file by feof() function

#include <stdio.h>

void main(){
    FILE *ptr;

    char filename[] = "Temporary file to get EOF.txt";
    ptr = fopen(filename, "r"); 

    char ch = fgetc(ptr);

    //feof() returns 1 when the stream reached the end of the file otherwise returns 0

    if(feof(ptr) == 1){
        printf("The stream reached the end of the file.");
    }
    
    fclose(ptr);
}