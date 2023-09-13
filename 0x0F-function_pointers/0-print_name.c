#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Calls a given printing function to print a name.
 * @name: The name to be printed.
 * @f: A pointer to a printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
