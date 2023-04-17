#include <stdlib.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of elements
  * @size: size of every element
  * Return: pointer or NULL
  **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, n;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;

	p = malloc(n);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		p[i] = 0;

	return (p);
}
