#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - creates a new dog.
  * @name: the name of dog
  * @age: the age of dog
  * @owner: the owner of dog
  * Return: NULL og new dog struct
  **/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nLen, oLen, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	nLen = strlen(name);
	oLen = strlen(owner);

	dog->name = malloc(sizeof(char) * nLen + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < nLen; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	dog->owner = malloc(sizeof(char) * oLen + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < oLen; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
