#include "main.h"
/**
 * print_alphabet - this function prints alphabets in lowercase
 * _putchar - prints character
 * Return: Success (0)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
