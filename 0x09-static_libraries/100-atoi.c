#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    // Handle leading '+' or '-' signs
    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[0] == '+')
    {
        i++;
    }

    // Convert characters to integer until a non-digit character is encountered
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    // Apply the sign to the result
    return sign * result;
}
