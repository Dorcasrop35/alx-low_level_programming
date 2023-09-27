#include "main.h"

/* Function prototype for _putchar */
int _putchar(char c);

/**
 * _print_rev_recursion - It Prints a string in reverse.
 * @s: String to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
