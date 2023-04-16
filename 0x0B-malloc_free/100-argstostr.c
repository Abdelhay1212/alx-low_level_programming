#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: NULL or string
 **/
char *argstostr(int ac, char **av)
{
	int i, j;
	char **concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	concat = (char **) malloc(ac);

	if (concat == NULL)
		return (NULL);

	for (i = 1, j = 0; i < ac; i++, j++)
	{
		concat[j] = av[i];
		concat[++j] = '\n';
	}

	return (concat);
}
