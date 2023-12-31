#include "main.h"

/**
 * _strspn - entry point
 *
 * @s: string to go through
 *
 * @accept: bytes accepted
 *
 * Return: always 0 (Success)
 */

	unsigned int _strspn(char *s, char *accept)
	{
		unsigned int n = 0;
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
				if (*s == accept[k])
				{
					n++;
					break;
				}

				else if (accept[k + 1] == '\0')
				{
					return (n);
				}
			}
			s++;
		}
		return (n);
	}
