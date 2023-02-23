#include <stdio.h>
/**
 * main - Entry point
 *
 * Print the first 50 numbers in the Fibonacci sequence starting with 1 and 2
 * Return: Success(0)
 */
int main(void)
{
	long int num1, num2, next, i;

	num1 = 0;
	num2 = 1;
	i = 1;

	for (i = 1; i <= 99; i++)
	{
		next = num1 + num2;
		if (i < 98)
		{
			printf("%lu, ", next);
		}
		else if (i == 98)
		{
			printf("%lu\n", next);
		}
		num1 = num2;
		num2 = next;
		next = num1 + num2;
	}
	return (0);

}
