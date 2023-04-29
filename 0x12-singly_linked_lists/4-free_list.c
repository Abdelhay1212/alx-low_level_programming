#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the head of the list
 * Return: void
 **/
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		temp = temp->next;
		free(head);
		head = temp;
	}
}
