#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that free a list_t list.
 * @head: pointer to linked list
 *
 * Returns: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
