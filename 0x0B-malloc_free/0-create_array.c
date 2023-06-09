#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: the size of the array
 * @c: the initializes char
 * Return: string or null
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = (char *) malloc(size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(str + i) = c;

	return (str);
}
