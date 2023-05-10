#include <string.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file
 * @text_content: is a NULL terminated string to write to the file
 * Return: -1 or 1
 **/
int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, strlen(text_content));

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
