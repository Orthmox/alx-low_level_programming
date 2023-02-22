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

	while (i <= 50)
	{
		next = num1 + num2;

		if (i == 50)
		{
			printf("%lu \n", next);
		}
		else
		{
			printf("%lu, ", next);
		}

		num1 = num2;
		num2 = next;
		next = num1 + num2;
		i++;
	}
	return (0);
}
