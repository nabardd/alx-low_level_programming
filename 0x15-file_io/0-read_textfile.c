#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: filename for file to be read
 * @letters: number of letters it letters it should read and print
 *
 * Description: if the file can not be opened or read, return 0.
 * if filename is NULL return 0, if write fails or does not write
 * the expected amount of bytes, return 0.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;

	ssize_t _read, _write;

	if (filename)
	{
		fd = open(filename, O_RDONLY);

		if (fd == -1)
			return (0);

		buffer = malloc(sizeof(char) * letters);
		if (!buffer)
			return (0);

		_read = read(fd, buffer, letters);
		if (_read == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}

		_write = write(STDIN_FILENO, buffer, _read);
		if (_write == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}

		close(fd);
		return (_read);
	}

	return (0);

}
