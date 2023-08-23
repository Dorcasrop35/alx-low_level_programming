#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array to reverse
 * @n: The number of elements in the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
    int tmp, i, j;

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}
