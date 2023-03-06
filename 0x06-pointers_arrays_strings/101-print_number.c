#include "main.h"
/**
 * print_number - prints an integer
 * @n: is the integer
 */
void print_number(int n)
{
	 unsigned int num = n;

	if (n < 0)
	{
		num = -(num);
		_putchar('-');
	}
	if (num == 0)
	{
		_putchar('0');
	}
	if (num > 0 && num < 10)
	{
		_putchar(num + '0');
	}
	if (num / 10 > 0)
	{
		print_number(num / 10);

		_putchar(num % 10 + '0');
	}
}

