#include <stdio.h>
/**
 * main - Entry point
 *
 * Print the first 50 numbers in the Fibonacci sequence starting with 1 and 2
 * Return: Success(0)
 */
int main(void)
{
	long int num1, num2, next, i, sum;

	num1 = 0;
	num2 = 1;
	i = 1;
	sum = 0;

	next = num1 + num2;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
		{
			sum = sum + next;
		}
	num1 = num2;
	num2 = next;
	next = num1 + num2;
	}
	printf("%lu\n", sum);
	i++;
	return (0);
}
