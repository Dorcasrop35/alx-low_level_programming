#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int negative = 0;

	if (n < 0)
	{
		negative = 1;
		n = -n;
	}

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	if (negative)
	{
		_putchar('-');
	}

	while (divisor != 0)
	{
		_putchar(n / divisor + '0');
		n %= divisor;
		divisor /= 10;
	}
}
