#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all Elements of a Linked List
 * @h: Pointer to the list_t List to Print
 *
 * Return: The Number of Nodes Printed
 */
size_t print_list(const list_t *h)
{
size_t s = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
++s;
}

return (s);
}

