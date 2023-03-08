#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: is the string
 * @c: is the character we want to find
 * Return: pointer to the first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0' && s[i] != c)
	{ 
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return ('\0');
}
