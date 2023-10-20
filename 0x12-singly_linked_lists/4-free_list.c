#include "lists.h"

/**
 * free_list - free a Linked List
 * @head: list_t List to be Free
 * Return: no Return.
 */
void free_list(list_t *head)
{
list_t *current;

while ((current = head) != NUL)
{
temp = head->next;
free(head->str);
free(head);
head = current;
}
}

