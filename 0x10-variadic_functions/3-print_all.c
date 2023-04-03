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
	char c_var;
	int i_var;
	float f_var;
	char *s_var;
	const char *form = format;

	va_start(new, format);

	while (*form != '\0')
	{
		if (*form == 'c')
		{
			c_var = (char) va_arg(new, int);
			printf("%c, ", c_var);
		}
		else if (*form == 'i')
		{
			i_var = va_arg(new, int);
			printf("%i, ", i_var);
		}
		else if (*form == 'f')
		{
			f_var = (float) va_arg(new, double);
			printf("%f, ", f_var);
		}
		else if (*form == 's')
		{
			s_var = va_arg(new, char *);
			if (s_var == NULL)
				printf("(nil)");
			else
				printf("%s", s_var);
		}
		form++;
	}
	printf("\n");
	va_end(new);
}
