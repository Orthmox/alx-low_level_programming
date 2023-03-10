#include "main.h"
/**
 * sqroot - finds the square root of a number
 * @n: is the number
 * @g: is the guess answer started from 1
 * Return: g if square found, -1 if no square root found
 */
int sqroot(int n, int g)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n / g == g && n % g == 0)
		return (g);
	else if (g < n)
		return (sqroot(n, g + 1));
	return (-1);
}
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: is the number
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
