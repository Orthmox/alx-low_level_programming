#include "main.h"
/**
 * _strstr - is the function
 * @haystack: is the first parameter
 * @needle: is the second parameter
 * Return: a character pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] && haystack[i] && needle[i] == haystack[i]; i++)
			;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return ('\0');
}
