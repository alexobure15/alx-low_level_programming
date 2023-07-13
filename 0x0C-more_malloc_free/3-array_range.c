#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an  array of integers
 *
 * @min: min range of values stored
 *
 * @max: max range of values stored
 *
 * Return: pointer to the newly created array
 */

	int *array_range(int min, int max)
	{
		int *r;
		int i;
		int leng;

		if (min > max)
			return (NULL);

		leng = 0;
		for (i = min; i <= max; i++)
			leng++;

		r = malloc(sizeof(int) * leng);
		if (r == NULL)
			return (NULL);

		i = 0;
		while (min <= max)
		{
			r[i] = min;
			i++;
			min++;
		}
		return (r);
	}

