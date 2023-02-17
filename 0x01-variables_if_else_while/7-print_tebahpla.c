#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: Success(0)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
