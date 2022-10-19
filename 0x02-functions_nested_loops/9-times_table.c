#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0
 */

void times_table(void)
{
	int line_number = 0;
	int x, y;

	while (line_number < 10)
	{
		x = 0;
		while (x < 10)
		{
			y = line_number * x;

			if (x != 0)
			{
				_putchar(' ');
			}

			if (y > 9)
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			} else if (y < 9 && y > 0)
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
