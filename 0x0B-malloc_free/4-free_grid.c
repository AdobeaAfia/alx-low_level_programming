#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2dimension array
 * @grid: 2dimension grid
 * @height: desired height dimension of grid
 * Description: frees memory of grid
 * Return: when successful (0)
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
