#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list.
 *
 * @head: head of list
 * @index: index of node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *t;

	size = 0;
	if (head == NULL)
	return (NULL);

	t = head;
	while (t)
	{
	if (index == size)
	return (t);
	size++;
	t = t->next;
	}
	return (NULL);
}
