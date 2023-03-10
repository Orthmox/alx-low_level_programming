#include "main.h"
/**
 * prime - checks for the prime factors of a number
 * @n: is the number
 * @i: is the iteration starting at 3
 * Return: 1 if prime factor found, 0 if no prime factor found
 */
int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	if (n == 2)
		return (1);
	if (n % i == 0 && i != n)
		return (0);
	if (i < n)
		return (prime(n, i + 2));
	return (1);
}
/**
 * is_prime_number - checks if a number is prime
 * @n: is the number
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	return (prime(n, 3));
}
