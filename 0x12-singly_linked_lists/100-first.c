#include "lists.h"
#include <stdio.h>
/**
 * print_str - function to print string.
 *
 * Description: prints out string "You're beat! and yet,
 * you must not allow, \nI bore my house upon my back!\n" before
 * the main function is executed
 * 
 * Return: void
 */
void print_str (void) __attribute__ ((constructor));

void print_str(void)
{
	printf("You're beat! and yet you must not allow, \n");
	printf("I bore my house upon my back!\n");
}

