//Series printing using do for loop
#include<stdio.h>

void main()
{    
    int a,b;
    
    printf("Enter initial and final numbers\n");
    scanf("%d %d", &a, &b);
    
    printf("The series is the following...\n");

    for(;a <= b; a++)
    {	
        printf("%d\n", a);
    }
}