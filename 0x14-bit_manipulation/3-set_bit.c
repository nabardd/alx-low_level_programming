#include "main.h"
/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @n: number to be checked through
 * index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if worked, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
