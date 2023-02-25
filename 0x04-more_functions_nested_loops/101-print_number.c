#include "main.h"
/**
 * print_number - prints an integer
 * @n: is the integer
 */
void print_number(int n)
{
	unsigned int = n;

	if (n < 0)
	{
		n = -(n);
		_putchar('-');
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
