#include <stdio.h>

/**
 * main - function to print all base 16 numbers
 *
 * Return: 0, prints all base 16 numbers
*/

int main(void)
{
	int n = 48;
	int alpha = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (alpha <= 102)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
