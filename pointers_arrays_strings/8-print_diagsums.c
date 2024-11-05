#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the sum
 * of the two diagonals of a square matrix of integers.
 *
 * @a: Matrix of integers
 * @size: Size of the Matrix (square)
 */

void print_diagsums(int *a, int size)
{
	/**
	 * it has to be done this way
	 * as the array of arrays ("a[][]")
	 * is being pointed just by a pointer to an int *
	 * and not to a pointer to an array,
	 * therefore we have to consider the matrix in a linear form
	 * [0,0][0,1][0,2][0,3],[1,0][1,1][1,2][1,3],[2,1] ... etc
	 */
	int i, dia_1 = 0, dia_2 = 0;

	for (i = 0; i < size; i++)
	{
		dia_1 += a[i * size + i];
		dia_2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", dia_1, dia_2);
}
