#include "lists.h"
/**
 * add_node - Adds a New Node at the Beginning
 * of a list_t List.
 * @head: A Pointer to the  Head of the Linked List.
 * @str: The String to be stored in the List.
 * Return: Address of the head. And Null if the Function Fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
