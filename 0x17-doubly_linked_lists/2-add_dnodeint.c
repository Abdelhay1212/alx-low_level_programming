#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
  * @head: dlinked list
  * @n: data to add
  * Return: dlinked list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	current = *head;
	temp->next = current;
	current->prev = temp;
	current = temp;
	*head = current;
	return (*head);
}
