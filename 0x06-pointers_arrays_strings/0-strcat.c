#include "main.h"
/**
 * *_strcat - appends the src string to the dest string.
 * @dest: destination string
 * @src: source string
 *
 * Description: Overwriting the terminating null byte (\0) at 
 *		the end of dest, and then adds a terminating null byte.
 *
 * Return: concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int l;

	for (l = 0; dest[l] != '0\'; l++)
		;
	int i;

	for (i = 0; src[i] != '\0'; i++, l++)
	{
		dest[l] = src[i];
	}
	dest[l] = '\0';

	return (dest);
}
