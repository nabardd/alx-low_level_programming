#include <stdio.h>

/**
 * main - function to print lowercase alphabets in reverse
 *
 * Return: 0, prints lowercase alphabets in reverse
*/

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
