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

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	str[i] = '\0';
	return (str);
}

