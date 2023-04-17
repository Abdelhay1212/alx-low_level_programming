#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: NULL or pointer to a string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, len;
	char *str;

	len1 = len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	len = len1 + len2;

	str = (char *) malloc(len + 1);
	if (str == NULL)
		return (NULL);

	if (n > len2)
		n = len2;

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}

	str[i] = '\0';

	return (str);
}
