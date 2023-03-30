#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @len: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
