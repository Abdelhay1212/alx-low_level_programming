#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node of the linked list
 * Return: pointer to the first node
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = NULL;

	while (*head)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}

	*head = temp;

	return (*head);
}
