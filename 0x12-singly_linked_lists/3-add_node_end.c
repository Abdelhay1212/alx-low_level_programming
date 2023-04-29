#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head of the linked list
 * @str: string
 * Return: new node or null
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	temp = (node *)malloc(sizeof(node));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	ptr == *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
