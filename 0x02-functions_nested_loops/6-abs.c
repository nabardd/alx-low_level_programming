#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @n: number to check if absolute
 *
 * Return: absolute of n if successful
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	} else
	{
		return (-1 * n);
	}
}
