#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: poiter to the first node of the linked list
 * Retrun: void
 **/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (*head)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
