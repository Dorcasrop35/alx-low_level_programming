#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t nodes_count = 0;
	int flag = 0;

	while (current != NULL)
	{
		nodes_count++;
		printf("[%p] %d\n", (void *)current, current->n);

		current = current->next;

		if (current >= head && flag == 0)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			flag = 1;
			break;
		}
	}

	if (flag == 1)
		nodes_count--;

	return (nodes_count);
}
