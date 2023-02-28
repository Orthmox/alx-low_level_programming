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
 * _atoi - converts a string to an integer
 * @s: is the the string
 * Return: an integer
 */
int _atoi(char *s)
{
	int i, len, sign;
	unsigned int num;

	len = _strlen(s);
	sign = 1;
	num = 0;

	for (i = 0; *s != '\0' && i < len; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (num * sign);
}
