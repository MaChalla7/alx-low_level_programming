#include "lists.h"

/**
 * list_len - Finds the number of Elements in
 *            a linked list_t List.
 * @h: The Singly linked list_t List.
 *
 * Return: The Number of Elements in the List.
 */

size_t list_len(const list_t *h)
{
	size_t n_of_nodes = 0;

	while (h)
	{
		n_of_nodes++;
		h = h->next;
	}

	return (n_of_nodes);
}
