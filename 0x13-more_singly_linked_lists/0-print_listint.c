#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a
 * listint_t list.
 * @h: pointer to the header of the linked list
 *
 * Return: the number of nodes present in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_nbr = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_nbr++;
	}

	return (node_nbr);
}
