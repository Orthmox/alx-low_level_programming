#include <stdio.h>
/**
 * print_factor - prints the largest factor of num
 * @num: is the number
 */
void print_factor(unsigned long num)
{
	unsigned long count;
	unsigned long largest = 2;

	for (count = 2; num > 1; count++)
	{
		if (num % count == 0)
		{
			num = num / count;
			largest = count;
		}
	}
	printf("%lu\n", largest);
}
/**
 * main - entry point
 * Return: Success(0)
 */

int main(void)
{
	unsigned long test = 612852475143;

	print_factor(test);
	return (0);
}
