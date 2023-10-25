#include "lists.h"

/**
 * listint_len - Returns the number of Elements in Linked listint_t List.
 * @h: Pointer to the Head of the listint_t List.
 *
 * Return: the number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t i = 0;

	while (cursor != NULL)
	{
		i += 1;
		cursor = cursor->next;
	}
	return (i);
}
