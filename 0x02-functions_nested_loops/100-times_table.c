#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: value of times table to be printed
 * Return: void for now
 */

void print_times_table(int n)
{
	int i, k, prod;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (k = 1; k <= n; k++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * k;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0'
				else
					_putchar((prod / 10) + '0');

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
