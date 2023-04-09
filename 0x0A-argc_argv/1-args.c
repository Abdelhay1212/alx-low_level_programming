#include <stdio.h>

/**
  * main - prints the number of arguments passed into it.
  * @argc: the number of argument passed to the function.
  * @argv: holds the arguments passed to the function.
  * Return: returns 0.
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
