#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src to buffer pointed by
 *		dest.
 * @dest: Destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char b;
	int i;

	for (i = 0; src[i] != '\0'; i++)
		;
	i++;

	int l;

	for (l = 0; l <= i; l++)
	{
		b = src[i];
		dest[i] = b;
	}

	return &b
}
