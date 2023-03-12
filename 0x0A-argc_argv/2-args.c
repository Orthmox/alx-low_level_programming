#include <stdio.h>
/**
 * main - is the entry point
 * @argc: is the argument counter
 * @argv: is the argument vector
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
