#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index of
 * a listint_t linked list.
 * @head: pointer to head of linked list
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index ==  1)
	{
		*head = current->next;
		free(current);
		current = NULL;

		return (1);
	}

	while (index != 0)
	{
		prev = current;
		current = current->next;
		index--;
	}

	prev->next = current->next;
	free(current);
	current = NULL;

	return (1);
}
