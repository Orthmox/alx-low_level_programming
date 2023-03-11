#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: is the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
