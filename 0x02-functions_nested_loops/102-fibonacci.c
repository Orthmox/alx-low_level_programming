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

	num1 = 1;
	num2 = 2;
	next = num1 + num2;
	i = 3;

	printf("%lu, ", num1);
	printf("%lu, ", num2);

	while (i <= 50)
	{
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
