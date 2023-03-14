#include "main.h"
#include <stdlib.h>
/**
 * _strlen - computes the length of a string
 * @s: is the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strdup - stores a copy of a string in memory
 * @str: is the string
 * Return: a string else NULL if empty
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *new;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	if (len == 0)
		return (NULL);
	new = malloc(sizeof(char) * (len + 1));
	if (str)
	{
		for (i = 0; i < len; i++)
		{
			new[i] = str[i];
		}
		new[len] = '\0';
		return (new);
	}
	return (NULL);
}
