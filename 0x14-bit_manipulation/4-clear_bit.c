#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that set bit value to 0 at a particular index
 *
 * @index: starting index at 0 of the set bit
 *
 * @n: integer value
 *
 * Return: returns 1 on success or -1 on error occurrance
 */

	int clear_bit(unsigned long int *n, unsigned int index)
	{
		if (index >= sizeof(unsigned long int) * 8)
			return (-1);

		*n = *n & ~(1ul << index);
			return (1);
	}

