//Programme to scan in a file till the line completes same as gets() does

#include <stdio.h>

void main(){
    
    FILE *ptr;

    char filename[] = "Sample File for Scan.txt";
    ptr = fopen(filename, "r"); 

    char data[103];
    
    fgets(data, 101, ptr); //Scan in the file till new line character appears
    data[102] = '\0'; //To terminate the character array
    printf("%s", data);
    
    fclose(ptr); //closing the file after use (or when no use) is consider a good pratice for security and efficiency
}