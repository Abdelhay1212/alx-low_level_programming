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
	list_t *temp = NULL;

	temp = (list_t *) malloc(sizeof(list_t));

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
