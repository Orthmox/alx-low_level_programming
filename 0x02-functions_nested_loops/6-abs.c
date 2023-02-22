#include "main.h"
/**
 * _abs - calculates the absolute value of an integer
 * @n: interger provided
 * Return: Success(0)
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
