#include "dog.h"
#include <stdlib.h>
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
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
