 #include "main.h"

/**
* swap_int - swaps the values of the intergers
* @a: integer to swap
* @b: integer to swap
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a  = *b;
	*b = n;
}
