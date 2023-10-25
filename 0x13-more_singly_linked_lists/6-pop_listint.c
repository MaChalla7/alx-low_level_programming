#include "lists.h"
/**
 * pop_listint - Deletes the Head Node
 * @head : Pointer to the head of the Linked List
 * Return: head node's data (n)
 *         or 0 - if the Linked List is Empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

temp = *head;

if (temp == NULL)
return (0);

*head = temp->next;
n = temp->n;
free(temp);
return (n);
}
