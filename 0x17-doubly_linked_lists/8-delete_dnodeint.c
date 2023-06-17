#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index
  * @head: dlinked list
  * @index: positive integer
  * Return: integer
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t current = NULL;

	if (*head == NULL)
		return (NULL);
	current = *head;
	while (current)
	{
		if (index == idx)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			return (1);
		}
		idx++;
		current = current->next;
	}
	return (-1);
}
