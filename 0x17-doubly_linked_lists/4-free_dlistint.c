#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of list to be freed.
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node)
	{
		next = node-> next;
		free(node);
		node = next;
	}
}
