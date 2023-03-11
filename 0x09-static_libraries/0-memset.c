#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: is the address in memory to be filled
 * @b: is the character used to fill memory address
 * @n: is the number of bytes to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n != 0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
