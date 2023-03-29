#include "function_pointers.h"
/**
 * int_index - searches an array for a integer
 * @array: is the array
 * @size: is the size of the array
 * @cmp: is a pointer to the comparison function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*sean)(int);

	if(cmp == NULL)
		return (-1);
	if (cmp)
		sean = cmp;
	if (size <= 0)
		return (-1);
	if (array)
	{
		for (i = 0; i < size; i++)
		{
			if (sean(array[i]))
				return (i);
		}
	}
	return (-1);
}
