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
	int line_number = n;
	int x, y;

	while (line_number > 15 && line_number > 0)
	{
		x = 0;
		while (x < 10)
		{
			y = line_number * x;

			if (x != 0)
			{
				_putchar(' ');
			}
			if (line_number == 0 && x != 0)
			{
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar(y + '0');

			} else if (y > 9)
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			} else
			{
				_putchar(' ');
				_putchar(y + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}
			x++;
		}
		_putchar('\n');
		line_number++;
	}
}

