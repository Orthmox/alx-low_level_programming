#include "main.h"
/**
 * infinite_add - adds two integers
 * @n1: is the first integer
 * @n2: is the size of the second integer
 * @r: is the result of the computation
 * @size_r: is the size of the r
 * Return: a pointer to a string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	r[size_r] = (*n1 + *n2) + '0';

	return (r);
}
