#include "main.h"
/**
 * leet - convert a string into 1337
 * @c: is the string
 * Return: a string
 */
char *leet(char *c)
{
	char num[] = {'4', '3', '0', '7', '1'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	int i;
	int j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if  (c[i] == lower[j] || c[i] == upper[j])
				c[i] = num[j];
		}
	}
	return (c);
}
