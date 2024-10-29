#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a : Pointer to an a int Parameter
 * @b : Pointer to an b int Parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
