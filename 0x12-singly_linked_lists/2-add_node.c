#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a New Node at the Bginning of a Linked List
 * @head: Double Pointer to the list_t List
 * @str: New String to add in the Node
 *
 * Return: The Address of the New Element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (*head);
}

