#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: is the number of elements
 * @size: is the byte size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		a[i] = 0;
	}
	return (a);
}

