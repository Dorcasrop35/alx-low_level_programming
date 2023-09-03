#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string (will contain the concatenated result)
 * @src: source string (will be appended to dest)
 *
 * Return: a pointer to the destination string `dest`
 */
char *_strcat(char *dest, const char *src)
{
    char *temp = dest;

    while (*dest)
    {
        dest++;
    }

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; /* Null-terminate the concatenated string */
    return temp;
}
