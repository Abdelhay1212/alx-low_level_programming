#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: point to the first node
 * @n: new node
 * Return: null or the address of the new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t *));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (temp);
}
