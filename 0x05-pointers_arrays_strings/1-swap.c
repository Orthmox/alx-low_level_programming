#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: is the value of the first integer
 * @b: is the value of the second integer
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
