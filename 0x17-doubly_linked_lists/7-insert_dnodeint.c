#include "lists.h"

dlistint_t *insert_in_the_middle(dlistint_t **h, unsigned int idx, dlistint_t **temp)
{
	unsigned int index = 0;
	dlistint_t current = NULL;

	current = *h;
	while (current)
	{
		if (index == idx)
		{
			(*temp)->next = current;
			(*temp)->prev = current->prev;
			current->prev->next = *temp;
			current->prev = *temp;
			return (*temp);
		}
		index++;
		current = current->next;
	}
	return (NULL);
}

/**
  * insert_dnodeint_at_index - inserts a new node at a given position.
  * @h: dlinked list
  * @idx: index to insert at
  * @n: data to insert
  * Return: the inserted node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0;
	dlistint_t *current = NULL;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);  
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	current = *h;
	if (current == NULL)
	{
		*h = temp;
		return (*h);
	}
	if (idx == 0)
	{
		temp->next = current;
		current->prev = temp;
		*h = temp;
		return (temp);
	}
	while (current)
	{
		len++;
		current = current->next;
	}
	current = *h;
	if (idx == len)
	{
		while (current->next)
			current = current->next;
		current->next = temp;
		temp->prev = current;
		return (temp);
	}
	insert_in_the_middle(&h, idx, &temp);
	free(temp);
	return (NULL);
}
