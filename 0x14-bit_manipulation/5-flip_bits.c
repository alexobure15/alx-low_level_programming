#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns num of bits required to be flipped from
 * one num to another
 *
 * @n: 1st number to be evaluated
 *
 * @m: 2nd number to be evaluated
 *
 * Return: num of bits required to be flipped
 */

	unsigned int flip_bits(unsigned long int n, unsigned long int m)
	{
		int x, c = 0;

		unsigned long int curr;
		unsigned long int excl = n ^ m;

		for (x = 63; x >= 0; x--)
		{
			curr = excl >> i;

			if (curr & 1)
				c++;
		}

		return (c);
	}
