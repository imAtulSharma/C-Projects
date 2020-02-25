//Programme to show initialisation of a simple string
#include<stdio.h>

void main(){
    char name[] = "atul";
    char surname[] = {'s', 'h', 'a', 'r', 'm', 'a', '\0'};

    printf("Your name is %s %s", name, surname);
}