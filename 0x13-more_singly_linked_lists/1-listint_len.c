#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the head of the linked list
 * Return: integer
 **/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}

	return (count);
}
