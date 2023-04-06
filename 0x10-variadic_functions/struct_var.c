#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * prtchar - prints a character
 * @vart: is a character
 * Return: nothing
 */
void prtchar(va_list vart)
{
	char c = (char)va_arg(vart, int);

	printf("%c", c);
}

/**
 * prtint - prints an integer
 * @vart: is an integer
 * Return: nothing
 */
void prtint(va_list vart)
{
	int i = va_arg(vart, int);

	printf("%i", i);
}

/**
 * prtfloat - prints a float
 * @vart: is a float
 * Return: nothing
 */
void prtfloat(va_list vart)
{
	float f = (float) va_arg(vart, double);

	printf("%f", f);
}

/**
 * prtstring - prints a string
 * @vart: is a string
 * Return: nothing
 */
void prtstring(va_list vart)
{
	char *s = va_arg(vart, char *);

	printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list new;
	struct larg uarg[] = {
		{'c', prtchar},
		{'i', prtint},
		{'f', prtfloat},
		{'s', prtstring},
	};
	int i = 0;
	int j = 0;
	int k = 0;
	const char *form;
	char *s = "";

	form = format;
	va_start(new, format);

	while (form[i])
	{
		while (j < 4)
		{
			if (form[i] == uarg[j].c)
			{
				printf("%s", s);
				uarg[j].f(new);
				s = ", ";
				k++;
			}
		}
		j++;
	}
	i++;
	printf("\n");
	va_end(new);
}
