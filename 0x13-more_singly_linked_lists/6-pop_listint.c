#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the first node of the linked list
 * Return: returns the head node’s data (n) or null
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = malloc(sizeof(listint_t *));

	temp = *head;
	temp = temp->next;
	free(*head);
	*head = temp;

	return ((*head)->n);
}
