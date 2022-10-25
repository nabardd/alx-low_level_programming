#include "main.h"
/**
 * rev_string - reverse a string.
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, l;
	char j;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (c = 0; c < l / 2; i--, c++)
	{
		j = s[c];
		s[c] = s[i];
		s[i] = j;
	}
}
