#include <stdio.h>

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
				putchar(' ');
			}
			if (line_number == 0 && x != 0)
			{
				putchar(' ');
			}
			if (y == 0)
			{
				putchar(y + '0');

			} else if (y > 9)
			{
				putchar(y / 10 + '0');
				putchar(y % 10 + '0');
			} else
			{
				putchar(' ');
				putchar(y + '0');
			}
			if (x != 9)
			{
				putchar(',');
			}
			x++;
		}
		putchar('\n');
		line_number++;
	}
}

