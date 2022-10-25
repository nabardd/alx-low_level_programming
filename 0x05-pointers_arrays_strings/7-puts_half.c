#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string of which half is to be printed.
 *
 * Description: The function prints the second half of the string.
 *		If the number of characters is odd, the function should
 *		print the last n characters of the string,
 *		where n = (string_length - 1) / 2.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 != 0)
	{
		n = (i - 1) / 2;

		j = i - n;

		for (; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	} else
	{
		n = i / 2;

		for (; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
