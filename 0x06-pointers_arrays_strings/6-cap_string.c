#include "main.h"
/**
 * cap_string - capitalizes every word in a string
 * @c: is the string
 * Return: a string pointer
 */
char *cap_string(char *c)
{
	int i = 0;

	if (c[i] >= 97 && c[i] <= 122)
	{
		c[i] = c[i] - 32;
	}
	i++;
	while (c[i] != '\0')
	{
		if ((c[i] >= 97 && c[i] <= 122) && (c[i - 1] == ' ' ||
			c[i - 1] == '\t' || c[i - 1] == '\n' || c[i - 1] == ','
			|| c[i - 1] == ';' ||
			c[i - 1] == '.' || c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '"' ||
			c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{' || c[i - 1] == '}'))
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
