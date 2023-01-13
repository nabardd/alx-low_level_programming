#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t
 * list
 * @h: Pointer to the head of doubly linked list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t = 0;
	dlistint_t temp = h;

	while (temp != NULL)
	{
		size++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (size);
}
