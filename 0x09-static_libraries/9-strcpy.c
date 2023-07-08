#include "main.h"

/**
 * char *_strcpy - Entry point
 *
 * @dest: dest to copy to
 *
 * @src: source to copy from
 *
 * Return: character value
 */

	char *_strcpy(char *dest, char *src)
	{
		int l = 0;
		int m = 0;

		while (*(src + l) != '\0')
		{
			l++;
		}

		for ( ; m < l; m++)
		{
			dest[m] = src[m];
		}

		dest[l] = '\0';
		return (dest);
	}
