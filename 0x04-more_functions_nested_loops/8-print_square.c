#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square (size x size)
 *
 * Description: if size is 0 or less, the function prints only a new
 *		line. Uses the character # to print the square.
 *
 * Return: always 0;
 */
void print_square(int size)
{
	for (int i = 0; i < size; i++)
	{
		if (size == 0)
		{
			_putchar('\n');
		} else
		{
			for (int j = 0; j < size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
