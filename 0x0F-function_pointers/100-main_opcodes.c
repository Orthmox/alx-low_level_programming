#include <stdio.h>
#include <stdlib.h>
/**
 * oprint - prints opcodes of main
 * @p: is a pointer to a byte
 * @numb: is the number of bytes
 * Return: nothing
 */
void oprint(unsigned char *p, int numb)
{
	int i;

	for (i = 0; i < numb; i++)
	{
		printf("%02x ", *(p + i));
	}
	printf("\n");
}
/**
 * main - is the entry point
 * @argc: is the argument counter
 * @argv: is the argument vector
 * Return: success(0)
 */
int main(int argc, char *argv[])
{
	int byte;
	unsigned char *start;
	unsigned char *stop;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);
	start = (unsigned char *)main;
	stop = (unsigned char *)(main + byte);

	oprint(start, (stop - start));

	return (0);
}

