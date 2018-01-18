#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char first_name[50];
	char last_name[50];
	char full_name[50];
	
printf("Please enter your first name: ");
fgets(first_name, 50, stdin);

int len1 = strlen(first_name);
if (len1 > 0 && first_name[len1 - 1] == '\n')
	first_name[len1 - 1] = '\0';

if (strcmp(first_name, "John") == 0)
	printf("Hey! Another John\n");
else
	printf("Oh well\n");

printf("Please enter your last name: ");
fgets(last_name, 50, stdin);

int len2 = strlen(last_name);
if (len2 > 0 && last_name[len2 - 1] == '\n')
	last_name[len2 - 1] = '\0';

if (strcmp(last_name, "Thorpe") == 0)
	printf("Hey! Another Thorpe\n");
else
	printf("Oh well\n");

full_name[0] = '\0';
strcat(full_name, first_name);
strcat(full_name, " ");
strcat(full_name, last_name);

printf("Your full name is %s which is %d characters long\n", full_name, strlen(full_name));

return 0;
}