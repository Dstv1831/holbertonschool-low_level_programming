#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: Matrix length
 * @height: Matrix Height
 *
 * Return: Pointer to the 2 dimensional array of integers
 * that are initialized to 0
 * that hold the copy of "str"
 */

int **alloc_grid(int width, int height)
{
	int **twodimptr;
	int hei_ind, wid_ind;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for array of pointers (columns) */

	twodimptr = malloc(sizeof(int *) * height);

	/**
	 * Allocate memery for array of integers (rows),
	 * will have to itterate on my number of columns (height)
	 */

	for (hei_ind = 0; hei_ind < height; hei_ind++)
		twodimptr[hei_ind] = malloc(sizeof(int) * width);

	if (twodimptr == NULL)
		return (NULL);

	for (hei_ind = 0; hei_ind < height; hei_ind++)
		for (wid_ind = 0; wid_ind < width; wid_ind++)
			twodimptr[hei_ind][wid_ind] = 0;
	return (twodimptr);
}
