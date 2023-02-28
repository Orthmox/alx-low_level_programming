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
 * puts_half - prints second half of a string
 * @str: is the string
 */
void puts_half(char *str)
{
	int i, j, n, len;

	len = _strlen(str);
	j = len - 1;
	n = len / 2;

	if (len % 2 == 0)
	{
		for (i = n; *str != '\0' && i <= j; i++)
		{
			_putchar(str[i]);
		}
	}
	if (len % 2 != 0)
	{
		n = j / 2;
		for (i = n; *str != '\0' && i <= j; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
