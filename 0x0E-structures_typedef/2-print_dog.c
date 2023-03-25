#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints members of a struct dog variable
 * @d: is the adddress of the variahle
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		else if ((*d).name == NULL)
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else if (d->owner == NULL)
			printf("Owner: (nil)\n");
	}
}
