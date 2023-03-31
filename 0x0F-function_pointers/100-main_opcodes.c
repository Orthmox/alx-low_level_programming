#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the entry point
 * @argc: is the argument counter
 * @argv: is the argument vector
 * Return: success(0)
 */
int main(int argc, char *argv[])
{
	int i, byte;
	unsigned char op;
	int (*fn)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
		op = *(unsigned char *)fn;
		printf("%02x", op);

		if (i == byte - 1)
			continue;
		printf(" ");

		fn++;
	}

	printf("\n");

	return (0);
}

