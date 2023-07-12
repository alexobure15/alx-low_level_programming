#include "main.h"
#include <stdlib.h>

/**
 * create_array - cretes an array
 * @size: array size
 *
 * @c: character to assign
 *
 * Return: character value
 */

	char *create_array(unsigned int size, char c)
	{
		unsigned int i;
		char *r;

		r = malloc(sizeof(char) * size);

		if (size == 0 || r == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			r[i] = c;

		return (r);
	}
