#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked if digit
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}

	return (0);
}
