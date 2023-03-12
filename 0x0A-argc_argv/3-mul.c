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
	int i = 1, mul;

	if (argc > 2)
	{
		mul = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", mul);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
