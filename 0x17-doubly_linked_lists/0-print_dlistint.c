#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * of a dlistint_t list.
 *
 * @h: head
 * Return: number of nodes counted
*/

size_t print_dlistint(const dlistint_t *h)
{
	int n_count;

	n_count = 0;

	if (h == NULL)
		return (n_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_count++;
		h = h->next;
	}

	return (n_count);
}
