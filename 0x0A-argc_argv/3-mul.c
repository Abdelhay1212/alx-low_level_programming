#include <stdio.h>
#include <stdlib.h>

/**
  * main -  multiplies two numbers.
  * @argc: the number of arguments
  * @argv: stors the arguments
  * Return: 0 or 1
  */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
