#include "main.h"
/**
 * _strspn - is the function
 * @s: is the first parameter
 * @accept: is the second parameter
 * Return: an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, match = 0, i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				match = 1;
			}
		}
		if (!match)
			return (count);
		match = 0;
		s++;
	}
	return (count);
}
