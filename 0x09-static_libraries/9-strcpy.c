#include "main.h"
/**
 * _strcpy - copies one string into another
 * @dest: is the destination string
 * @src: is the string to be copied
 * Return: a string this time
 */
char *_strcpy(char *dest, char *src)
{
	int i, j, len;

	len = _strlen(src);
	j = len - 1;

	for (i = 0; *src != '\0' && i <= j; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
