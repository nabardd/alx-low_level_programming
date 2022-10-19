#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: table to print
 *
 * Description: if n is greater than 15 or less than 0,
 * 		the function should not print anything.
 *
 * Return: Always 0
 */

void print_times_tables(int n)
{
	if (n > 15 || n < 0)
	{
		_putchar(' ');

	} else
	{
		int lines = 0;
		int x, y;

		while (lines <= n)
		{
			x = 0;
			
			while (x <= lines)
			{
				y = lines * x;

				if (x != 0)
				{
					_putchar(' ');
				}
				if (y > 9)
				{
					_putchar(y / 10 + '0');
					_putchar(y % 10 + '0');
				} else
				{
					_putchar(y + '0');
				}
				if (x != lines)
				{
					_putchar(',');
				}

				x++;

			}
			_putchar('\n');

			lines++;
		}
	}
}
