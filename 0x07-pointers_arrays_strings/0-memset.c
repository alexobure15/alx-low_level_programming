#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @n: string array
 *
 * @s: constant byte
 *
 * @b: the value that the memory will be filled with
 * .
 * Return: pointer
 */

	char *_memset(char *s, char b, unsigned int n)
	{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
		return (s);
	}
