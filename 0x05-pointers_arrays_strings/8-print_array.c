#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed by
 *		a new line.
 * @a: array of integers
 * @n: number of integers to be printed from array
 *
 * Description: Numbers must be seperated by a comma, followed by a
 *		space.
 *		The numbers should be displayed in the same order as
 *		they are stored in the array.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; n >= 0; i++, n--)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}

	printf("\n");
