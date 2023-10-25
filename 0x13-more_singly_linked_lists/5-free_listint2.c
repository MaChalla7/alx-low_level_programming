#include "lists.h"
/**
 * free_listint2 - Frees the Linked List
 * @head : pointer to Address of the Hhead of the List.
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;

while (*head)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
head = NULL;
}
