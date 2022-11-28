#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - function that adds a new noe at the end of a
 * linked list
 * @head: pointer to the pointer of head of linked list
 * @n: integer to be stored in the node
 *
 * Return: the address of the new element, NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Declare nodes */
	listint_t *new;
	listint_t *last = *head;

	/* Allocate memory for new */
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	/* initialize with new node if empty*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Traverse linked list */
	while (last -> next != NULL)
	{
		last = last -> next;
	}

	/* Assign last node as new node */
	last -> next = new;

	return (new);

}
