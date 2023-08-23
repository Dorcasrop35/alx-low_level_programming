#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Description: This function compares the strings s1 and s2. It returns an
 * integer less than, equal to, or greater than zero if s1 is found, respectively,
 * to be less than, to match, or be greater than s2.
 *
 * Return: The difference in ASCII values of the first non-matching characters
 */
int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }

    return (s1[i] - s2[i]);
}
