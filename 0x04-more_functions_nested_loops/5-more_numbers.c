#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14, followed by
 *		a new line
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int line = 1;

	while (line <= 10)
	{
		int n = 0;

		while (n <= 14)
		{
			_putchar(n + '0');

			n++;
		}

		line++;
		_putchar('\n');
	}
	_putchar('\n');
}
