#include <stdio.h>

/**
 * main - function to print lowercase and uppercase alphabets
 *
 * Return: 0, prints out alphabets
*/

int main(void)
{
	int lower = 97;
	int upper = 65;

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
