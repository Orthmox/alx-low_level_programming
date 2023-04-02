#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: is the string between strings
 * @n: is the number of strings to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list new;
	unsigned int i;

	va_start(new, n);

	for (i = 0; i < n; i++)
	{
		const char *var = va_arg(new, const char *);

		if (var == NULL)
			printf("nil");
		else
			printf("%s", var);
		if (i == n - 1)
			continue;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(new);
}
