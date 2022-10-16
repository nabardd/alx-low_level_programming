#include <stdio.h>

/**
 * main - function that prints out small letter alphabets
 * 
 * Returns: 0 if successful, and prints out lowercase alphabets
*/

int main(void)
{
  int n = 97;

  while (n <= 122)
  {
    putchar(n);
    n++;
  }
  putchar('\n');

  return (0);
}
