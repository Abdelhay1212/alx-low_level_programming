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
	unsigned int index = 0;
	dlistint_t *current = NULL;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;

	current = *h;
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
