#include <stdio.h>
/**
 * main -  function that prints all possible 
 * combinations of two two-digit numbers.
 *
 * Return: 0, different combinations. 
*/

int main(void)
{
	int f_first, f_second, s_first, s_second = 0;

	while (f_first <= 9)
	{
		putchar(f_first + '0');

		while (f_second <= 9)
		{
			putchar(f_second + '0');
			putchar(32);

			while(s_first <= 9)
			{
				putchar(s_first + '0');

				while (s_second <= 9)
				{
					putchar(s_second + '0');
					putchar(44);
					putchar(32);

					s_second++;
				}
				s_first++;
			}
			f_second++;
		}
		f_first++;
	}

	putchar('\n');

	return (0);
}
