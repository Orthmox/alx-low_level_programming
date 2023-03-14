#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: is the size of the array
 * @c: is the character array is initialized to
 * Return: pointer to array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);


	while (i < size)
	{
		str[i] = c;
		i++;
	}

	str[i] = '\0';
	return (str);
}

