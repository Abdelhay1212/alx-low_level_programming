#include "lists.h"

/*
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the dlinked list to print
 * Return: lenght of the dlinked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		print("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
