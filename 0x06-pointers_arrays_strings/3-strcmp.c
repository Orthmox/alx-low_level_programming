#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: is the first string
 * @s2: is the second string
 * Return: difference between characters
 */
int _strcmp(char *s1, char *s2)
{
	int i, change;
	i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		change = s1[i] - s2[i];
		if (s1[i] != s2[i])
		{
			return(change);
		}
		i++;
	}
	return (0);
}

