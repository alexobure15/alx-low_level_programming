#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: dest to copy
 *
 * @src: src to copy
 *
 * @n: size of space to copy
 *
 * Return: Always 0 (Success)
 */

	char *_strncpy(char *dest, char *src, int n)
	{
		int k;

		k = 0;
		while (k < n && src[k] != '\0')
		{
			dest[k] = src[k];
			k++;

		}
		while (k < n)
		{
			dest[k] = '\0';
			k++;
		}
		return (dest);
	}
