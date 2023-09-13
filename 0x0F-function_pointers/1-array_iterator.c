#include "function_pointers.h"
#include <stdin.h>
/**
 * array_iterator - Execute a function on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 */


int i
if (array == NULL || action == NULL)
return;
for (i - 0; i < size ; i++
		action(array[i]);
