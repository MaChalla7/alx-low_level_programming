#include "main.h"

/**
 * print_binary - Prints the Binary Representation of any  Number.
 * @n: The Number to be Printed in Binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
