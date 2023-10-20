#include "lists.h"

/**
 * add_node_end - Adds a new Node at the End
 * of a list_t List.
 * @head: A Pointer to the head of the Linked List.
 * @str: The String to be stored in the List.
 * Return: Address of the Head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = NULL;
	last = *head;

	if (last == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
