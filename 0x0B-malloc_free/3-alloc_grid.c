#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: is the length of first array
 * @height: is the length of the second string
 * Return: pointer to 2 dimensional array, else NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **mat;

	if (width <= 0 || height <= 0)
		return (NULL);

	mat = malloc(sizeof(int *) * width);
	if (mat == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(sizeof(int) * height);
		for (j = 0; j < width; j++)
		{
			mat[i][j] = 0;
		}
	}
	return (mat);
}
