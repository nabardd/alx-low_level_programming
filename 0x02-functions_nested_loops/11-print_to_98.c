#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: starting point
 *
 * Description: Numbers must be seperated by a comma, followed by a space
 *		the first printed number is n,
 *		and the last printed number is always 98
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int final = 98;

	while (n != 98)
	{
		if (n > 98)
		{
			printf("%i, ", n);
			n--;
		} else if (n < 98)
		{
			printf("%i, ", n);
			n++;
		}

	}
	printf("%i\n", final);
}
