#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: is the name to be printed
 * @f: is a pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*gnap)(char *);

	if (f)
	{
		gnap = f;
		gnap(name);
	}
}
