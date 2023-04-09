#include <stdio.h>

/**
  * main -  multiplies two numbers.
  * @argc: the number of arguments
  * @argv: stors the arguments
  * Return: 0 or 1
  */
int main(int argc, char *argv[])
{
	int a = argv[1];
	int b = argv[2];

	if (argc == 2)
	{
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
