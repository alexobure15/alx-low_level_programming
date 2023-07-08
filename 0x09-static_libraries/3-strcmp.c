#include "main.h"

/**
 * _strcmp - string values to compare
 *
 * @s1: 1st string
 *
 * @s2: 2nd string
 *
 * Return:string value
 */

	int _strcmp(char *s1, char *s2)
	{
		int j;

		j = 0;

		while (s1[j] != '\0' && s2[j] != '\0')
		{
			if (s1[j] != s2[j])
			{
				return (s1[j] - s2[j]);

			}
			j++;
		}
		return (0);
	}
