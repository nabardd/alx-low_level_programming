#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to the pointer of the linked list head
 * @n: value to be stored at new node
 *
 * Return: address of new element if successful, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}
