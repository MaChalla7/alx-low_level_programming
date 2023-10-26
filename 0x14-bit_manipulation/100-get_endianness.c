#include "main.h"

/**
 * get_endianness - Checks the Endianness
 *
 * Return: 0 if big Endian, 1 if little Endian
 */
int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;
	return (*j);
}
