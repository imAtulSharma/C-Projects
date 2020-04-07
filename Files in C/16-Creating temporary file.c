//Programme to create temporary file

#include <stdio.h>

void main(){

    FILE *ptr;
    ptr = tmpfile();

    char data[] = "My name is Atul Sharma";
    fprintf(ptr, "%s", data); //It prints the text in the file
}