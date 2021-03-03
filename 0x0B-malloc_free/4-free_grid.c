#include "holberton.h"

/**
 * free_grid - frees a 2d grid
 * @grid : grid
 * @height : height
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
