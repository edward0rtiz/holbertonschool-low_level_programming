#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer to aa 2 dimensional array of int
 * @width: type int width.
 * @height: type int height.
 * Return: Null if 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int x, y;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(**grid));
		if (grid[x] == NULL)
		{
			for (y--; y >= 0; y--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}