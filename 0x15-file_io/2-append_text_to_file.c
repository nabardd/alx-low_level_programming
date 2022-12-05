#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 in failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write;

	if (filename)
	{
		fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return (-1);

		if (!text_content)
		{
			close(fd);
			return (-1);
		}

		_write = write(fd, text_content, str_len(text_content));
		if (write == -1 || write != str_len(text_content))
		{
			close(fd);
			return (-1);
		}

		close(fd);
		return (1);

	}
	return (-1);
}
