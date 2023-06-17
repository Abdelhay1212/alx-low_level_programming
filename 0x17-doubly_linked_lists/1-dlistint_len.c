#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a linked dlistint_t list.
  * @h: dlinked list
  * Return: integer
  */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
