#include "main.h"

/**
 * _strlen_recursion - Give back the length of a string.
 * @s: Is the  string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
