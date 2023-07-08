#include "main.h"

/**
 * _strncat - concats two strings
 *
 * @dest: dest of concat
 *
 * @src: src array to concat
 *
 * @n: number of times to append
 *
 * Return: character value
 */

	char *_strncat(char *dest, char *src, int n)
	{
		int j;
		int k;

		j = 0;

		while (dest[j] != '\0')
		{
			j++;
		}

		k = 0;

		while (k < n && src[k] != '\0')
		{
			dest[j] = src[k];
			j++;
			k++;
		}
		dest[j] = '\0';
		return (dest);
	}
