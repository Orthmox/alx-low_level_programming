#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: is the string
 * @c: is the character we want to find
 * Return: pointer to the first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
	int i;
	char *lfo;
	char *error = "NULL";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			lfo = (s + i);
			break;
		}
		if (s[i] != c)
			i++;
		if (s[i] == '\0')
			lfo = error;
	}
	return (lfo);
}
