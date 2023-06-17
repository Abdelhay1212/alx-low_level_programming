#include "lists.h"

dlistint_t *create_node(int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return NULL;
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	return node;
}

void insert_after_node(dlistint_t *node, dlistint_t *new_node)
{
	new_node->next = node->next;
	new_node->prev = node;
	if (node->next)
		node->next->prev = new_node;
	node->next = new_node;
}

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0;
	dlistint_t *current = *h;

	if (current == NULL && idx > 0)
		return NULL;

	if (idx == 0)
	{
		dlistint_t *new_node = create_node(n);
		if (new_node == NULL)
			return NULL;
		new_node->next = current;
		if (current)
			current->prev = new_node;
		*h = new_node;
		return new_node;
	}

	while (current)
	{
		if (len == idx - 1)
		{

		dlistint_t *new_node = NULL;

		*new_node = create_node(n);
		if (new_node == NULL)
			return NULL;
		insert_after_node(current, new_node);
		return new_node;
		}
		len++;
		current = current->next;
	}

	if (len == idx)
	{
		dlistint_t *new_node = create_node(n);
		if (new_node == NULL)
			return NULL;
		if (current)
			insert_after_node(current, new_node);
		else
			*h = new_node;
		return new_node;
	}

	return NULL;
}
