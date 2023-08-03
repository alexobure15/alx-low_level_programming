#include "main.h"

/**
 * get_bit - function that returns the bit value
 * at a particular index
 * @index: index, starting from 0 of the bit to get
 * @n: binary number
 * Return: value bit index or -1 on occuring of an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get_b;

	if (index > 64)
		return (-1);

	get_b = n >> index;

	return (get_b & 1);
}

