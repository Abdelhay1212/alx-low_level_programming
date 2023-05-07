#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp;

	if (!head)
		exit(98);

	temp = head;
	while (head)
	{
		printf ("[%p] %d\n", (void *)temp, temp->n);
		head = head->next;
		count++;
	}

	return (count);
}
