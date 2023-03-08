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
	char *lfo;
	char *nfnd = "NULL";

	lfo = nfnd;

	while (*s != '\0')
	{
		if (s[i - 1] == c)
		{
			lfo = (s + (i - 1));
			return (lfo);
		}
		i++;
	}
	return (lfo);
}
