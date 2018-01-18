#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int flag = 1;
	while (flag)
	{
		char buffer [10];
		printf("How many starts? (0 to quit) ");
		fgets(buffer, 10, stdin);
		int number = atoi(buffer);
		if (!number)
		{
			flag = 0;
			continue;
		}
		for (int i = 0; i < number; ++i)
		{
			for (int j = 0; j < i; ++j)
				printf ("*");
			printf("\n");
		}
	}
	printf("Goodbye!\n");
	
	return 0;
}