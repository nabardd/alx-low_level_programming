#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b, l, c;

	if (n % 2 == 0)
	{
		l = n / 2;
	} else
	{
		l = (n - 1) / 2;
	}

	for (b = 0; b < l; b++, n--)
	{
		c = a[n];
		a[n] = a[b];
		a[b] = c;
	}
}
