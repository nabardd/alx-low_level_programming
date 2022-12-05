#include "main.h"
#include <stdio.h>
/**
 * file_error - function to check for correctness of files to copy.
 * @file_from: file being copied from
 * @file_to: file being copied to
 * @argv: arguments vector
 *
 * Return: nothing.
 */
void file_error(int file_from, int file_to, char *argv[])
{
	/* if file_from does not exist */
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* if file_to does not exist */
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - 
 * @argc: number of arguments.
 * @argv: arguments vectors
 *
 * Return: 0
 */

int main(int *argc, char *argv[])
{
	int file_to, file_from, close_err;
	ssize_t nchars, wrbytes;
	char buffer[1024];

	/* if number of arguments are incorrect */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	
	/* Open the files */
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_APPEND | O_WRONLY | O_TRUNC, 0664);


	/* copy 1024 bytes from file_from to file_to */
	nchar = 1024;
	while (nchar == 1024)
	{
		nchars = read(file_from, buffer, nchar);
		if (nchars == -1)
			file_error(-1, 1, argv);

		wrbytes = write(file_to, buffer, nchar);
		if (wrbytes == -1)
			file_error(1, -1, argv);
	}

	close_err = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_err = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
