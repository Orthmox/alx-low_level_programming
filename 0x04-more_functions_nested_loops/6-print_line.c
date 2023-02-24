#include "main.h"
/**
 * print_line - prints _ n times
 * @n: number of times to print
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
			break;
	}
	_putchar('\n');
}
