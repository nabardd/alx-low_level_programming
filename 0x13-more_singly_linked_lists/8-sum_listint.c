#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data(n)
 * of a listint_t linked list
 * @head: pointer to linked list.
 *
 * Return: if list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current -> next;
	}

	return (sum);
}
