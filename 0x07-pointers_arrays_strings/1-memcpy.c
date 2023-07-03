#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
	char *_memcpy(char *dest, char *src, unsigned int n)
	{
		unsigned int i;
		char *from = src;

		for (i = 0; i < n; i++)
		{
			last[i] = from[i];
		}
		return (dest);
	}
