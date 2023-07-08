#include "main.h"

/**
 * _memset - block of memory filled with a specific value
 *
 * @s: starting address of memory
 *
 * @b: desired value
 *
 * @n: bytes to be changed
 *
 * Return: character value of s
 */

	char *_memset(char *s, char b, unsigned int n)
	{
		int j = 0;

		for (; n > 0; j++)
		{
			s[j] = b;
			n--;
		}
		return (s);
	}
