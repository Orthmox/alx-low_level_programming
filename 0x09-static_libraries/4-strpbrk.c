#include "main.h"
/**
 * _strpbrk - is the function
 * @s: is the first parameter
 * @accept: is the second parameter
 * Return: a character pointer
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
