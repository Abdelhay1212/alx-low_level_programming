#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: the size of the array
 * @c: the initializes char
 * Return: string or null
 **/
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (NULL);

	str = (char*) malloc(size);
	for (i = 0; i < size; i++)
		*(str + i) = c;

	return (str);
}
