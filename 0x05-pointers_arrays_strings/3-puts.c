#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string to print to stdout.
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
