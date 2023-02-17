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
		int n;
		int lgit;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		lgit = n % 10;
		if (lgit > 5)
			printf("Last digit of %i is %i and is greater than 5\n", n, lgit);
		else if (lgit < 6 && lgit != 0)
			printf("Last digit of %i is %i and is less than 6 and not 0\n",  n, lgit);
		else
			printf("Last digit of %i is %i and is 0\n", n, lgit);
		return (0);
}
