#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - fct frees second array
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Return: Nothing
 *
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
