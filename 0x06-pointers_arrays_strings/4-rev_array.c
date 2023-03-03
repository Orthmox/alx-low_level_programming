#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses a string
 * @a: is the array of integers
 * @n: is the size of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	int fed;

	while (i < j)
	{
		fed = a[i];
		a[i] = a[j];
		a[j] = fed;
	i++;
	j--;
	}
}
