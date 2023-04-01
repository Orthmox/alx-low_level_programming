#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: is the string between numbers
 * @n: is the number of numbers to print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list new;
	unsigned int i;

	va_start(new, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(new, int));
		if (i == n - 1)
			continue;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(new);
}
