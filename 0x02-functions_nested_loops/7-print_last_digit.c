#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: Success(0)
 */
int print_last_digit(int n)
{
	int lgit;

	lgit = n % 10;
	if (lgit < 0)
		lgit = -lgit;
	_putchar(lgit + '0');
	return (lgit);
}
