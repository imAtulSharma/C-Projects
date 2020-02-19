// Calculator using Switch Case
#include<stdio.h>

void main()
{    
    char operation;
    int a, b;
    
    printf("Enter two numbers to perform operation\n");
    scanf("%d %d", &a, &b);
    
    getchar();

    printf("Enter operation from +, -, *, /, %% \n");
    scanf("%c", &operation);
	
    switch(operation)
    {    
        case '+': printf("The result is %d", a + b);
            break;
        case '-': printf("The result is %d", a - b);
            break;
        case '*': printf("The result is %d", a * b);
            break;
        case '/': printf("The result is %f", (float)a / b);
            break;
        case '%': printf("The result is %d", a % b);
            break;
        default: printf("Invalid operator");
    }
}