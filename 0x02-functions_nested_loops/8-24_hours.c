#include "main.h"
/**
 * jack_bauer - prints every minute of Jack Bauer, starting from
 * 00:00 to 23:59
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int x = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	
	while (x < 1440)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar('\n');

		l++;

		if (l > 9)
		{
			l = 0;
			k++;
		}
		if (k > 5)
		{
			k = 0;
			j++;
		}
		if (j > 9)
		{
			j = 0;
			i++;
		}

		x++;
	}


}
