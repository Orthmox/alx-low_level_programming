#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0
 *
 * _putchar - prints a character
 */
void times_table(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (i * k <= 9)
			{
				_putchar(' ');
				_putchar(i * k + '0');
				if (i == 10 || k == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else if (i * k > 9)
			{
				_putchar(i * k / 10 + '0');
				_putchar(i * k % 10 + '0');
				if (i == 10 || k == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
