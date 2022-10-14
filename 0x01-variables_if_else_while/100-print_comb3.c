#include <stdio.h>

/**
 * main - function that prints all possible
 *        different combinations of two digits.
 *        Numbers must be separated by ',', followed by a space
 * 
 * Returns: 0, different combinations.
 *        
*/

int main(void)
{
  
  int i, first, last;

  i = 0;

  while (i < 100)
  {
    first = i / 10;
    last = i % 10;

    if (first < last)
    {
      putchar(first + '0');
      putchar(last + '0');

      if (i < 89)
      {
        putchar(44);
        putchar(32);
      }
    }
  }

  putchar("\n");

  return (0);

}