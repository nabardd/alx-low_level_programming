#include "lists.h"
/**
 * *reverse_listint - function that reverses a listint_t linked list.
 * @head: double pointer to head of linked list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *post = NULL;

	while (*head != NULL)
	{
		post = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = post;
	}
	*head = prev;
	return (*head);
}
