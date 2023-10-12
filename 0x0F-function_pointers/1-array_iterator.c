#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a Function given as a Parameter
 * on each Element of an Array
 * @array: Array to iterate over
 * @size: size of the array
 * @action: Pointer to Function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int f;

	if (!array || !action)
		return;

	for (f = 0; f < size; ++f)
		action(array[f]);
}
