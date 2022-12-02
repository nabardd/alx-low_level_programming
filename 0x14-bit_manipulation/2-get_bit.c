#include "main.h"
/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Number to check through
 * @index: index, starting from 0 of the bit to get.
 *
 * Return: value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return (((n >> index) & 1) + '0');
}
