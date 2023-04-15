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
	int i, len1, len2;
	char *concat;

	if (s1 == NULL && s2 == NULL)
		return (NUll);

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = (char *) malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i, j = 0; j < len2; i++, j++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
}
