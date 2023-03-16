#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: is the size of memory required
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	size_t size = b;

	void *t = malloc(size);

	if (t == NULL)
		exit(98);
	return (t);
}
