#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid created by alloc_grid
 * @inc: pointer to the 2-dimensional array of integers
 * @height: the height of the grid
 * return: void
 */
void free_grid(int **inc, int height)
{
	int x;

	if (inc == NULL || height <= 0)
		return;

	for (x = 0; x < height; x++)
	{
		free(inc[x]);
	}

	free(inc);
}
