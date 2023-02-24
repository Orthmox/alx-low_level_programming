#include "main.h"
/**
 * print_diagonal - prints \ n times
 * @n: number of times to print
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (n > 0)
			{
				_putchar(32);
			}
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
