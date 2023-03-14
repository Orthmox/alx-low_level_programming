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
	int len = _strlen(str);
	char *new;

	new = malloc(sizeof(char) * (len + 1));
	if (*str == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
