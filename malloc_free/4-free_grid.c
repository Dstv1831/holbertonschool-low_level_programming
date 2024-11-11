#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2
 * dimensional grid previously created
 *
 * @grid: Grid to free
 * @height: Number of colums
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index <= height; index++)
		free(grid[index]);
	free(grid);
}
