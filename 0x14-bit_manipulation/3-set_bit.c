#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number where the bit will be set.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* Return -1 for out-of-bounds index */

	*n |= (1UL << index); /* Set the bit at the index to 1 using bitwise OR */

	return (1); /* Return 1 to indicate success */
}
