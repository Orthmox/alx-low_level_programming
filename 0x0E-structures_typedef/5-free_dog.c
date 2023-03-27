#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees previously allocated memory for dog
 * @d: is the struct address to be freed
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	dog_t *freed;

	if (d)
	{
		freed = d;
		free(freed->name);
		free(freed->owner);
	}
	free(freed);
}
