#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: is the string
 * @accept: is the search object
 * Return: a pointer to accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
