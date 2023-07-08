#include "main.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 *
 * @src: source array to concat
 *
 * Return: nothing
 */

	char *_strcat(char *dest, char *src)
	{
		int j;
		int k;

		j = 0;

		while (dest[j] != '\0')
		{
			j++;
		}

		k = 0;

		while (src[k] != '\0')
		{
			dest[j] = src[k];
			j++;
			k++;
		}
		dest[j] = '\0';
		return (dest);
	}
