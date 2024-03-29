#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: is the first integer
 * @max: is the last integer
 * Return: pointer to to the new array
 */
int *array_range(int min, int max)
{
	int i, size;
	int j = 0;
	int *ras;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ras = malloc(sizeof(int) * size);
	if (ras == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ras[j++] = i;
	return (ras);
}
