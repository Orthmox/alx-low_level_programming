#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: is the string
 * @needle: is the substring
 * Return: pointer to needle
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
