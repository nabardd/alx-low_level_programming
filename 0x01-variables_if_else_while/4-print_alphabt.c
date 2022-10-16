#include <stdio.h>
/**
 * main - function to return lowercase alphabets except q and e
 *
 * Return: 0, prints lowercase alphabets except q and e
*/

int main(void)
{
	int n = 97;
	
	while (n <= 122)
	{
		if ((n != 101) & (n != 113))
		{
			putchar(n);
			n++;
		}
	}

	putchar('\n');

	return (0);
}
