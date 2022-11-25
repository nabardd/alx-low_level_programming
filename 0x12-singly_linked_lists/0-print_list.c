#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: linked list to print all of its elements.
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while(h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");

		else
			printf("[%d] %\n", head->len, head->str);

		i++;
		h = h->next;
	}

	return (i);
}
