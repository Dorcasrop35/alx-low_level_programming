#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the '\' character in the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    int spaces;
    int slashes;

    for (slashes = 0; slashes < n; slashes++)
    {
        for (spaces = 0; spaces < slashes; spaces++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}







