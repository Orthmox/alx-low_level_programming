#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: is the destination string
 * @src: is the source string
 * @n: is the number of characters to copy
 * Return: a character this time
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (n--)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
