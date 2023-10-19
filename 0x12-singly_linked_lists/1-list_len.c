#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns Number of Elements in a Linked List
 * @p: Pointer to the list_t List
 *
 * Return: Number of Elements in p
 */
size_t list_len(const list_t *p)
{
size_t n = 0;

while (p)
{
++n;
p = p->next;
}
return (n);
}

