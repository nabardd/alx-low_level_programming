#include "main.h"
/**
 * clear_bit - A function that sets the value of a bit 0 at a given index
 * @n: value to reset
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & 0 << index;
	return (1);
}
