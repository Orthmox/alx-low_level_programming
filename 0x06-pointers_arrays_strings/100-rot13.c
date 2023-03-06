#include "main.h"
/**
 * rot13 - rotates characters in a string by 13 places
 * @c: is the string
 * Return: a string
 */
char *rot13(char *c)
{
	int i = 0;
	int j;
	char a[]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z'};
	char rot[]= {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y','z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J','K', 'L', 'M'};

	while (c[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (c);
}
