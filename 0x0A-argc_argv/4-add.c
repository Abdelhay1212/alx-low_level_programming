#include <stdio.h>
#include <stdlib.h>

/**
  * main -  multiplies two numbers.
  * @argc: the number of arguments
  * @argv: stors the arguments
  * Return: 0 or 1
  */
int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *p;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		n = strtol(argv[i], &p, 10);
		if (*p)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
