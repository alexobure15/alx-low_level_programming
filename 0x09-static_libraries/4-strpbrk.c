#include "main.h"

/**
 * _strpbrk - Locates string
 *
 * @s: string to be evaluated
 *
 * @accept: input strings
 *
 * Return: always 0 (Success)
 */

	char *_strpbrk(char *s, char *accept)
	{
		int j;

		while (*s)
		{
			for (j = 0; accept[j]; j++)
			{
				if (*s == accept[j])
				return (s);
			}
			s++;
		}
		return ('\0');
	}
