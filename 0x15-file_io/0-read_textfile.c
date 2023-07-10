#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @file: text file to read
 * @num_letters: number of letters to be read
 * Return: wr- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *file, size_t num_letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t wr;
	ssize_t rd;

	file_d = open(file, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * num_letters);
	rd = read(file_d, buffer, num_letters);
	wr = write(STDOUT_FILENO, buf, t);

	free(buffer);
	close(file_d);
	return (wr);
}

