#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to first node in the linked list
 * @idx: int
 * @n: int
 * Return: new node or null
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	temp = *head;
	while (i != idx - 1)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
