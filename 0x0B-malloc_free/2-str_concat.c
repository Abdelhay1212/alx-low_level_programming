#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL or string
 **/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *concat;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	concat = (char *) malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; i++, j++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
}
