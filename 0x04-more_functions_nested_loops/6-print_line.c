#include "main.h"
/**
 * print_line - draws a straight line in terminal
 * @n: line length; number of times _ should be printed.
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);

		i++;
	}

	_putchar('\n');
}
