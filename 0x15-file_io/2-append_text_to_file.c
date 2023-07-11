#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @file: A pointer to the name of the file.
 * @txt_cont: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *file, char *txt_cont)
{
	int opn, wr, length = 0;

	if (file == NULL)
		return (-1);

	if (txt_cont != NULL)
	{
		for (length = 0; txt_cont[length];)
			length++;
	}

	opn = open(file, O_WRONLY | O_APPEND);
	wr = write(opn, txt_cont, length);

	if (opn == -1 || wr == -1)
		return (-1);

	close(opn);

	return (1);
}

