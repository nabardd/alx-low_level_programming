#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * str_len - Function to compute the length of a string
 * @s: string to calculate length
 *
 * Return: length of string
 */
int str_len(char *s)
{
        int i;

        for (i = 0; s[i] != '\0'; s++)
                ;

        return (i);
}

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(char *filename, char *text_content);
