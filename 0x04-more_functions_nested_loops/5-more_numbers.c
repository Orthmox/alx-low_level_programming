#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 x10
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j / 10;
			l = j % 10;
			if (j >= 10)
				_putchar(k + '0');
			if (j == 0)
				l = 0;
			_putchar(l + '0');
		}
		_putchar('\n');
	}
}
