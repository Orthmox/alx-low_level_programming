#include "main.h"
/**
 * _strcat - appends one string to another
 * @dest: is the destination string
 * @src: is the string to be copied
 * Return: a string this time
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
