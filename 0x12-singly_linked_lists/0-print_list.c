#include "lists.h"
/**
 * print_list - Prints all Elements of a list_t List.
 * @h: The list_t List.
 * Return: Number of Elements in the List.
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
