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
	int i, j;
	int length, result = 0;
	int exp = 1;

	/* Calculating string length */

	for (i = 0; b[i] != '\0'; i++)
		;
	length = i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++, length--)
	{
		if (b[i] != 0 | b[i] != 1)
			return (0);
		for (j = length; j > 0; j--)
			exp = exp * 2;

		result = result + (b[i] * (exp));

		exp = 1;
	}

	return (result);
}
