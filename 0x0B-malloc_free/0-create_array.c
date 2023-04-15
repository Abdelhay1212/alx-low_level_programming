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

	str = malloc(size);
	*(str + 0) = c;

	return (str);
}
