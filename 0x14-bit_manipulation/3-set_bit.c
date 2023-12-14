#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that set bit value
 * to 1 at a given index
 * @n: binary value
 *
 * @index: index starting  from 0 to the set bit
 *
 * Return: returns 1 on success or -1 on  error occurrance
 */

	int set_bit(unsigned long int *n, unsigned int index)
	{

		if (index > 64)
			return (-1);

		*n = ((1ul << index) | *n);
			return (1);
	}
