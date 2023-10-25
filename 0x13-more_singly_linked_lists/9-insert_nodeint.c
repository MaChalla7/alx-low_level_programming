#include "lists.h"
/**
 * insert_nodeint_at_index - Adds new Node to the Linked list
 *                           at a given Position
 * @head : Pointer to the head of the List
 * @idx  : Index of the List where the new node will be added
 *         (indices start at 0)
 * @n    : Value for the new node to be added
 * Return: Pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
unsigned int node;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = temp;
*head = new;
return (new);
}

for (node = 0; node < (idx - 1); node++)
{
if (temp == NULL || temp->next == NULL)
return (NULL);

temp = temp->next;
}

new->next = temp->next;
temp->next = new;

return (new);
}
