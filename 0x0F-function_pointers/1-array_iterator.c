#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - prints elements of an array
 * @array: is a pointer to the array
 * @size: is the size of the array
 * @action: is a pointer to the function to execute
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	void (*eap)(int);

	if (action == NULL)
		return;
	if (action)
		eap = action;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			eap(array[i]);
		}
	}
}
