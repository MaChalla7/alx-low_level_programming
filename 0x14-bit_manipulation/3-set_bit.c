#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given INDEX
 * @n: A Pointer to the Number to the Set.
 * @index: The INDEX to set the bit.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
