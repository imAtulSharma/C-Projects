//Use of getchar() function
#include<stdio.h>

void main()
{       
    char array[20], character;
	int i = 0;
	
	printf("Enter a string\n");

	while(character!='\n' || i == 19)			
	{	
        character = getchar();
		array[i++] = character;
	}
	
    array[i] = '\0';
	printf("You have entered %s", array);
}

