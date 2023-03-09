#include "main.h"
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: is the number
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int ans;
	ans = (ans + (n / ans)) / 2;

	if (ans * ans <= n && (ans + 1) * (ans + 1))
		return (ans);
	else
		return (_sqrt_recursion((ans + n / ans) /2));

}
