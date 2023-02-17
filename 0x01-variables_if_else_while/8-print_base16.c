#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: Success(0)
 */
int main(void)
{
	int x;
	char c;

	for (x = 0; x < 10; x++)
		putchar(48 + x);
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
