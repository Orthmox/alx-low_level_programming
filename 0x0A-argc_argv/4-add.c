#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - is the entry point
 * @argc: is the argument counter
 * @argv: is the argument vector
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int j;

	if (argc == 1)
		printf("%d\n", sum);
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

