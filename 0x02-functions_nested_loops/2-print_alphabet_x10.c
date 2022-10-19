#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabets,
 * in lowercase, followed by a new line.
 *
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
	int a;
	int i = 1;

	while (i <= 10)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		i++;
	}
}
