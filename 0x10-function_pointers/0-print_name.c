#include "function_pointers.h"

/**
 * print_name - prints the name sent to it
 * @name: the name to print
 * @f: print function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
