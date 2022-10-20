#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int line = 0;

	while (line <= n)
	{
		line++;
		if (n == 0)
		{
			_putchar('\n');
		} else
		{
			int spaces = 0;

			while (spaces < line)
			{
				_putchar(' ');

				spaces++;
			}
			_putchar("\\");
		}

	}
}
