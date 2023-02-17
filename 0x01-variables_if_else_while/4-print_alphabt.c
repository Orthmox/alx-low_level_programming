#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Success(0)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
			continue;
				putchar(x);
	}
	putchar('\n');
	return (0);
}
