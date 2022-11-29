#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to head of linked list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

}
