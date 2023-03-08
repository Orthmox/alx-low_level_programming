#include "main.h"
/**
 * _pow_recursion - calculates the value of a number raised to another number
 * @x: is the base
 * @y: is the exponent
 * Return: result of computation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
