#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the entry point
 * @argc: is the argument counter
 * @argv: is the argument vector
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = atoi(argv[i]) * atoi(argv[i + 1]);
			printf("%d\n", sum);
			return (0);
		}
	}
	else
		printf("Error\n");
	return (1);
}
