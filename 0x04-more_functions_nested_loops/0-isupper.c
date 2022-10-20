#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to be checked if uppercase
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}

	return (0);
}
