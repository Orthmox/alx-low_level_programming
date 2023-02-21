#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * _putchar - prints a character
 * @c: parameter under consideration
 * Return: Success(0)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
