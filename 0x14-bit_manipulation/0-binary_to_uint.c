#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Function that translate a
 * binary num to integer unsigned
 *
 * @b: binary string
 *
 * Return: converted num or 0 if there is one on more chars
 * in b not 0 0r 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dvalue = 0;

	if (!b)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dvalue = 2 * dvalue + (b[x] - '0');
	}
	return (dvalue);
}
