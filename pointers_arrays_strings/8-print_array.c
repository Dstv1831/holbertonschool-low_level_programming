#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: String parameter.
 * @n: number of elements to be printed.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
