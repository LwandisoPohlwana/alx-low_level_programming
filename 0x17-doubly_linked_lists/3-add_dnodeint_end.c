#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the
 * end of a dlistint_t list.
 *
 * @head: head node
 * @n: element value
 * Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h_cpy;
	dlistint_t *new_end_node;

	new_end_node = malloc(sizeof(dlistint_t));
	if (new_end_node == NULL)
		return (NULL);

	new_end_node->n = n;
	new_end_node->next = NULL;

	h_cpy = *head;

	if (h_cpy != NULL)
	{
		while (h_cpy->next != NULL)
			h_cpy = h_cpy->next;
		h_cpy->next = new_end_node;
	}
	else
	{
		*head = new_end_node;
	}

	new_end_node->prev = h_cpy;

	return (new_end_node);
}
