#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string will duplicated
 * Return: NULL or string
 **/
char *_strdup(char *str)
{
	int i;
	char *word;
	int length = strlen(str);

	if (str == NULL)
		return (NULL);

	word = (char *) malloc(length);

	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		word[i] = str[i];

	return (word);
}
