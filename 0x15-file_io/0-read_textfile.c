#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: pointer to the file
 * @letters: the number of letters it should read and print
 * Return: 0 or number of letters printed
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || re == -1 || wr == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (wr);
}
