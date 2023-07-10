#include "main.h"

/**
 * create_file - Creates a file.
 * @file: A pointer to the name of the file to create.
 * @txt_cont: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *file, char *txt_cont)
{
	int file_d, wr, length = 0;

	if (file == NULL)
		return (-1);

	if (txt_cont != NULL)
	{
		for (length = 0; txt_cont[length];)
			length++;
	}

	file_d = open(file, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file_d, txt_cont, length);

	if (file_d == -1 || wr == -1)
		return (-1);

	close(file_d);

	return (1);
}

