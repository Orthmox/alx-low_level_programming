#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: is the size of memory required
 */
void *malloc_checked(unsigned int b)
{
	void *t = malloc(sizeof(unsigned int) * b);
	if (t == NULL)
		exit(98);
	return (t);
}
