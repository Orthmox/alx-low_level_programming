#include "main.h"
/**
 * _memcpy - copies n bytes fro source to c
 * @dest: is the destination memory address
 * @src: is the source memory address
 * @n: is the number of bytes
 * Return: a pointer to the destination
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n != '\0')
	{
		dest[n] = src[n];
		n--;
	}
	return (dest);
}
