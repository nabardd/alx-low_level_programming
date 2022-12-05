#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Description: created file has permissions rw-------. If file already
 * exists, permissions are not changed. If the file already exists
 * truncate it.
 *
 * Return: if filename is NULL return -1, if text_content is NULL create
 * an empty file. Returns 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_context)
{
	int fd, _write;

	if (filename)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

		if (fd == -1)
			return (-1);

		if (!text_content)
		{
			close(fd);
			return (1);
		}

		_write = write(fd, text_content, str_len(*text_content));
		if (_write == -1 || _write != str_len(*text_content))
		{
			close(fd);
			return (-1);
		}

		close(fd);
		return (1);

	}

	return (-1);
}
