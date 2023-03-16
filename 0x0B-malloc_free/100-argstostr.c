#include "main.h"
#include <stdlib.h>
/**
 * _strlen - computes the length of a string
 * @s: is the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * argstostr - concatenates all arguments passed to the program
 * @ac: is the argument counter
 * @av: is the argument vector
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *cats;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]); 
	}
	cats = (char *)malloc(sizeof(char) * len);

	if (cats == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (j < _strlen(av[i]))
		{
			cats[k++] = av[i][j];
			j++;
		}
		cats[k++] = '\n';
	}
	cats[k++] = '\0';
	return (cats);
}
