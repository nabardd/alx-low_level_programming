#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list.
 * @h: pointer to linked list header
 *
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t element_nbr = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		element_nbr++;
		current = current -> next;
	}

	return (element_nbr);
}
