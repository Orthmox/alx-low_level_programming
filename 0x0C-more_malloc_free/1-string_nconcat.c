#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: is the destination string
 * @s2: is the source strings
 * @n: is the number of characters to be concatenated
 * Return: pointer to address of concatenated string in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;
	char *ncat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; j < i; j++)
		{
			len1++;
		}
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		for (j = 0; j < i; j++)
		{
			len2++;
		}
	}
	if (n >= len2)
		n = len2;

	ncat = malloc(sizeof(char) * (len1 + n) + 1);
	if (ncat == NULL)
		return (NULL);
	i = 0;
	for (j = 0; s1[j] != '\0'; j++)
	{
		ncat[i++] = s1[j];
	}
	for (j = 0; j < n; j++)
	{
		ncat[i++] = s2[j];
	}
	ncat[i++] = '\0';

	return (ncat);
}

