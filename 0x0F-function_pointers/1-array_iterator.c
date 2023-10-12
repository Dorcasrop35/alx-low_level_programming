#include <stdio.h>
#include "function_pointers.h" 

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to be processed.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	    if (array == NULL || action == NULL)
		            return; 

	        for (size_t i = 0; i < size; i++)
			    {
				            action(array[i]); 
					        }
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	    int array[5] = {0, 98, 402, 1024, 4096};

	        array_iterator(array, 5, &print_elem);
		    array_iterator(array, 5, &print_elem_hex);
		        return (0);
}
