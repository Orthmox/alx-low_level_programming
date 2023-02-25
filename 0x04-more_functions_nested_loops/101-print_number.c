#include "main.h"
/**
 * print_number - prints an integer
 * @n: is the integer
 */
void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		num = -(num);
		_putchar('-');
	}
	if (n / 10 > 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
