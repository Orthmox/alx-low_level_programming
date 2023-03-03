#include "main.h"
/**
 * string_toupper - converts lowercase string to uppercase string
 * @c: is the string
 * Return: a string pointer
 */
char *string_toupper(char *c)
{
	while (*c != '\0')
	{
		if (*c >= 97 && *c <= 122)
		{
			*c = *c - 32;
		}
		c++;
	}
	return (c);
}
