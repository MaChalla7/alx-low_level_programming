#include "lists.h"

/**
 * listint_len - Returns the number of Elements in a Linked listint_t List.
 * @h: Pointer to the head of the listint_t List.
 *
 * Return: The Number of Elements in the listint_t List.
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
