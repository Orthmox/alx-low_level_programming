#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory
 * @ptr: is pointer to previously allocated memory
 * @old_size: is the size in bytes of the previously allocated memory
 * @new_size: is the size in bytes of the new memory block
 * Return: anything
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *rmem;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);

	rmem = malloc(new_size);
	if (rmem == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		((char *)rmem)[i] = ((char *)ptr)[i];
	free(ptr);
	return (rmem);
}
