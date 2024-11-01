#include "main.h"
#include <stdio.h>

/**
 * * reverse_array - Function that reverses the content
 * of an array of integers.
 *
 * @a: Array of integers to be reverse
 * @n: The number of elements in the array
 *
 * Return: Pointer to the resulting string "dest"
 */

void reverse_array(int *a, int n)
{
	int  i, holder;

	for (i = n - 1 ; i >= n / 2; i--)
	{
		holder = a[(n - 1) - i]; /* holder = a[primera posicion]*/
		a[(n - 1) - i] = a[i]; /* a[primera posicion] = a[ultima posicion] */
		a[i] = holder; /* a[ultima posicion] = a[holder] */
	}
}
