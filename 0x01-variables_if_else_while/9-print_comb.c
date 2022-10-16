#include <stdio.h>
/**
 * main - function to print all possible combinations
 * of single-digit numbers
 *
 * Return: 0, possible combinations of single digit numbers
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar('\n');

	return (0);
}
