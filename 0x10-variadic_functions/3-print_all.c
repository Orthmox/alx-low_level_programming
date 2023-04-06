#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list new;
	int k = 0;
	char *s_var;
	const char *form;
	char *s = "";

	form = format;
	va_start(new, format);

	if (form)
	{
		while (form[k])
		{
			switch (form[k])
			{
				case 'c':
					printf("%s%c", s, va_arg(new, int));
					break;
				case 'i':
					printf("%s%i", s, va_arg(new, int));
					break;
				case 'f':
					printf("%s%f", s, (float)va_arg(new, double));
					break;
				case 's':
					s_var = va_arg(new, char *);
					if (!s_var)
						s_var = "(nil)";
					printf("%s%s", s, s_var);
					break;
				default:
					k++;
					continue;
			}
			s = ", ";
			k++;
		}
	}
	printf("\n");
	va_end(new);
}
