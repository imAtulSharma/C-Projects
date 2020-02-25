//Programme to show initialisation of a simple string
#include<stdio.h>
#include<string.h>

void main(){
    char name[5], surname[7];

    printf("Enter your name\n");
    gets(name);//scanf("%s", &name);

    printf("Enter your surname\n");
    gets(surname);//scanf("%s", &surname);

    printf("Your name is ");
    puts(name);
    printf("And your surname is ");
    puts(surname);
}