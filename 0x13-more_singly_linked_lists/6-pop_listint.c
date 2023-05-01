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
	int n;
	listint_t *temp;

	if (!*head || !head)
		return (0);

	temp = malloc(sizeof(listint_t *));

	n = (*head)->n;
	temp = *head;
	temp = temp->next;
	free(*head);
	*head = temp;

	return (n);
}
