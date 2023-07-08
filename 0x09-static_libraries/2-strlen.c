#include "main.h"

/**
 * _strlen - checks the length of a string
 *
 * @s: string to determine
 *
 * Return: returns the length
 */

	int _strlen(char *s)
	{
		int len = 0;

		while (*s != '\0')
		{
			len++;
			s++;
		}
		return (len);
	}
