#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - excecutes a func given
 * as a param on each array element
 *
 * @array: int array
 *
 * @size: array size
 *
 * @action: func pointer
 *
 * Return: void
 */

	void array_iterator(int *array, size_t size, void (*action)(int))
	{
		unsigned int i;

		if (array == NULL || action == NULL)
			return;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
