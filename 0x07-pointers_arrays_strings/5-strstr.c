#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 * If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] != needle[j])
				break;
			i++;
		}

		if (needle[j] == '\0')
			return (haystack + (i - strlen(needle)));
		i++;
	}

	return (0);
}
