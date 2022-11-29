#include "lists.h"
#include <stdlib.h>
/**
 * *insert_nodeint_at_index - function that inserts a new node at a given
 * position.
 * @head: pointer to pointer of linked list head
 * @idx: index of the list where new node should be added. Index starts
 * at 0.
 * @n: data value to be stored at node
 *
 * Return: address of new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;

	if (*head == NULL)
		return (NULL);

	ptr = *head;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	while (idx != 0)
	{
		ptr = ptr->next;
		idx--;

		if (ptr == NULL)
			return (NULL);
	}

	new->next = ptr->next;
	ptr->next = new;

}
