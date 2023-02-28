#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: is the string
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
