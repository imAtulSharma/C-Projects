//Series printing using do while loop
#include<stdio.h>

void main()
{    
    int a,b;
    
    printf("Enter initial and final numbers\n");
    scanf("%d %d", &a, &b);
    
    printf("The series is the following...\n");

    do
    {	
        printf("%d\n", a);
	    a++;
    }while(a <= b);
}