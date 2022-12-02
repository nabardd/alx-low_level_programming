#include "main.h"
/**
 * print_binary - Function that prints the binary representation
 * of a number
 * @n: number to print out binary classification
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	while (n != 0)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
