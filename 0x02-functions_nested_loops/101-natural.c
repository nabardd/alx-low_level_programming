#include <stdio.h>
/**
 * main - prints sum of all the multiples of 3 or 5
 * 	  below 1024 (excluded), followed by a new line.
 *
 * Return: Always 0
 */

void main()
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 ==0)
		{
			sum = sum + i;
		}

		i++;
	}

	printf("%i\n", sum);
}
