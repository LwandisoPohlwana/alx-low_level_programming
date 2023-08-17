#include "lists.h"

/**
 **add_dnodeint - adds a new node at the
 * beginning of a dlistint_t list.
 *
 * @head: head of list
 * @n: element value
 * Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;
	dlistint_t *h_cpy;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->prev = NULL;
	h_cpy = *head;

	if (h_cpy != NULL)
	{
		while (h_cpy->prev != NULL)
			h_cpy = h_cpy->prev;
	}

	new_head->next = h_cpy;

	if (h_cpy != NULL)
		h_cpy->prev = new_head;

	*head = new_head;

	return (new_head);
}
