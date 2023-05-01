#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: first node of linked list
 * @index: int
 * Return: 1 or -1
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *ptr;

	if (!*head)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (temp)
	{
		if (i == index - 1)
		{
			ptr = temp;
			temp = temp->next;
			ptr->next = temp->next;
			free(temp);
			return (1);
		}

		temp = temp->next;
		i++;
	}

	return (-1);
}
