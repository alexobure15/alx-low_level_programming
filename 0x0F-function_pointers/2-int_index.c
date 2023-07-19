#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 *
 * @array: input array integer
 *
 * @size: array size
 *
 * @cmp: pointer to func to be used for
 * value comparison
 *
 * Return: return -1 if no element matches or
 * if size <= 0If size <= 0
 */

	int int_index(int *array, int size, int (*cmp)(int))
	{
		int i;

		if (array == NULL || size <= 0 || cmp == NULL)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
