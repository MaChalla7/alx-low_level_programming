#include "main.h"

/**
 * flip_bits - Counts the Number of bits Needes to be Flipped
 * to get from one Number to Another
 * @n: First Number
 * @m: The Second Number to Flip n to
 *
 * Return: Number of Bits to Change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, i = 0;
	unsigned long int curr;
	unsigned long int xor = n ^ m;

	for (j = 63; j >= 0; --j)
	{
		curr = xor >> j;
		if (curr & 1)
			++i;
	}

	return (i);
}
