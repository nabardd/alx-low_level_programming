#include <stdio.h>

/**
 * main - function that prints all possible
 *        different combinations of three digits.
 *        Numbers must be separated by ',', followed by a space
 *
 * Return: 0, different combinations.
*/

int main(void)
{
	int i, first, middle, last;

	i = 0;

	while (i < 1000)
	{
		first = i / 1000;
		middle = (i / 10) % 10;
		last = i % 10;

		if (first < middle && middle < last)
		{
			putchar(first + '0');
			putchar(middle + '0');
			putchar(last + '0');

			if (i < 1000)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}

	putchar('\n');

	return (0);
}
