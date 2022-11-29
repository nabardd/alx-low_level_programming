#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node's data(n).
 * @head: pointer to pointer of linked list header
 *
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	n = current->n;
	*head = current->next;
	free(current);

	return (n);
}
