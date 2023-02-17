#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: Success(0)
 */
int main(void)
{
		int n = 0;
		int lgit = n % 10;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (lgit > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, lgit);
		else if (lgit < 6 && lgit != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n",  n, lgit);
		else
			printf("Last digit of %d is 0\n", n);
		return (0);
}
