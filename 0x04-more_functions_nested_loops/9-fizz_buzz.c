#include <stdio.h>
/**
 * fizz_buzz - prints the numbers from 1 to 100.
 *
 * Description: prints the numbers from 1 to 100, followed by a new line.
 *		But for multiples of three prints Fizz instead of the
 *		number and for the multiples of five print Buzz. For
 *		numbers  which are multiples of both three and five print
 *		FizzBuzz
 *
 * Return: Always 0
 */
void fizz_buzz(void)
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("Fizz Buzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ", i);
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%i ", i);
		}
	}
	putchar('\n');
}
