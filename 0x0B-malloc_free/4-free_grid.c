#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2D grid previously created
 *
 * @grid: pointer to a grid
 *
 * @height: height of rows in grid
 *
 * Return: always 0 (Success)
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
