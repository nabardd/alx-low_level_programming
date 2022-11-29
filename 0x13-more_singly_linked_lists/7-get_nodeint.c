#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @head: pointer to linked list head
 * @index: index of intended node in linked list, starting at 0.
 *
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;

	index--;
	while (index != 1)
	{
		ptr = ptr->next;
		index--;
	}

	return (ptr);
}
