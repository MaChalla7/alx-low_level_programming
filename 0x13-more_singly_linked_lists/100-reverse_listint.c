#include "lists.h"

/**
 * reverse_listint - Reverses a Linked List.
 * @head: Pointer to the Head of the List.
 *
 * Return: Pointer to the First Node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
