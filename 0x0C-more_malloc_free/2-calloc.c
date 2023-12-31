#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements in the array
 *
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */

	void *_calloc(unsigned int nmemb, unsigned int size)
	{
		char *r;
		unsigned int i;

		if (nmemb == 0 || size == 0)
			return (NULL);

		r = malloc(nmemb * size);
		if (r == NULL)
			return (NULL);

		for (i = 0; i < nmemb * size; i++)
			r[i] = 0;

		return (r);
	}
