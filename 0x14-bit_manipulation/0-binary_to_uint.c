#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the coverted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, add, length;

	add = 0;

	if (b != NULL)
	{
		for (length = 0; b[length] != '\0'; length++)
		{
			if (b[length] != 48 | b[length != 49])
				return (0);
		}

		for (i = 0; length >= 0; i++, length--)
		{
			add = add + ((b[length] - '0') << 1);
		}

		return (add);
	}
	else
	{
		return (0);
	}
}
