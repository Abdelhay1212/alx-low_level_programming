#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
