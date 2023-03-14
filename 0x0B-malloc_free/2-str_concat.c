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
 * str_concat - concatenates two strings
 * @s1: is the first string
 * @s2: is the second string
 * Return: pointer to concatenated string else NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	cat = malloc(sizeof(char) * (len1 + len2) + 1);
	if (cat == NULL)
		return (NULL);

	i = 0;
	while (i < (len1 + len2))
	{
		for (j = 0; j < len1; j++)
		{
			cat[i] = s1[j];
			i++;
		}
		for (j = 0; j < len2; j++)
		{
			cat[i] = s2[j];
			i++;
		}
	}
	cat[len1 + len2] = '\0';
	return (cat);
}
