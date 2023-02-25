#include <stdio.h>
/**
 * main - entry point
 * print_factor - prints the largest factor of num
 * @num: is the number
 * Return: Success(0)
 */
void print_factor(long unsigned num)
{
	long unsigned count;
	long unsigned largest = 2;
	
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

int main(void)
{
	long unsigned test = 612852475143;

	print_factor(test);
	return (0);
}
