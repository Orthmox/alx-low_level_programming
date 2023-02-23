#include "main.h"

/**
 * positive_or_negative - Checks if a number is positive, negative or zero
 *
 * Return: Success (0)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
