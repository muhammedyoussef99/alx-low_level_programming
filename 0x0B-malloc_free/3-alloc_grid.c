#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to the 2-dimensional array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **inc;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	inc = (int **)malloc(sizeof(int *) * height);

	if (inc == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		inc[x] = (int *)malloc(sizeof(int) * width);

		if (inc[x] == NULL)
		{
			/* Free previously allocated memory in case of failure */
			for (y = 0; y < x; y++)
			{
				free(inc[y]);
			}
			free(inc);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			inc[x][y] = 0;
		}
	}

	return (inc);
}
