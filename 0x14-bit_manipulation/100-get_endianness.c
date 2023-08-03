#include <stdio.h>
#include "main.h"

/**
 * get_endianness - func that determines endianness
 *
 *
 * Return: returns 0 for big endian or 1 for little endian
 */

	int get_endianness(void)
	{
		int i = 1;

		char *endian = (char *)&i;

		if (*endian == 1)
			return (1);

		return (0);

	}

