#include <stdio.h>

/**
 * main -  function that prints all possible combinations of two two-digit numbers.
 * Description: The numbers should range from 0 to 99,
 *              The two numbers should be separated by a space,
 *              All numbers should be printed with two digits. 1 should be printed as 01
 *              The combination of numbers must be separated by comma, followed by a space, 
 *              The combinations of numbers should be printed in ascending order,
 *              00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 * 
 * Returns: 0, different combinations.
 *        
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

  putchar("\n");

  return (0);
}