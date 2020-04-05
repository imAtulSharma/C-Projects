//Programme to accept and process command line arguments

#include <stdio.h>

void main(int argc, char *argv[]){
    printf("%d inputs are given through command line arguments.\n", argc);
    printf("%s file is running curretly.\n", argv[0]);
    printf("Your name is %s and you are studyiung in class %sth", argv[1], argv[2]);
}