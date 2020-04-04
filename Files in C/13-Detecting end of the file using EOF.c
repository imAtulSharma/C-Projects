//Programme to detect he end of the file by EOF status

#include <stdio.h>

void main(){
    FILE *ptr;

    char filename[] = "Temporary file to get EOF.txt";
    ptr = fopen(filename, "r"); 

    char ch = fgetc(ptr);

    // When the stream is reached at end of file it set status to EOF and set the value to -1

    if(ch == EOF){
        printf("The stream reached the end of the file.");
    }
    
    // if(ch == -1){
    //     printf("The stream reached the end of the file.");
    // }
    
    fclose(ptr);
}