#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements of linked list
 * @h: the head of the linked list
 * Return: integer
 **/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
