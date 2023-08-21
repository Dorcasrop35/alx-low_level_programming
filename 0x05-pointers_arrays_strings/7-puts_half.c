#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string to print the second half of.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int i, start;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
