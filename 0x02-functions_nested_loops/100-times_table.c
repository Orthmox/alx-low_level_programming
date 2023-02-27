#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: value of times table to be printed
 * Return: void for now
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 1 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				if (k >= 10 && k <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				if (k > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 10) / 10 + '0');
					_putchar((k / 10) % 10 + '0');
					_putchar((k % 10) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
