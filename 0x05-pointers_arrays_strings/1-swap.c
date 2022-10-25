#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer a
 * @b: integer b
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int *c;

	*c = &b;
	*b = &a;
	*a = &c;
}
