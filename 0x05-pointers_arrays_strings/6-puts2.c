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
 * puts2 - print every other character of a string starting from first
 * @str: is the string
 */
void puts2(char *str)
{
	int i, j, len;

	len = _strlen(str);
	j = len -1;

	for (i = 0; *str != '\0' && i <= j; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
