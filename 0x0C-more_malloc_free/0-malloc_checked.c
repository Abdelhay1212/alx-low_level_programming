#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: pointer or 98 if it fails
 **/
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = (unsigned int *) malloc(sizeof(unsigned int));

	if (p == NULL)
		exit(98);
	p = &b;
	return (p);
}
