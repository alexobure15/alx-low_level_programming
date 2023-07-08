#include "main.h"

/**
 * _strchr - Locates character in string
 *
 * @s: string to determine the character
 *
 * @c: char to locate
 *
 * Return: Always 0 (Success)
 */

	char *_strchr(char *s, char c)
	{
		int j = 0;

		for (; s[j] >= '\0'; j++)
		{
			if (s[j] == c)
				return (&s[j]);
		}
		return (0);
	}
