#include "main.h"
/**
 * *string_toupper - changes all lowercase letters from string
 *			to uppercase.
 *
 * Return: transformed string
 */
char *string_toupper(char *n)
{
	int i;

	for(i = 0; n[i] != '\0'; i++)
	{
		if (n[i] > 96 && n[i] < 123)
		{
			n[i] = n[i] - 32;
		}
	}

	return (n);
}

