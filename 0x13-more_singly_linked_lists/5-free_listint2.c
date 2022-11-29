#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list, and sets
 * the head to NULL.
 * @head: pointer to the pointer of head
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	current = *head;

	if (head != NULL)
	{

		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}

	*head = NULL;
	}
}
