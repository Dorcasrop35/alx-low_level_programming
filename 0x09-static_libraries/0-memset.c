#include <stddef.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: pointer to the memory area to be filled
 * @b: the byte to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
void *_memset(void *s, int b, size_t n)
{
    unsigned char *ptr = s;
    unsigned char value = (unsigned char)b;

    while (n--)
    {
        *ptr = value;
        ptr++;
    }

    return s;
}












