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

#include "main.h"
/**
 * rev_string - reverses a string
 * @s: is the string
 */
void rev_string(char *s)
{
	int i, j, len;
	char temp;

	len = _strlen(s);
	j = len - 1;
	i = 0;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++, j--;
	}
}
