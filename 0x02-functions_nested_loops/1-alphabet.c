#include "main.h"
/**
 * print_alphabet - prints out lowercase alphabets using _putchar
 * followed by a new line
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
