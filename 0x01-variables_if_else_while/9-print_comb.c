#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: Success(0)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(48 + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
