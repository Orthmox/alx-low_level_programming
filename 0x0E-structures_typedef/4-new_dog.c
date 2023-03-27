#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - Finds the length of a string.
 * @str: is the string
 *
 * Return: length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * _strcopy - Copies a string
 * @dest: is the destination string
 * @src: is the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - cr,eates a new struct dog variable
 * @name: is dog name
 * @age: is dog age
 * @owner: is dog owner
 * Return: pointer to struct address
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	new->name = malloc(_strlen(name) + 1);
	new->owner = malloc(_strlen(owner) + 1);

	if (new == NULL || new->name == NULL || new->owner == NULL)
	{
		if (new != NULL)
		{
			free(new->owner);
			free(new->name);
			free(new);
		}
		return (NULL);
	}

	_strcopy(new->name, name);
	_strcopy(new->owner, owner);
	new->age = age;

	return (new);
}
