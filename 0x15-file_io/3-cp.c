#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments passed to the function main
 * @argv: stores the arguments passed to the function
 * Return: 0
 **/
int main(int argc, char *argv[])
{
 	int src_file, dest_file, re;
 	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_file = open(argv[1], O_RDONLY);
	if (src_file == -1)
	{
		dprintf(STDOUT_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest_file = open(arv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_file == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do
	{
		re = read(src_file, buffer, 1024);
		if (re == -1)
		{
			dprintf(STDOUT_FILENO, 
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wr = write(dest_file, buffer, 1024);
		if (wr == -1)
		{
			dprintf(STDOUT_FILENO, 
					"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	} while (re != -1)

	c_src = close(src_file);
	c_dest = close(dest_file);

	if (c_src == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}

	if (c_dest == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n",dest_file);
		exit(100);
	}

	return (0);
}       
