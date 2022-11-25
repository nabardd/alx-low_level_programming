#ifndef CALC_H
#define CALC_H
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct list_s
{
	char *str;
	unsigned int_len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list *h);
size_t list_len(const list_t *h);
#endif
