#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int checker(int argc, char *argv[])
{
	int i , j; 
	for (i = 1; i < argc; i++)
		for (j = 0; *argv[i] != '\0' && j < strlen(argv[i]); j++)
			if (!isdigit(argv[i][j]))
				return 1;
	return 0;
}

int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	if (checker(argc, argv))
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		result += atoi(argv[i]);
	printf("%d\n", result);
	return (1);
}
