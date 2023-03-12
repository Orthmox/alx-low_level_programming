#include <stdio.h>
/**
 * main - is the entry point
 * @argc: is the argument counter
 * @argv: is the argument vector
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}
	(void)argv;
	return (0);
}
