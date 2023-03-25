#include "dog.h"
/**
 * init_dog - initializes a variable of struct dog
 * @d: is the variable name
 * @name: is the dog name
 * @age: is dog age
 * @owner: is owner name
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *var;

	if (d)
		var = d;
	var->name = name;
	var->age = age;
	var->owner = owner;
}
