#include "lists.h"

/**
 * free_list - Free a list_t List
 * @head: A Pointer to the head of the Linked List.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
