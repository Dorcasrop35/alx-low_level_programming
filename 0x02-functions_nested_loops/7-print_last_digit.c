#include "main.h"

/**
 * last_digit - Prints the last digit of a number.
 * @n: The number whose last digit is to be printed.
 *
 * Return: The value of the last digit.
 */
int last_digit(int n)
{
    int last = n % 10;
    
    if (last < 0)
        last = -last;

    _putchar(last + '0');
    return (last);
}
