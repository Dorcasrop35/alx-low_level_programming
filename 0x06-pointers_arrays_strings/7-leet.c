#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @s: The input string
 *
 * Return: The encoded string
 */
char *leet(char *s)
{
    char leet[] = "aAeEoOtTlL";
    char leet_replace[] = "4433007711";
    int i, j;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (leet[j] != '\0')
        {
            if (s[i] == leet[j])
            {
                s[i] = leet_replace[j];
                break;
            }
            j++;
        }
        i++;
    }

    return (s);
}
