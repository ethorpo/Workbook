#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int flag = 1;
	while (flag)
	{
		
		printf("1 - say hello\n");
		printf("2 - say goodbye\n");
		printf("0 - exit\n");
		printf("Enter choice - ");
		
		char buffer [10];
		fgets(buffer, 10, stdin);
		
		int number = atoi (buffer);
		
		switch (number)
		{
			case 1:
			printf("Hello World!\n");
			break;
			case 2:
			printf("Goodbye World!\n");
			break;
			case 0:
			printf("Exiting...\n");
			flag = 0;
			break;
			default:
			printf("*** INVALID INPUT ***\n");
			break;
		}
	}
	
	return 0;
	
}