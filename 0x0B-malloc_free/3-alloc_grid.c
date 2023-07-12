#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates a nested loop to make a grid
 *
 * @width: array width
 *
 * @height: array height
 *
 * Return: pointer to 2 dimensional array
 */

	int **alloc_grid(int width, int height)
	{
		int j;
		int k;
		int **r;

		if (width <= 0 || height <= 0)
			return (NULL);

		r = (int **)malloc(sizeof(int *) * height);
		if (r == NULL)
			return (NULL);

		for (j = 0; j < height; j++)
		{
			r[j] = (int *)malloc(sizeof(int) * width);
			if (r[j] == NULL)
			{
				for (k = 0; k < j; k++)
				{
					free(r[k]);
				}
				free(r);
			}
		}
		for (j = 0; j < height; j++)
			for (k = 0; k < width; k++)
				r[j][k] = 0;

		return (r);

	}
