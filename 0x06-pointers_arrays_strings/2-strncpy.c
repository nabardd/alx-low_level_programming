#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: string to be copied
 * @n: number of bytes to copy
 *
 * Return: copied string pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
