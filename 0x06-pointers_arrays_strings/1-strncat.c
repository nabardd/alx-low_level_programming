#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 *
 * Description: The function is similar to the _strcat function,
 *		except that it will use at most n bytes from src;
 *		and src does not need to be null terminated if it
 *		contains n or more bytes.
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, j;
	for (l = 0; dest[l] != '\0'; l++)
		;

	for (j = 0; j < n && src[j] != '\0'; j++, l++)
	{
		dest[l] = src[j];
	}

	dest[l] = '\0';

	return (dest);
}
