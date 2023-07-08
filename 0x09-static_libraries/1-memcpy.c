#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: dest to copy to
 *
 * @src: src to copy from
 *
 * @n: number of bytes
 *
 * Return: void
 */

	char *_memcpy(char *dest, char *src, unsigned int n)
	{
		int i = 0;
		int j = n;

		for (; i < j; i++)
		{
			dest[j] = src[j];
			n--;
		}
		return (dest);
	}
