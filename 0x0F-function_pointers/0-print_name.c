#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to Print
 * @p: Pointer to the Printing Function
 */

void print_name(char *name, void (*p)(char *))
{
	if (!name || !p)
		return;
	p(name);
}
