#include "lists.h"
/**
 * get_nodeint_at_index - Locates a given node in a Linked list
 * @head : Pointer to the head of the Linked list
 * @index: Index of the node to find (indices starting at 0)
 * Return: Pointer to the desired node,
 *         or NULL - if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t node;

for (node = 0; (node < index) && (head->next); node++)
head = head->next;

if (node < index)
return (NULL);

return (head);
}
