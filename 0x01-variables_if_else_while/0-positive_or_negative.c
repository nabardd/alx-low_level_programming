#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - function to check if a random number is
 * positive, or negative.
 * 
 * Return: prints out results and returns 0 on completion
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
