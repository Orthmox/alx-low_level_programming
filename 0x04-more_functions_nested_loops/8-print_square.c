#include "main.h"
/**
 * print_square - print a square of size
 * @size: is the size of the square
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
