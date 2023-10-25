#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Calculates the sum of all Data (n) of a Linked List
 * @head : A Pointer to the head of the List
 * Return: sum of all the data (n),
 *         or 0 - if the list is Empty
 */
int sum_listint(listint_t *head)
{
int sum;

sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
