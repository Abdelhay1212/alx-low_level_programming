#include <stdlib.h>

/**
 * length - calculate the length of two dimnetional array
 * @ac: number of arrays in the array
 * @av: array
 * Return: integer
 **/
int length(int ac, char **av)
{
	int i, j, len;
	char *str;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		str = av[i];

		while (str[j++])
			len++;
		len++;
	}
	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: NULL or string
 **/
char *argstostr(int ac, char **av)
{
	int i, j ,k , len;
	char *concat, *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = length(ac, av);

	concat = (char *) malloc(len + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++, j++)
	{
		k = 0;
		str = av[i];

		while (str[k])
		{
			concat[j] = str[k];
			j++;
			k++;
		}
		concat[j] = '\n';
	}

	return (concat);
}
