#include "main.h"


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

	dest_file = open(arv[2], O_CREAT | O_WRONLY | O_TRUNC);
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
	}while (re != -1)                                                
}       
