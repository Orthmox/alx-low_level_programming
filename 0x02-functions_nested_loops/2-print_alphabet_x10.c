#include "main.h"
/**
 * print_alphabet_x10 - This function prints alphabets in lowercase 10 tumes
 * putchar - prints characters
 * Return: Success(0)
 */
void print_alphabet_x10(void)
{
	int k;

	for (k = 0; k <= 10; k++)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	_putchar('\n');
	}
}
