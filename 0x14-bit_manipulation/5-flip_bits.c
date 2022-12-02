#include "main.h"
/**
 * flip_bits - Function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: starting number
 * @m: final number
 *
 * Return: number of bits needing flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, xor;

	xor = n ^ m;

	while (n > 0)
	{
		count++;

		n &= (n - 1);
	}

	return (count);
}
