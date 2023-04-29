#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the head of the list
 * @str: string
 * Return: new head
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	temp = (list_t *) malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;

	*head = temp;
	return (*head);
}
