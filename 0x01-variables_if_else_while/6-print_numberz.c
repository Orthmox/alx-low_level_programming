#include <stdio.h>
/**
 * main - Entry point for the programm
 *
 * Return: Success(0)
 */
int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
		putchar(48 + num);
	putchar('\n');
	return (0);
}
