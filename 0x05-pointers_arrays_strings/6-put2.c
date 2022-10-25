#include "main.h"
/**
 * puts2 - prints every othe character of a string, starting with the
 *	the first character, followed by a new line.
 * @str: string to print every other character
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
}
