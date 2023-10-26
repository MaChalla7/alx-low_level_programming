#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - Sets the Value of a given bit to 0.
 * @n: Pointer to the bit.
 * @index: INDEX
 * Return: 1 if works, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
