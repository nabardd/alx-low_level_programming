#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - function to find the length of a string
 * @str: string to find its length
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * *add_node_end - function that adds a new node at the end
 * of a list_t list.
 * @head: double pointer to head of likned list.
 * @str: string to store in new node
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* Allocate node */
	list_t *new;

	list_t *last = *head;
	
	/* Create new node and insert data */
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = _strlen(new->str);

	/* Assign new as last node */
	new->next = NULL;
	
	/**
	 * if the linked list is empty,
	 * initialize with new node.
	 */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Traverse till the last node */
	while (last->next != NULL)
	{
		last = last->next;
	}
	
	/* Change the next of the last node */
	last->next = new;

	return (new);
}
