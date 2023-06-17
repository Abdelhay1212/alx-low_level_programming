#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position.
  * @h: dlinked list
  * @idx: index to insert at
  * @n: data to insert
  * Return: the inserted node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0, len = 0;
	dlistint_t *current = NULL;
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	
	if (temp == NULL)
		return (NULL);
	temp->n = n;

	current = *h;
	if (idx == 0)
	{
		temp->next = current;
		current->prev = temp;
		temp->prev = NULL;
		return (temp);
	}

	while (current)
	{
		len++;
		current = current->next;
	}

	current = *h;
	if (len == idx + 1)
	{
		while (current->next)
		{
			current = current->next;
		}

		temp->prev = current;
		current->next = temp;
		temp->next = NULL;

		return (temp);
	}

	index = 0;
	while (current)
	{
		if (index == idx)
		{
			temp->next = current;
			temp->prev = current->prev;
			current->prev->next = temp;
			current->prev = temp;
			return (temp);
		}

		index++;
		current = current->next;
	}
	return (NULL);
}
