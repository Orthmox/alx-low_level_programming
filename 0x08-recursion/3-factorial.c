#include "main.h"
/**
 * factorial - prints the factorial of a n
 * @n: is the numher
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
