#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0
 *
 * _putchar - prints a character
 */
void times_table(void)
{
	int i, k, y;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (k = 0; k <= 9; k++)
		{
			_putchar(',');
			_putchar(' ');

			y = i * k;

			if (y <= 9)
			{
				_putchar(' ');
				_putchar(y + '0');
			}
			else if (y > 9)
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

	
