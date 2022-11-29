#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to head of linked list
 *
 * Return: the number of nodes in the list. If the function fails, exit
 * the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	int count = 0;

	if (head == NULL)
		return (98);

	ptr = head;

	while (head != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
